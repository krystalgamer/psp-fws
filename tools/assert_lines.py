#!/usr/bin/env python3
"""Per-version assert line numbers: compare the `li a3, N` immediates of a function in two built versions.

    tools/assert_lines.py MOD SRC_VER DST_VER FUNC[=DSTNAME] ... [--port] [--apply] [--min N]

SCE 1.x asserts pass __LINE__ as the 4th Kprintf argument (`addiu $a3, $zero, N`). Between firmware
versions the code is often identical except for these constants, so a port fails on a few words.
This tool reads both built ELFs (tmp/build/VER/MOD.elf, which match the baseroms), collects every
`addiu $a3, $zero, imm` in the function in address order and pairs them positionally. When both versions
have the same count, the differing pairs become `--sub` arguments for tools/port.py (as `0xOLD)=0xNEW)`
and the decimal form). Without --port it only prints them; with --port it runs port.py (passing --apply
through). Values below --min (default 0x10) are ignored (small constants are rarely line numbers).
"""
import argparse
import struct
import subprocess
import sys
from pathlib import Path

from elftools.elf.elffile import ELFFile

ROOT = Path(__file__).resolve().parent.parent


def a3_imms(ver, mod, name):
    elf_path = ROOT / f"tmp/build/{ver}/{mod}.elf"
    with open(elf_path, "rb") as f:
        elf = ELFFile(f)
        sym = None
        for sec in elf.iter_sections():
            if sec.header.sh_type == "SHT_SYMTAB":
                for s in sec.iter_symbols():
                    if s.name == name and s["st_info"]["type"] in ("STT_FUNC", "STT_NOTYPE") and s["st_size"]:
                        sym = s
                        break
        if sym is None:
            raise SystemExit(f"{ver}: {name} not found (or zero size) in {elf_path}")
        text = elf.get_section(sym["st_shndx"])
        start = sym["st_value"] - text["sh_addr"]
        data = text.data()[start:start + sym["st_size"]]
    out = []
    for i in range(0, len(data), 4):
        w = struct.unpack_from("<I", data, i)[0]
        if w >> 16 == 0x2407:  # addiu $a3, $zero, imm
            out.append(w & 0xFFFF)
    return out


def subs_for(mod, src, dst, func, dname, minv):
    a, b = a3_imms(src, mod, func), a3_imms(dst, mod, dname)
    if len(a) != len(b):
        print(f"{func}: {src} has {len(a)} a3 immediates, {dst} has {len(b)}; not paired", file=sys.stderr)
        return None
    pairs = {}
    for x, y in zip(a, b):
        if x == y or x < minv:
            continue
        if pairs.get(x, y) != y:
            print(f"{func}: {src} 0x{x:X} maps to both 0x{pairs[x]:X} and 0x{y:X}; not paired", file=sys.stderr)
            return None
        pairs[x] = y
    return pairs


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("module")
    ap.add_argument("src_ver")
    ap.add_argument("dst_ver")
    ap.add_argument("funcs", nargs="+")
    ap.add_argument("--min", type=lambda s: int(s, 0), default=0x10)
    ap.add_argument("--port", action="store_true", help="run tools/port.py with the substitutions")
    ap.add_argument("--apply", action="store_true", help="with --port: pass --apply")
    args = ap.parse_args()
    for spec in args.funcs:
        func, _, dname = spec.partition("=")
        dname = dname or func
        pairs = subs_for(args.module, args.src_ver, args.dst_ver, func, dname, args.min)
        if pairs is None:
            continue
        subs = []
        todo = dict(pairs)
        while todo:  # port.py applies --sub in order: rewrite a value before another pair produces it
            ready = [x for x, y in sorted(todo.items()) if y not in todo] or [min(todo)]
            for x in ready:
                y = todo.pop(x)
                subs += [f"0x{x:X})=0x{y:X})", f"{x})={y})"]
        print(f"{func}: " + (" ".join(f"--sub '{s}'" for s in subs) if subs else "no line changes"))
        if args.port:
            cmd = [sys.executable, str(ROOT / "tools/port.py"), args.module, args.src_ver, args.dst_ver, spec]
            for s in subs:
                cmd += ["--sub", s]
            if args.apply:
                cmd.append("--apply")
            subprocess.run(cmd, cwd=ROOT)


if __name__ == "__main__":
    main()
