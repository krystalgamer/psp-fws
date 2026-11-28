#!/usr/bin/env python3
"""Generate a splat reloc_addrs file from a PRX's relocation sections.

PRX relocations (sh_type 0x700000A0) encode r_info as
    type | (ofs_base << 8) | (addr_base << 16)
where ofs_base/addr_base are program header indices. Instruction immediates
are relative to the addr_base segment, which splat cannot know about, so we
emit explicit HI16/LO16 symbol references for every pair.
"""
import argparse
import re
import struct
import sys
from pathlib import Path

from elftools.elf.elffile import ELFFile

sys.path.insert(0, str(Path(__file__).resolve().parent))
import prxinfo  # noqa: E402

SHT_PRXRELOC = 0x700000A0
R_MIPS_32 = 2
R_MIPS_26 = 4
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
    ap.add_argument("--names", type=Path, action="append", default=[],
                    help="hand-written symbol_addrs files whose names take precedence")
    args = ap.parse_args()

    names = {}
    sized = []  # (start, end, name) of named symbols with a `// size:` attribute
    for f in args.names:
        for m in re.finditer(r"^\s*(\w+)\s*=\s*(0x[0-9A-Fa-f]+|\d+)\s*;([^\n]*)", f.read_text(), re.M):
            names[int(m[2], 0)] = m[1]
            sz = re.search(r"\bsize:\s*(0x[0-9A-Fa-f]+|\d+)", m[3])
            if sz and "type:func" not in m[3] and int(sz[1], 0) > 1:
                sized.append((int(m[2], 0), int(m[2], 0) + int(sz[1], 0), m[1]))

    def inside_sized(target):
        """(name, offset) when TARGET lies strictly inside a sized named symbol."""
        for start, end, nm in sized:
            if start < target < end:
                return nm, target - start
        return None

    raw = args.prx.read_bytes()
    elf = ELFFile(open(args.prx, "rb"))
    segs = [p for p in elf.iter_segments() if p["p_type"] == "PT_LOAD"]

    def file_offset(seg, ofs):
        return segs[seg]["p_offset"] + ofs

    def word(rom):
        return struct.unpack_from("<I", raw, rom)[0]

    secs = prxinfo.sections(elf, raw)
    text_end = max(s.addr + s.size for s in secs if s.executable)
    gp_addr = None
    funcs = set()
    data_syms = set()
    phantoms = set()

    # The module's gp value is the relocated word at sceModuleInfo+0x20.
    gp_target = None
    mi_addr = prxinfo.module_info_addr(elf, raw)
    for d in prxinfo.reloc_tables(elf):
        if mi_addr is None:
            continue
        for i in range(0, len(d), 8):
            ofs, info = struct.unpack_from("<II", d, i)
            ofs_base, addr_base = (info >> 8) & 0xFF, (info >> 16) & 0xFF
            if info & 0xFF == R_MIPS_32 and segs[ofs_base]["p_vaddr"] + ofs == mi_addr + 0x20:
                gp_target = word(file_offset(ofs_base, ofs)) + segs[addr_base]["p_vaddr"]

    absolute = set()
    interior = {}  # auto label -> (sized symbol, offset): kept as a PROVIDE alias for existing C

    def sym_name(target, typ):
        if target in names:
            return names[target]
        if target < text_end:
            # Code addresses are function pointers; data embedded in code must
            # be named explicitly in the module's symbol_addrs file.
            funcs.add(target)
            return f"func_{target:08X}"
        if target == gp_target:
            return "_gp"
        if target >= segs[-1]["p_vaddr"] + segs[-1]["p_memsz"]:
            # e.g. hardware addresses: defined as absolute symbols for ld
            absolute.add(target)
            return f"D_{target:08X}"
        data_syms.add(target)
        return f"D_{target:08X}"

    lines = []
    all_roms = set()
    resolved = []  # (typ, rom, loc_vram, target, link_value, addr_base)
    jal_targets = set()
    for data in prxinfo.reloc_tables(elf):
        ents = [struct.unpack_from("<II", data, i) for i in range(0, len(data), 8)]
        hi_value = {}
        for i, (ofs, info) in enumerate(ents):
            typ, ofs_base, addr_base = info & 0xFF, (info >> 8) & 0xFF, (info >> 16) & 0xFF
            if ofs_base >= len(segs):
                continue
            rom = file_offset(ofs_base, ofs)
            all_roms.add(rom)
            insn = word(rom)
            if typ == R_MIPS_26 and insn >> 26 == 3 and addr_base < len(segs):
                jal_targets.add(((insn & 0x3FFFFFF) << 2) + segs[addr_base]["p_vaddr"])
            if typ not in REL_NAMES:
                continue
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
            if typ != R_MIPS_32 and segs[addr_base]["p_vaddr"] and 0 <= target <= 0xFFFFFFFF:
                # spimdisasm also pairs the raw (unrelocated) immediates,
                # which point at bogus low addresses; ban those.
                phantoms.add(target)
            link_value = target
            target += segs[addr_base]["p_vaddr"]
            resolved.append((typ, rom, segs[ofs_base]["p_vaddr"] + ofs, target, link_value, addr_base))

    # Jump tables: runs of R_MIPS_32 code pointers in read-only data, starting
    # at an address the code loads with %hi/%lo, whose targets all lie inside
    # one function. Their entries are case labels, not functions: they get no
    # reloc entry here and spimdisasm labels them as a jump table.
    hilo_code = {t: loc for typ, _, loc, t, _, _ in resolved if typ == R_MIPS_LO16 and loc < text_end}
    func_starts = sorted(jal_targets | {t for t in hilo_code if t < text_end} | {0})
    ptr32 = {loc: t for typ, _, loc, t, _, _ in resolved if typ == R_MIPS_32 and loc >= text_end and t < text_end}
    jump_entries = set()
    for base, site in hilo_code.items():
        if base not in ptr32:
            continue
        run, loc = [], base
        while loc in ptr32 and (loc == base or loc not in hilo_code):
            run.append(loc)
            loc += 4
        targets = [ptr32[x] for x in run]
        lo_t, hi_t = min(targets + [site]), max(targets + [site])
        if not any(lo_t < f <= hi_t for f in func_starts):
            jump_entries.update(run)

    for typ, rom, loc, target, link_value, addr_base in resolved:
        if typ == R_MIPS_32 and loc in jump_entries:
            continue
        seg = segs[addr_base]
        in_seg = seg["p_vaddr"] <= target <= seg["p_vaddr"] + seg["p_memsz"]
        in_section = any(x.addr <= target < x.addr + x.size for x in secs)
        if target == gp_target:
            in_range_elsewhere = True
        elif typ != R_MIPS_32 and not in_seg:
            in_range_elsewhere = False
        else:
            # targets between sections (e.g. one-past-end pointers) get no
            # label from splat, so they must not become named symbols
            in_range_elsewhere = in_section or target < text_end
        if target < 0 or target > 0xFFFFFFFF or not in_range_elsewhere:
            # base-minus-offset arithmetic: reference an absolute zero
            # symbol with the link-space value as addend
            lines.append(f"rom:{rom:#X} reloc:{REL_NAMES[typ]} symbol:PRX_ZERO addend:{link_value:#x}")
            continue
        inner = None if target in names else inside_sized(target)
        if inner:
            # a field of a sized global: reference it as sym+off instead of a label of its own
            interior[f"D_{target:08X}"] = inner
            lines.append(f"rom:{rom:#X} reloc:{REL_NAMES[typ]} symbol:{inner[0]} addend:{inner[1]:#x}")
            continue
        lines.append(
            f"rom:{rom:#X} reloc:{REL_NAMES[typ]} symbol:{sym_name(target, typ)}"
        )

    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text("\n".join(lines) + "\n")
    print(f"{args.out}: {len(lines)} relocs")

    # Zero words are usually NULL/padding, not pointers to the function at 0,
    # so only explicit relocations may reference it.
    syms = []
    for f in sorted(funcs - names.keys()):
        extra = " can_be_referenced:False" if f == 0 else ""
        syms.append(f"func_{f:08X} = 0x{f:08X}; // type:func{extra}")
    # Data referenced inside code (e.g. embedded keys) stays a plain label so
    # it doesn't split the enclosing function.
    for d in sorted(x for x in data_syms - names.keys() if x >= text_end):
        syms.append(f"D_{d:08X} = 0x{d:08X};")
    for ph in sorted(phantoms - funcs - data_syms - names.keys()):
        syms.append(f"PHANTOM_{ph:08X} = 0x{ph:08X}; // ignore:True")
    # every relocated file offset (incl. R_MIPS_26), used by tools/split.py
    args.out.with_name(args.out.name.replace("reloc_addrs.", "reloc_roms.")).write_text(
        "".join(f"0x{r:X}\n" for r in sorted(all_roms)))
    abs_path = args.out.with_name(args.out.name.replace("reloc_addrs.", "abs_syms."))
    abs_path.write_text("PRX_ZERO = 0;\n" + "".join(f"D_{a:08X} = 0x{a:08X};\n" for a in sorted(absolute))
                        # old auto names of fields inside sized symbols still link (C written before the size)
                        + "".join(f"PROVIDE({lbl} = {nm} + {off:#x});\n" for lbl, (nm, off) in sorted(interior.items())))
    args.syms.write_text("\n".join(syms) + "\n")


if __name__ == "__main__":
    main()
