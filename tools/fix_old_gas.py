#!/usr/bin/env python3
"""Make objects produced by old (2.14) psp-as linkable with modern ld.

- Old GAS can emit a trailing local (FILE) symbol without counting it in the
  symtab's sh_info, which modern ld rejects. Locals are still all before
  globals, so it's enough to bump sh_info past them.
- Old psp-as marks Allegrex as machine 0xA2 with the EABI32 ABI; modern
  binutils uses 0x84 (0xA2 is gs464 there) with O32. Rewrite e_flags to what
  modern GAS emits for -march=allegrex so ld doesn't refuse to merge them.
"""
import argparse
import struct

OLD_ALLEGREX_MACH = 0x00A20000
EF_MIPS_MACH = 0x00FF0000
MODERN_ALLEGREX_FLAGS = 0x10841001


def section_name(data, shoff, shentsize, shstrndx, sh):
    strtab_off, = struct.unpack_from("<I", data, shoff + shstrndx * shentsize + 0x10)
    name_off, = struct.unpack_from("<I", data, sh)
    end = data.index(b"\0", strtab_off + name_off)
    return data[strtab_off + name_off:end].decode()


def fix(path, text_align=None, data_align=None):
    data = bytearray(open(path, "rb").read())
    flags, = struct.unpack_from("<I", data, 0x24)
    if flags & EF_MIPS_MACH == OLD_ALLEGREX_MACH:
        struct.pack_into("<I", data, 0x24, MODERN_ALLEGREX_FLAGS)
    shoff, = struct.unpack_from("<I", data, 0x20)
    shentsize, shnum, shstrndx = struct.unpack_from("<HHH", data, 0x2E)
    for i in range(shnum):
        sh = shoff + i * shentsize
        sh_type, = struct.unpack_from("<I", data, sh + 4)
        name = section_name(data, shoff, shentsize, shstrndx, sh) if shstrndx else ""
        if text_align and name == ".text":
            struct.pack_into("<I", data, sh + 0x20, text_align)
        if data_align and name in (".data", ".bss", ".rodata"):
            struct.pack_into("<I", data, sh + 0x20, data_align)
        if sh_type != 2:  # SHT_SYMTAB
            continue
        off, size, _, info, _, entsize = struct.unpack_from("<IIIIII", data, sh + 0x10)
        count = size // entsize
        binds = [data[off + j * entsize + 12] >> 4 for j in range(count)]
        first_global = next((j for j, b in enumerate(binds) if b != 0), count)
        if any(b == 0 for b in binds[first_global:]):
            # Stable-partition locals before globals and renumber relocations.
            order = [j for j in range(count) if binds[j] == 0] + [j for j in range(count) if binds[j] != 0]
            remap = {old: new for new, old in enumerate(order)}
            ents = [bytes(data[off + j * entsize: off + (j + 1) * entsize]) for j in range(count)]
            for new_i, old_i in enumerate(order):
                data[off + new_i * entsize: off + (new_i + 1) * entsize] = ents[old_i]
            for k in range(shnum):
                rsh = shoff + k * shentsize
                rtype, = struct.unpack_from("<I", data, rsh + 4)
                rlink, = struct.unpack_from("<I", data, rsh + 0x18)
                if rtype not in (9, 4) or rlink != i:  # SHT_REL / SHT_RELA
                    continue
                roff, rsize, _, _, _, rent = struct.unpack_from("<IIIIII", data, rsh + 0x10)
                for e in range(roff, roff + rsize, rent):
                    info, = struct.unpack_from("<I", data, e + 4)
                    struct.pack_into("<I", data, e + 4, (remap[info >> 8] << 8) | (info & 0xFF))
            binds = [binds[j] for j in order]
            first_global = binds.index(1) if 1 in binds else count
            first_global = next((j for j, b in enumerate(binds) if b != 0), count)
        if first_global != info:
            struct.pack_into("<I", data, sh + 0x1C, first_global)
    open(path, "wb").write(data)


if __name__ == "__main__":
    ap = argparse.ArgumentParser()
    ap.add_argument("objects", nargs="+")
    ap.add_argument("--text-align", type=int)
    ap.add_argument("--data-align", type=int, help="also set .data/.bss/.rodata alignment (asm objects)")
    args = ap.parse_args()
    for p in args.objects:
        fix(p, args.text_align, args.data_align)
