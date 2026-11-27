#!/usr/bin/env python3
"""Per-function C/asm status of one built module version, with sizes.

    tools/progress.py --version VER --module MOD [--asm | --c]

Functions and sizes come from the build's symbol table (tmp/build/VER/MOD.elf,
so build first); a function is asm when splat wrote it to
tmp/asm/VER/MOD/nonmatchings (an INCLUDE_ASM entry for VER), C otherwise.
Prints `ADDR SIZE NAME c|asm` per function and a summary line.
"""
import argparse
import sys
from pathlib import Path

from elftools.elf.elffile import ELFFile

ROOT = Path(__file__).resolve().parent.parent


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--version", required=True)
    ap.add_argument("--module", required=True)
    g = ap.add_mutually_exclusive_group()
    g.add_argument("--asm", action="store_true", help="list only asm functions")
    g.add_argument("--c", action="store_true", help="list only C functions")
    a = ap.parse_args()
    elfp = ROOT / "tmp/build" / a.version / f"{a.module}.elf"
    if not elfp.exists():
        sys.exit(f"{elfp} missing: build first (make VERSION={a.version} MODULE={a.module})")
    sys.path.insert(0, str(ROOT / "tools"))
    import re
    import fwmodel as FM
    from srcdir import sharing_versions, src_dir
    fv = sorted({int(re.match(r"\d+", x)[0]) for x in sharing_versions(a.version, a.module)})
    me = int(re.match(r"\d+", a.version)[0])
    kind = {}
    for f in src_dir(a.version, a.module).glob("*.c"):
        for e in FM.parse(f.read_text(), fv):
            if me in e.vers and e.kind in ("cfunc", "asm"):
                kind[e.name] = "c" if e.kind == "cfunc" else "asm"
    elf = ELFFile(open(elfp, "rb"))
    addr = {}
    for s in elf.get_section_by_name(".symtab").iter_symbols():
        if s.name in kind and s["st_shndx"] != "SHN_UNDEF":
            addr.setdefault(s.name, s["st_value"])
    # sizes: distance to the next entry (asm labels have no st_size)
    order = sorted((v, n) for n, v in addr.items())
    funcs = {}
    for i, (v, n) in enumerate(order):
        nxt = order[i + 1][0] if i + 1 < len(order) else v
        funcs[n] = (v, nxt - v)
    asm = {n for n, k in kind.items() if k == "asm"}
    tot = cn = cb = 0
    for n, (addr, size) in sorted(funcs.items(), key=lambda kv: kv[1][0]):
        st = "asm" if n in asm else "c"
        tot += size
        if st == "c":
            cn += 1
            cb += size
        if (a.asm and st == "asm") or (a.c and st == "c") or not (a.asm or a.c):
            print(f"{addr:08X} 0x{size:x} {n} {st}")
    print(f"{a.version}:{a.module}: C {cn}/{len(funcs)} functions, 0x{cb:x}/0x{tot:x} bytes ({100 * cb / max(tot, 1):.1f}%)")


if __name__ == "__main__":
    main()
