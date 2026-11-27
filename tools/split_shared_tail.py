#!/usr/bin/env python3
"""Move the tail of a shared module source, from one function to the end, into its own TU.

    tools/split_shared_tail.py VER MODULE FUNC STEM CFLAGS

For objects linked last that were built separately (e.g. crtend's
__do_global_ctors_aux at -O2 in an -Os module). FUNC is the entry name in the
shared source of VER. Every version whose source has FUNC gets a `c` (and
`.rodata`) subsegment for src/<mod>/<STEM>.c in its config (tools/split_tu.py
--config-only); the tail entries (with their version conditions) move to that
file, whose header is the original's with `/* cflags: CFLAGS */` only. Every
version sharing the source is rebuilt; on any mismatch everything is restored.
"""
import re
import shutil
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import fwmodel as FM  # noqa: E402
from srcdir import sharing_versions, src_dir  # noqa: E402


def fw(v):
    return int(re.match(r"\d+", v)[0])


def run(*cmd):
    r = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True)
    return r.returncode, r.stdout + r.stderr


def main():
    ver, mod, func, stem, cflags = sys.argv[1:6]
    sd = src_dir(ver, mod)
    vers = sharing_versions(ver, mod)
    fv = sorted({fw(v) for v in vers})
    owner = next((p for p in sd.glob("*.c") if any(e.name == func and fw(ver) in e.vers
                                                   for e in FM.parse(p.read_text(), fv))), None)
    if owner is None:
        sys.exit(f"{func}: not in {sd}")
    ents = FM.parse(owner.read_text(), fv)
    k = next(i for i, e in enumerate(ents) if e.name == func and fw(ver) in e.vers)
    s = set(ents[k].vers)
    tail = ents[k:]
    if any(not set(e.vers) <= s for e in tail if e.kind != "other" or e.text.strip()):
        sys.exit(f"{func}: the tail has entries for versions without it")
    if (sd / f"{stem}.c").exists():
        sys.exit(f"{stem}.c exists")
    targets = [v for v in vers if fw(v) in s]
    saved = {p: p.read_text() for p in list(sd.glob("*.c"))}
    cfgs = {}
    for v in targets:
        for p in (ROOT / "config" / v / f"{mod}.yaml", ROOT / "config" / v / f"func_starts.{mod}.txt"):
            cfgs[p] = p.read_text() if p.exists() else None

    def restore():
        for p, t in saved.items():
            p.write_text(t)
        (sd / f"{stem}.c").unlink(missing_ok=True)
        for p, t in cfgs.items():
            if t is None:
                p.unlink(missing_ok=True)
            else:
                p.write_text(t)
        run("tools/regress.sh", "--shared", f"{ver}:{mod}")

    # configs first (from current builds, before the source moves)
    for v in targets:
        rc, out = run("tools/regress.sh", f"{v}:{mod}")
        if rc or ": OK" not in out:
            restore()
            sys.exit(f"{v}:{mod}: does not build before the split")
        rc, out = run(".venv/bin/python", "tools/split_tu.py", v, mod, f"{func}:{cflags}", "--config-only", f"--stem={stem}")
        if rc:
            restore()
            sys.exit(f"{v}: split_tu failed: {out[-500:]}")
    text = saved[owner]
    first = re.search(r"^(INCLUDE_ASM|INCLUDE_RODATA|#if|\w[\w \*]*\b\w+\(.*\)\s*\{$)", text, re.M)
    header = text[:first.start()]
    header = re.sub(r"^/\* cflags(\[[^\]]*\])?: [^*]*\*/\n", "", header, flags=re.M)
    header = f"/* cflags: {cflags} */\n" + header
    body = FM.emit(tail, fv).replace(f'nonmatchings/{owner.stem}"', f'nonmatchings/{stem}"')
    (sd / f"{stem}.c").write_text(header + body.lstrip("\n"))
    owner.write_text(FM.emit(ents[:k], fv).rstrip("\n") + "\n")
    rc, out = run("tools/regress.sh", "--shared", f"{ver}:{mod}")
    bad = [l for l in out.splitlines() if ": OK" not in l and l.strip()]
    if bad:
        restore()
        sys.exit(f"{mod}: split breaks {bad[:3]}")
    print(f"{mod}: {func} and the tail -> {stem}.c ({cflags}) for {targets}")


if __name__ == "__main__":
    main()
