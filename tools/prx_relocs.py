#!/usr/bin/env python3
"""Generate a splat reloc_addrs file from a PRX's relocation sections.

PRX relocations (sh_type 0x700000A0) encode r_info as
    type | (ofs_base << 8) | (addr_base << 16)
where ofs_base/addr_base are program header indices. Instruction immediates
are relative to the addr_base segment, which splat cannot know about, so we
emit explicit HI16/LO16 symbol references for every pair.
"""
import argparse
import struct
import sys
from pathlib import Path

from elftools.elf.elffile import ELFFile

SHT_PRXRELOC = 0x700000A0
R_MIPS_32 = 2
R_MIPS_HI16 = 5
R_MIPS_LO16 = 6
REL_NAMES = {R_MIPS_32: "MIPS_32", R_MIPS_HI16: "MIPS_HI16", R_MIPS_LO16: "MIPS_LO16"}


def sext16(x):
    return x - 0x10000 if x & 0x8000 else x


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("prx", type=Path)
    ap.add_argument("out", type=Path, help="reloc_addrs output")
    ap.add_argument("syms", type=Path, help="symbol_addrs output")
    args = ap.parse_args()

    raw = args.prx.read_bytes()
    elf = ELFFile(open(args.prx, "rb"))
    segs = [p for p in elf.iter_segments() if p["p_type"] == "PT_LOAD"]

    def file_offset(seg, ofs):
        return segs[seg]["p_offset"] + ofs

    def word(rom):
        return struct.unpack_from("<I", raw, rom)[0]

    text_end = max(
        s["sh_addr"] + s["sh_size"]
        for s in elf.iter_sections()
        if s["sh_flags"] & 0x4  # SHF_EXECINSTR
    )
    gp_addr = None
    funcs = set()
    data_syms = set()
    phantoms = set()

    def sym_name(target, typ):
        if typ == R_MIPS_32 and target < text_end:
            funcs.add(target)
            return f"func_{target:08X}"
        if target >= segs[-1]["p_vaddr"] + segs[-1]["p_memsz"]:
            return "_gp"
        data_syms.add(target)
        return f"D_{target:08X}"

    lines = []
    for sec in elf.iter_sections():
        if sec["sh_type"] != SHT_PRXRELOC:
            continue
        data = sec.data()
        ents = [struct.unpack_from("<II", data, i) for i in range(0, len(data), 8)]
        hi_value = {}
        for i, (ofs, info) in enumerate(ents):
            typ, ofs_base, addr_base = info & 0xFF, (info >> 8) & 0xFF, (info >> 16) & 0xFF
            if typ not in REL_NAMES:
                continue
            rom = file_offset(ofs_base, ofs)
            insn = word(rom)
            if typ == R_MIPS_32:
                target = insn
            elif typ == R_MIPS_HI16:
                lo = next(
                    (e for e in ents[i + 1:] if e[1] & 0xFF == R_MIPS_LO16), None
                )
                if lo is None:
                    sys.exit(f"HI16 at {rom:#x} without LO16")
                lo_insn = word(file_offset((lo[1] >> 8) & 0xFF, lo[0]))
                target = ((insn & 0xFFFF) << 16) + sext16(lo_insn & 0xFFFF)
                hi_value[addr_base] = insn & 0xFFFF
            else:
                target = (hi_value.get(addr_base, 0) << 16) + sext16(insn & 0xFFFF)
            if typ != R_MIPS_32 and segs[addr_base]["p_vaddr"]:
                # spimdisasm also pairs the raw (unrelocated) immediates,
                # which point at bogus low addresses; ban those.
                phantoms.add(target)
            target += segs[addr_base]["p_vaddr"]
            lines.append(
                f"rom:{rom:#X} reloc:{REL_NAMES[typ]} symbol:{sym_name(target, typ)}"
            )

    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text("\n".join(lines) + "\n")
    print(f"{args.out}: {len(lines)} relocs")

    # Zero words are usually NULL/padding, not pointers to the function at 0,
    # so only explicit relocations may reference it.
    syms = []
    for f in sorted(funcs):
        extra = " can_be_referenced:False" if f == 0 else ""
        syms.append(f"func_{f:08X} = 0x{f:08X}; // type:func{extra}")
    # Data referenced inside code (e.g. embedded keys) stays a plain label so
    # it doesn't split the enclosing function.
    for d in sorted(x for x in data_syms if x >= text_end):
        syms.append(f"D_{d:08X} = 0x{d:08X};")
    for ph in sorted(phantoms - funcs - data_syms):
        syms.append(f"PHANTOM_{ph:08X} = 0x{ph:08X}; // ignore:True")
    args.syms.write_text("\n".join(syms) + "\n")


if __name__ == "__main__":
    main()
