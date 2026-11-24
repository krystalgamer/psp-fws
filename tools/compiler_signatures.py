#!/usr/bin/env python3
"""Count instruction-level signatures of psp-gcc changes per compiler version.

Scans the .text of every firmware PRX whose .comment names a single psp-gcc
version and counts patterns that tell the 1.3.1 -> 1.7.1 changes apart:

  abs_branch   bgez x; move d,x; subu/negu d   (1.3.1 abs)
  abs_max      subu t,$0,x; max d,x,t          (1.7.1 abs as max(x,-x))
  unaligned    lwl/lwr/swl/swr                 (ulsw default from 1.7.1)
  bytecopy4    4 consecutive lbu/sb pairs on the same base (no-ulsw copies)
  ins_zero     ins rt,$zero,pos,size           (insv_allegrex inserting zero)
  ins_any      ins
  madd         madd/maddu/msub/msubu
  madd_mt      madd* preceded within 3 insns by mthi/mtlo
  k1_delay     an instruction using $k1 in a branch delay slot (asm in delay slot)
  la_gp        lui $gp,%hi / addiu $gp,$gp (loadgpsym)
  sw_gp        sw $gp,..($sp) in a prologue (callee-saved gp)

Usage: tools/compiler_signatures.py [--versions 1.3.1 1.5.1 ...]
"""
import collections
import io
import re
import struct
import sys
import zipfile
from pathlib import Path

import rabbitizer
from elftools.elf.elffile import ELFFile

ROOT = Path(__file__).resolve().parent.parent
CAT = rabbitizer.InstrCategory.R4000ALLEGREX


def insns(text):
    out = []
    for (w,) in struct.iter_unpack("<I", text[: len(text) // 4 * 4]):
        i = rabbitizer.Instruction(w, category=CAT)
        out.append((w, i.getOpcodeName(), i))
    return out


def regs(i):
    try:
        return {str(i.rs), str(i.rt), str(i.rd)}
    except Exception:  # noqa: BLE001
        return set()


def scan(text):
    c = collections.Counter()
    L = insns(text)
    names = [n for _, n, _ in L]
    for k, (w, n, i) in enumerate(L):
        c["insns"] += 1
        if n in ("lwl", "lwr", "swl", "swr"):
            c["unaligned"] += 1
        if n == "ins":
            c["ins_any"] += 1
            if (w >> 21) & 31 == 0:
                c["ins_zero"] += 1
        if n in ("madd", "maddu", "msub", "msubu"):
            c["madd"] += 1
            if any(x in ("mthi", "mtlo") for x in names[max(0, k - 3):k]):
                c["madd_mt"] += 1
        if n == "max" and k > 0 and names[k - 1] in ("subu", "negu") and (L[k - 1][0] >> 21) & 31 == 0:
            c["abs_max"] += 1
        if n == "bgez" and (w & 0xFFFF) == 2 and k + 2 < len(L):
            if names[k + 1] in ("addu", "move", "or") and names[k + 2] in ("subu", "negu") and (L[k + 2][0] >> 21) & 31 == 0:
                c["abs_branch"] += 1
        if k > 0 and L[k - 1][2].isBranch() and "$k1" in str(i.disassemble()):
            c["k1_delay"] += 1
        if n == "lui" and (w >> 16) & 31 == 28:
            c["la_gp"] += 1
        if n == "sw" and (w >> 16) & 31 == 28 and (w >> 21) & 31 == 29:
            c["sw_gp"] += 1
        if k >= 7 and all(names[k - j] in ("lbu", "sb") for j in range(8)):
            if [names[k - j] for j in range(8)].count("lbu") == 4:
                c["bytecopy4"] += 1
    return c


def main():
    want = None
    if "--versions" in sys.argv:
        want = set(sys.argv[sys.argv.index("--versions") + 1:])
    z = zipfile.ZipFile(ROOT / "inputs/fws.zip")
    seen = set()
    per = collections.defaultdict(collections.Counter)
    nbin = collections.Counter()
    for name in z.namelist():
        if not name.endswith(".prx"):
            continue
        data = z.read(name)
        h = hash(data)
        if h in seen:
            continue
        seen.add(h)
        vers = set(re.findall(rb"psp-(1\.\d+\.\d+)", data))
        if len(vers) != 1:
            continue
        v = vers.pop().decode()
        if want and v not in want:
            continue
        try:
            sec = ELFFile(io.BytesIO(data)).get_section_by_name(".text")
            text = sec.data() if sec else None
        except Exception:  # noqa: BLE001
            text = None
        if not text:
            continue
        per[v].update(scan(text))
        nbin[v] += 1
    keys = ["abs_branch", "abs_max", "unaligned", "bytecopy4", "ins_any", "ins_zero", "madd", "madd_mt",
            "k1_delay", "la_gp", "sw_gp"]
    print("version  bins   kinsns " + " ".join(f"{k:>10}" for k in keys))
    for v in sorted(per, key=lambda s: tuple(int(x) for x in s.split("."))):
        c = per[v]
        print(f"{v:8} {nbin[v]:4} {c['insns'] // 1000:8} " + " ".join(f"{c[k]:>10}" for k in keys))


if __name__ == "__main__":
    main()
