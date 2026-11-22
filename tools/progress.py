#!/usr/bin/env python3
"""Per-function match status of the built PRX against the baserom.

Functions are located by name in the build map and in the baserom via their
original address (from config symbols or the func_XXXXXXXX name). J/JAL
targets are masked so a layout shift elsewhere doesn't hide a match.
"""
import argparse
import re
import struct
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
TEXT_OFF = 0x80


def masked(data, start, size):
    out = []
    for i in range(0, size, 4):
        w = struct.unpack_from("<I", data, TEXT_OFF + start + i)[0]
        if w >> 26 in (2, 3):
            w &= 0xFC000000
        out.append(w)
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--version", default="360")
    ap.add_argument("--module", default="mcctrl")
    args = ap.parse_args()

    names = {}
    for line in (ROOT / "config" / args.version / f"symbol_addrs.{args.module}.txt").read_text().splitlines():
        m = re.match(r"\s*(\w+)\s*=\s*(0x[0-9A-Fa-f]+)\s*;.*type:func", line)
        if m:
            names[m[1]] = int(m[2], 16)

    build_dir = ROOT / "tmp/build" / args.version
    mp = (build_dir / f"{args.module}.map").read_text()
    syms = {m[2]: int(m[1], 16) for m in re.finditer(r"^\s+0x([0-9a-f]+)\s+(\w+)$", mp, re.M)}
    base = (ROOT / "tmp/baserom" / args.version / f"{args.module}.prx").read_bytes()
    build = (build_dir / f"{args.module}.prx").read_bytes()
    src = (ROOT / "src" / args.module).rglob("*.c")
    asm_funcs = set(re.findall(r"INCLUDE_ASM\([^,]+,\s*(\w+)\)", "".join(p.read_text() for p in src)))

    orig = sorted(
        (names.get(n, int(n[5:], 16) if n.startswith("func_") else None), n)
        for n in syms if n.startswith("func_") or n in names
    )
    orig = [(a, n) for a, n in orig if a is not None and a < 0x1138]
    addrs = sorted({syms[n] for _, n in orig} | {syms.get("sceDdrdbHash", 0x1138)})
    total = done = 0
    for i, (oa, n) in enumerate(orig):
        size = (orig[i + 1][0] if i + 1 < len(orig) else 0x1138) - oa
        total += size
        if n in asm_funcs:
            status = "asm"
        else:
            ba = syms[n]
            bend = next((a for a in addrs if a > ba), ba + size)
            ok = bend - ba == size and masked(base, oa, size) == masked(build, ba, size)
            status = "OK" if ok else f"DIFF (size {bend - ba:#x} vs {size:#x})"
            done += size if ok else 0
        print(f"{oa:08X} {size:#6x} {n:<24} {status}")
    print(f"matched C: {done:#x}/{total:#x} bytes ({100 * done / total:.1f}%)")


if __name__ == "__main__":
    main()
