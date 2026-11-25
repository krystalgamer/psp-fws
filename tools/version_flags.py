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
import fwblocks as FB  # noqa: E402
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
    def c_count():
        return sum(1 for f in sd.glob("*.c") for e in FM.parse(f.read_text(), fv) if v in e.vers and e.kind == "cfunc")

    def build():
        r = subprocess.run(["make", f"VERSION={ver}", f"MODULE={mod}"], cwd=ROOT, capture_output=True, text=True)
        return ": OK" in r.stdout + r.stderr

    # function ranges from a matching build (C functions have no asm to tell)
    for f, (own, best, _, _) in changes.items():
        f.write_text(f.read_text().replace(f"/* cflags[{v}]: {best} */\n", "", 1))
    if not build():
        sys.exit(f"{ver}:{mod}: does not build before the change")
    from elftools.elf.elffile import ELFFile
    elf = ELFFile(open(ROOT / "tmp/build" / ver / f"{mod}.elf", "rb"))
    text_sec = elf.get_section_by_name(f".{mod}") or elf.get_section_by_name(".text")
    ranges = sorted((sy["st_value"], sy["st_value"] + sy["st_size"], sy.name)
                    for sy in elf.get_section_by_name(".symtab").iter_symbols()
                    if sy["st_info"]["type"] == "STT_FUNC" and sy["st_size"] and "." not in sy.name)
    text_off = ELFFile(open(ROOT / "tmp/baserom" / ver / f"{mod}.prx", "rb")).get_segment(0)["p_offset"]
    base = (ROOT / "tmp/baserom" / ver / f"{mod}.prx").read_bytes()
    for f, (own, best, _, _) in changes.items():
        f.write_text(f"/* cflags[{v}]: {best} */\n" + f.read_text())
    before = c_count()
    gain = sum(k - ko for _, _, k, ko in changes.values())
    ok = False
    for _ in range(gain + 5):
        if build():
            ok = True
            break
        built = (ROOT / "tmp/build" / ver / f"{mod}.prx").read_bytes()
        diff = next((i for i in range(min(len(built), len(base))) if built[i] != base[i]), min(len(built), len(base)))
        hit = next((n for lo, hi, n in ranges if lo <= diff - text_off < hi), None)
        owner = next((f for f in sd.glob("*.c") if FB.has_c(f.read_text(), ver, fv, hit)), None) if hit else None
        if not owner:
            break
        owner.write_text(FB.put_asm(owner.read_text(), ver, fv, hit, f"nonmatchings/{owner.stem}"))
        print(f"  {hit}: C differs with the new flags, asm in {ver}")
    lost = before - c_count()
    if ok and lost < gain:
        r = subprocess.run(["tools/regress.sh", "--shared", f"{ver}:{mod}"], cwd=ROOT, capture_output=True, text=True)
        if not r.returncode:
            print(f"{ver}:{mod}: OK" + (f" ({lost} shared C functions back to asm in {ver})" if lost else ""))
            return
    subprocess.run(["git", "checkout", "-q", "--", str(sd.relative_to(ROOT))], cwd=ROOT)
    print(f"{ver}:{mod}: new flags {'would lose ' + str(lost) + ' C functions for ' + str(gain) if ok else 'do not build'}, kept")


if __name__ == "__main__":
    main()
