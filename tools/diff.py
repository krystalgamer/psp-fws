#!/usr/bin/env python3
"""Side-by-side disassembly of baserom vs built PRX for a .text vram range.

Usage: tools/diff.py <start> <end> [--version 360] [--module mcctrl]
       tools/diff.py <function_name>   (looks it up in the build map)
"""
import argparse
import difflib
import re
import struct
from pathlib import Path

import rabbitizer

ROOT = Path(__file__).resolve().parent.parent
TEXT_FILE_OFFSET = 0x80


def disasm(word, vram):
    ins = rabbitizer.Instruction(word, vram, rabbitizer.InstrCategory.R4000ALLEGREX)
    return ins.disassemble()


def norm(word):
    """Mask jump targets and branch offsets so layout shifts don't count."""
    op = word >> 26
    if op in (2, 3):
        return word & 0xFC000000
    if op in (1, 4, 5, 6, 7, 20, 21, 22, 23):
        return word & 0xFFFF0000
    return word


def func_ranges(map_path, sym_path):
    """Return {name: (orig_start, orig_end, build_start, build_end)} for .text functions."""
    names = {}
    for line in sym_path.read_text().splitlines():
        m = re.match(r"\s*(\w+)\s*=\s*(0x[0-9A-Fa-f]+)\s*;.*type:func", line)
        if m:
            names[m[1]] = int(m[2], 16)
    build = {m[2]: int(m[1], 16) for m in re.finditer(r"^\s+0x([0-9a-f]+)\s+(\w+)$", map_path.read_text(), re.M)}
    orig = {}
    for n in build:
        if n in names:
            orig[n] = names[n]
        elif re.fullmatch(r"func_[0-9A-F]{8}", n):
            orig[n] = int(n[5:], 16)
    order = sorted(orig, key=orig.get)
    out = {}
    for i, n in enumerate(order):
        nxt = order[i + 1] if i + 1 < len(order) else None
        if nxt is None:
            break
        out[n] = (orig[n], orig[nxt], build[n], build[nxt])
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("start")
    ap.add_argument("end", nargs="?")
    ap.add_argument("--version", default="360")
    ap.add_argument("--module", default="mcctrl")
    ap.add_argument("--score", action="store_true", help="only print alignment-aware mismatch score")
    args = ap.parse_args()

    base = (ROOT / "tmp/baserom" / args.version / f"{args.module}.prx").read_bytes()
    build = (ROOT / "tmp/build" / args.version / f"{args.module}.prx").read_bytes()
    if args.end is None:
        ranges = func_ranges(
            ROOT / "tmp/build" / args.version / f"{args.module}.map",
            ROOT / "config" / args.version / f"symbol_addrs.{args.module}.txt",
        )
        if args.start not in ranges:
            raise SystemExit(f"{args.start} not found")
        os_, oe, bs, be = ranges[args.start]
    else:
        os_, oe = int(args.start, 0), int(args.end, 0)
        bs, be = os_, oe

    def words(data, s, e):
        return [struct.unpack_from("<I", data, va + TEXT_FILE_OFFSET)[0] for va in range(s, e, 4)]

    a_words, b_words = words(base, os_, oe), words(build, bs, be)
    if args.score:
        sm = difflib.SequenceMatcher(None, [norm(w) for w in a_words], [norm(w) for w in b_words], autojunk=False)
        same = sum(b.size for b in sm.get_matching_blocks())
        print(f"score {max(len(a_words), len(b_words)) - same} (orig {oe - os_:#x} bytes, build {be - bs:#x} bytes)")
        return
    diffs = 0
    for i in range(max(len(a_words), len(b_words))):
        a = a_words[i] if i < len(a_words) else None
        b = b_words[i] if i < len(b_words) else None
        sa = f"{a:08X} {disasm(a, os_ + 4 * i)}" if a is not None else ""
        sb = f"{b:08X} {disasm(b, bs + 4 * i)}" if b is not None else ""
        same = a is not None and b is not None and (a == b or (a >> 26 in (2, 3) and a >> 26 == b >> 26))
        diffs += not same
        print(f"{os_ + 4 * i:05X} {' ' if same else '*'} {sa:<48} {sb}")
    print(f"{diffs} differing words (orig {oe - os_:#x} bytes, build {be - bs:#x} bytes)")


if __name__ == "__main__":
    main()
