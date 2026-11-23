#!/usr/bin/env python3
"""Make cc1 output assemble with psp-as 1.3.1.

psp-as rejects the unaligned load/store instructions (lwl/lwr/swl/swr) that
cc1 emits for unaligned block moves, although Allegrex executes them; encode
them as raw words. Usage: tools/asfix.py < in.s > out.s
"""
import re
import sys

OPS = {"lwl": 0x22, "lwr": 0x26, "swl": 0x2A, "swr": 0x2E}
LINE = re.compile(r"^(\s*)(lwl|lwr|swl|swr)\s+\$(\w+),\s*(-?(?:0x[0-9a-fA-F]+|\d+))?\(\$(\w+)\)\s*(#.*)?$")
NAMES = {"zero": 0, "at": 1, "gp": 28, "sp": 29, "fp": 30, "s8": 30, "ra": 31}


def reg(r):
    return int(r) if r.isdigit() else NAMES[r]


def fix(text):
    out = []
    for line in text.splitlines():
        m = LINE.match(line)
        if m:
            imm = int(m[4], 0) if m[4] else 0
            word = (OPS[m[2]] << 26) | (reg(m[5]) << 21) | (reg(m[3]) << 16) | (imm & 0xFFFF)
            line = f"{m[1]}.word 0x{word:08X}  # {m[2]} ${m[3]},{imm}(${m[5]})"
        out.append(line)
    return "\n".join(out) + "\n"


if __name__ == "__main__":
    sys.stdout.write(fix(sys.stdin.read()))
