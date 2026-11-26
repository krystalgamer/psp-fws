#!/usr/bin/env python3
"""Build a module's firmware version with a given compiler, demoting C that no longer matches.

    tools/set_compiler.py VER MODULE COMPILER [--files a.c,b.c]

Adds `/* compiler[V]: COMPILER */` to the module's TU files (all, or --files)
for firmware version V. Shared C that then builds differently for V goes back
to INCLUDE_ASM for V only (found from the first differing byte, or the
function before it); other versions are unaffected. The switch is kept even if
C is lost: the right compiler comes first (lost functions are decompiled again
by the next pass). Every version sharing the source must still match.
"""
import re
import subprocess
import sys
from pathlib import Path

from elftools.elf.elffile import ELFFile

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import fwblocks as FB  # noqa: E402
import fwmodel as FM  # noqa: E402
from srcdir import sharing_versions, src_dir  # noqa: E402


def main():
    ver, mod, comp = sys.argv[1], sys.argv[2], sys.argv[3]
    only = None
    if "--files" in sys.argv:
        only = set(sys.argv[sys.argv.index("--files") + 1].split(","))
    v = int(re.match(r"\d+", ver)[0])
    sd = src_dir(ver, mod)
    fv = sorted({int(re.match(r"\d+", x)[0]) for x in sharing_versions(ver, mod)})
    files = [f for f in sorted(sd.glob("*.c")) if only is None or f.name in only]
    orig = {p: p.read_text() for p in list(sd.glob("*.c")) + list(sd.glob("*_decls.*"))}

    def build():
        prx = ROOT / "tmp/build" / ver / f"{mod}.prx"
        prx.unlink(missing_ok=True)
        r = subprocess.run(["make", f"VERSION={ver}", f"MODULE={mod}"], cwd=ROOT, capture_output=True, text=True)
        if "can't open nonmatchings/" in r.stdout + r.stderr:
            # demoted functions need their asm: re-split
            subprocess.run(["make", "split", f"VERSION={ver}", f"MODULE={mod}"], cwd=ROOT, capture_output=True)
            prx.unlink(missing_ok=True)
            r = subprocess.run(["make", f"VERSION={ver}", f"MODULE={mod}"], cwd=ROOT, capture_output=True, text=True)
        return ": OK" in r.stdout + r.stderr

    def c_count():
        return sum(1 for f in sd.glob("*.c") for e in FM.parse(f.read_text(), fv) if v in e.vers and e.kind == "cfunc")
    if not build():
        sys.exit(f"{ver}:{mod}: does not build before the change")
    elf = ELFFile(open(ROOT / "tmp/build" / ver / f"{mod}.elf", "rb"))
    ranges = sorted((sy["st_value"], sy["st_value"] + sy["st_size"], sy.name)
                    for sy in elf.get_section_by_name(".symtab").iter_symbols()
                    if sy["st_info"]["type"] == "STT_FUNC" and sy["st_size"] and "." not in sy.name)
    text_sec = elf.get_section_by_name(f".{mod}")
    text_end = (text_sec["sh_addr"] + text_sec["sh_size"]) if text_sec else 1 << 32
    gaddr = {sy.name: sy["st_value"] for sy in elf.get_section_by_name(".symtab").iter_symbols()
             if sy.name and re.fullmatch(r"\w+", sy.name) and not sy.name.endswith(("_START", "_END", "_SIZE", "_VRAM"))}
    text_off = ELFFile(open(ROOT / "tmp/baserom" / ver / f"{mod}.prx", "rb")).get_segment(0)["p_offset"]
    base = (ROOT / "tmp/baserom" / ver / f"{mod}.prx").read_bytes()
    before = c_count()
    hdr = f"/* compiler[{v}]: {comp} */\n"
    for f in files:
        t = f.read_text()
        t = re.sub(rf"^/\* compiler\[{v}\]: [\w.\-]+ \*/\n", "", t, flags=re.M)
        f.write_text(hdr + t)
    ok = False
    for _ in range(before + 5):
        if build():
            ok = True
            break
        built = (ROOT / "tmp/build" / ver / f"{mod}.prx").read_bytes() if (ROOT / "tmp/build" / ver / f"{mod}.prx").exists() else b""
        if not built:
            break  # compile error: not a code difference
        nelf = ELFFile(open(ROOT / "tmp/build" / ver / f"{mod}.elf", "rb"))
        naddr = {sy.name: sy["st_value"] for sy in nelf.get_section_by_name(".symtab").iter_symbols()}
        moved = min((a for nm, a in gaddr.items() if nm in naddr and naddr[nm] != a), default=None)
        if moved is not None:
            cands = sorted((a, nm) for nm, a in gaddr.items() if a < moved)[-50:]
            owner = None
            for lo, n in reversed(cands):
                owner = next((f for f in sd.glob("*.c") if FB.has_c(f.read_text(), ver, fv, n)), None)
                if owner:
                    hit = n
                    break
            if owner:
                owner.write_text(FB.put_asm(owner.read_text(), ver, fv, hit, f"nonmatchings/{owner.stem}"))
                print(f"  {hit}: size differs with {comp}, asm in {ver}", file=sys.stderr)
                continue
        diff = next((i for i in range(text_off, min(len(built), len(base))) if built[i] != base[i]), min(len(built), len(base)))
        owner = hit = None
        for at in (diff - text_off, diff - text_off - 4):
            hit = next((n for lo, hi, n in ranges if lo <= at < hi), None)
            owner = next((f for f in sd.glob("*.c") if FB.has_c(f.read_text(), ver, fv, hit)), None) if hit else None
            if owner:
                break
        if not owner:
            print(f"  diff at text 0x{diff - text_off:X} not in a C function ({hit})", file=sys.stderr)
            break
        print(f"  {hit}: differs with {comp}, asm in {ver}", file=sys.stderr)
        owner.write_text(FB.put_asm(owner.read_text(), ver, fv, hit, f"nonmatchings/{owner.stem}"))
    if ok:
        r = subprocess.run(["tools/regress.sh", "--shared", f"{ver}:{mod}"], cwd=ROOT, capture_output=True, text=True)
        if not r.returncode:
            print(f"{ver}:{mod}: compiler {comp} (C {before} -> {c_count()})")
            return
    for p, t in orig.items():
        p.write_text(t)
    build()
    print(f"{ver}:{mod}: could not switch to {comp}, kept")
    sys.exit(1)


if __name__ == "__main__":
    main()
