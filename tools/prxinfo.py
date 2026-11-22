"""PRX layout helpers shared by the config/reloc/NID tools.

Older PRXs keep their section headers; from 3.50 on they are stripped, so
the layout is reconstructed from module info (located via segment 0's
p_paddr), the export/import tables it points to, and the stub addresses.
"""
import struct
from dataclasses import dataclass

SHT_PRXRELOC = 0x700000A0


@dataclass
class Sec:
    name: str
    addr: int
    offset: int
    size: int
    nobits: bool = False
    executable: bool = False


def load_segments(elf):
    return [p for p in elf.iter_segments() if p["p_type"] == "PT_LOAD"]


def reloc_tables(elf):
    """Yield raw relocation table bytes (from sections or program headers)."""
    found = False
    for s in elf.iter_sections():
        if s["sh_type"] == SHT_PRXRELOC:
            found = True
            yield s.data()
    if not found:
        for p in elf.iter_segments():
            if p["p_type"] == SHT_PRXRELOC or p["p_type"] == "0x700000a0":
                yield p.data()


def sections(elf, data):
    """Return allocated sections (real or reconstructed), sorted by address."""
    segs = load_segments(elf)
    out = []
    if elf.num_sections():
        for s in elf.iter_sections():
            if s["sh_flags"] & 2 and s["sh_size"]:
                out.append(Sec(s.name, s["sh_addr"], s["sh_offset"], s["sh_size"],
                               s["sh_type"] == "SHT_NOBITS", bool(s["sh_flags"] & 4)))
        return sorted(out, key=lambda s: (s.addr, s.offset))

    s0 = segs[0]
    base = s0["p_offset"]
    w = lambda va: struct.unpack_from("<I", data, base + va)[0]
    mi = (s0["p_paddr"] & 0x7FFFFFFF) - base
    ent_top, ent_end, stub_top, stub_end = struct.unpack_from("<4I", data, base + mi + 0x24)
    stubs = []
    va = stub_top
    while va < stub_end:
        size = data[base + va + 8]
        nfunc = struct.unpack_from("<H", data, base + va + 10)[0]
        stub_tab = w(va + 16)
        if nfunc:
            stubs.append((stub_tab, stub_tab + 8 * nfunc))
        va += size * 4
    stub_lo = min(a for a, _ in stubs) if stubs else None
    stub_hi = max(b for _, b in stubs) if stubs else None
    text_end = stub_lo if stubs else mi
    out.append(Sec(".text", 0, base, text_end, executable=True))
    if stubs:
        out.append(Sec(".sceStub.text", stub_lo, base + stub_lo, stub_hi - stub_lo, executable=True))
    known = [
        (".lib.ent.top", ent_top - 4, 4), (".lib.ent", ent_top, ent_end - ent_top), (".lib.ent.btm", ent_end, 4),
        (".lib.stub.top", stub_top - 4, 4), (".lib.stub", stub_top, stub_end - stub_top), (".lib.stub.btm", stub_end, 4),
        (".rodata.sceModuleInfo", mi, 0x34),
    ]
    for name, addr, size in known:
        if size > 0:
            out.append(Sec(name, addr, base + addr, size))
    out.sort(key=lambda s: s.addr)
    # Everything else in segment 0 after the stubs is read-only data.
    seg0_end = s0["p_filesz"]
    filled = []
    pos = (stub_hi if stubs else text_end)
    for s in sorted(out, key=lambda s: s.addr):
        if s.addr >= pos:
            gap = data[base + pos:base + s.addr]
            # small zero gaps are alignment padding (prxpad), not data
            if s.addr - pos >= 4 and filled and (len(gap) >= 16 or any(gap)):
                filled.append(Sec(".rodata", pos, base + pos, s.addr - pos))
            pos = max(pos, s.addr + s.size)
        filled.append(s)
    if seg0_end > pos:
        filled.append(Sec(".rodata", pos, base + pos, seg0_end - pos))
    if len(segs) > 1:
        s1 = segs[1]
        if s1["p_filesz"]:
            filled.append(Sec(".data", s1["p_vaddr"], s1["p_offset"], s1["p_filesz"]))
        if s1["p_memsz"] > s1["p_filesz"]:
            filled.append(Sec(".bss", s1["p_vaddr"] + s1["p_filesz"], s1["p_offset"] + s1["p_filesz"],
                              s1["p_memsz"] - s1["p_filesz"], nobits=True))
    return sorted(filled, key=lambda s: (s.addr, s.offset))


def module_info_addr(elf, data):
    for s in sections(elf, data):
        if s.name == ".rodata.sceModuleInfo":
            return s.addr
    return None
