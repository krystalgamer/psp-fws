#!/usr/bin/env python3
"""Per-version cflags for a shared module, from auto_decomp's per-function stats.

    tools/version_flags.py VER MODULE [--apply]

auto_decomp records which settings reproduce each m2c draft
(tmp/auto_stats/VER_MODULE.json). For every TU file, the setting most of its
functions match with becomes `/* cflags[V]: ... */` when it differs from what
the file uses for VER now (options only; the compiler stays the per-version
choice of tools/cc_of.py). Kept only if every version still builds.
"""
import collections
import json
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import cc_of  # noqa: E402
import fwmodel as FM  # noqa: E402
from srcdir import sharing_versions, src_dir  # noqa: E402


def main():
    ver, mod = sys.argv[1], sys.argv[2]
    apply = "--apply" in sys.argv
    v = int(re.match(r"\d+", ver)[0])
    stats = ROOT / "tmp/auto_stats" / f"{ver}_{mod}.json"
    if not stats.exists():
        sys.exit(f"{ver}:{mod}: no stats")
    funcs = json.loads(stats.read_text())["funcs"]
    sd = src_dir(ver, mod)
    fv = sorted({int(re.match(r"\d+", x)[0]) for x in sharing_versions(ver, mod)})
    changes = {}
    for f in sorted(sd.glob("*.c")):
        text = f.read_text()
        names = {e.name for e in FM.parse(text, fv) if v in e.vers and e.kind in ("asm", "cfunc")}
        comp, own = cc_of.setting(text, ver, mod)
        c = collections.Counter(s.split(" ", 1)[1] for n in names for s in funcs.get(n, [])
                                if s.startswith(comp + " ") and "variant" not in s and "volatile" not in s)
        if not c:
            continue
        best, k = c.most_common(1)[0]
        if best != own and k > c.get(own, 0):
            changes[f] = (own, best, k, c.get(own, 0))
    for f, (own, best, k, ko) in changes.items():
        print(f"{ver}:{mod} {f.name}: {own} ({ko}) -> {best} ({k})")
    if not apply or not changes:
        return
    for f, (own, best, _, _) in changes.items():
        t = f.read_text()
        f.write_text(f"/* cflags[{v}]: {best} */\n" + t)
    r = subprocess.run(["tools/regress.sh", "--shared", f"{ver}:{mod}"], cwd=ROOT, capture_output=True, text=True)
    if r.returncode:
        for f, (own, best, _, _) in changes.items():
            f.write_text(f.read_text().replace(f"/* cflags[{v}]: {best} */\n", "", 1))
        print(f"{ver}:{mod}: existing C does not build with the new flags, kept")
        return
    print(f"{ver}:{mod}: OK")


if __name__ == "__main__":
    main()
