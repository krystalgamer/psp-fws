#!/usr/bin/env python3
"""Classify a module's remaining INCLUDE_ASM functions by instruction kinds.

Usage: tools/op_census.py VERSION MODULE  (needs a fresh `make split`)
Writes tmp/op_census/<version>_<module>.json: {func: {"size": n, "kinds": [...]}}
kinds: allegrex (max/min/ext/ins/clz/...), vfpu, sys (Allegrex system/trap ops),
unaligned (lwl/lwr/swl/swr), fpu, mult (hi/lo accumulate).
"""
import json
import re
import sys
from pathlib import Path

import rabbitizer

ROOT = Path(__file__).resolve().parent.parent
INC = re.compile(r'^INCLUDE_ASM\("([^"]+)", (\w+)\);', re.M)
LINE = re.compile(r"^\s*/\* [0-9A-F]+ [0-9A-F]+ ([0-9A-F]{8}) \*/\s+([a-z0-9.]+)", re.M)
ALLEGREX = {"max", "min", "clz", "clo", "ext", "ins", "wsbh", "wsbw", "bitrev", "rotr", "rotrv", "ror", "rorv"}
SYS = {"mfic", "mtic", "mfie", "mtie", "sleep", "halt", "mfdr", "mtdr", "dbreak", "dret", "cache", "sync",
       "mfc0", "mtc0", "cfc0", "ctc0", "eret", "syscall", "break", "teq", "tne", "tge", "tgeu", "tlt", "tltu",
       "tgei", "tgeiu", "tlti", "tltiu", "teqi", "tnei", "sdbbp", "ll", "sc"}
UNALIGNED = {"lwl", "lwr", "swl", "swr"}
MULT = {"madd", "maddu", "msub", "msubu"}
CAT = rabbitizer.InstrCategory.R4000ALLEGREX


def kinds_of(text):
    k = set()
    for raw, op in LINE.findall(text):
        if op == ".word":
            op = rabbitizer.Instruction(int.from_bytes(bytes.fromhex(raw), "little"), category=CAT).getOpcodeName()
        if op in ALLEGREX:
            k.add("allegrex")
        elif op in UNALIGNED:
            k.add("unaligned")
        elif op in SYS:
            k.add("sys")
        elif op in MULT:
            k.add("mult")
        elif op.startswith("v") or op in ("lv.s", "lv.q", "sv.s", "sv.q", "lvl.q", "lvr.q", "svl.q", "svr.q",
                                          "mfv", "mtv", "mfvc", "mtvc", "bvf", "bvt", "bvfl", "bvtl"):
            k.add("vfpu")
        elif op.endswith((".s", ".d")) or op in ("lwc1", "swc1", "mtc1", "mfc1", "ctc1", "cfc1", "bc1t", "bc1f",
                                                  "bc1tl", "bc1fl"):
            k.add("fpu")
    return k


def main():
    ver, mod = sys.argv[1:3]
    src = "".join(p.read_text() for p in (ROOT / "src" / mod).glob("*.c"))
    out = {}
    for d, name in INC.findall(src):
        f = ROOT / d / f"{name}.s"
        if not f.exists():
            continue
        t = f.read_text()
        out[name] = {"size": 4 * len(LINE.findall(t)), "kinds": sorted(kinds_of(t))}
    p = ROOT / "tmp/op_census" / f"{ver}_{mod}.json"
    p.parent.mkdir(exist_ok=True)
    p.write_text(json.dumps(out))


if __name__ == "__main__":
    main()
