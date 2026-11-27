#!/usr/bin/env python3
"""Name PRX import stubs and exports from their NIDs.

NIDs are the first 4 bytes (little-endian) of SHA-1 of the function name.
Candidate names are gathered from identifiers in the SDK headers/libraries
(extracted to tmp/sdk) plus names already in config symbol files. Resolved
names are appended to config/<ver>/symbol_addrs.<module>.txt (existing names
are kept). Unresolved stubs get <library>_<NID> names.

Usage: tools/nid_names.py <version> <module>
"""
import hashlib
import re
import struct
import sys
from pathlib import Path

from elftools.elf.elffile import ELFFile

sys.path.insert(0, str(Path(__file__).resolve().parent))
import prxinfo  # noqa: E402

ROOT = Path(__file__).resolve().parent.parent
IDENT = re.compile(rb"[A-Za-z_][A-Za-z0-9_]{3,}")


def nid(name):
    return struct.unpack("<I", hashlib.sha1(name.encode()).digest()[:4])[0]


def candidates():
    names = set()
    for p in (ROOT / "tmp/sdk").rglob("*"):
        if p.is_file() and p.suffix in (".h", ".a", ".o", ".prx", ".S", ".s", ".txt", ".xml"):
            names.update(m.decode() for m in IDENT.findall(p.read_bytes()))
    for p in (ROOT / "config").rglob("symbol_addrs.*.txt"):
        names.update(re.findall(r"^\s*(\w+)\s*=", p.read_text(), re.M))
    names = {n for n in names if not re.fullmatch(r"\w+_[0-9A-F]{8}", n)}
    out = {nid(n): n for n in sorted(names)}
    (ROOT / "tmp/sdk/nid_cache.txt").write_text("\n".join(f"{v} {k:08X}" for k, v in out.items()))
    return out


def load_cache():
    cache = ROOT / "tmp/sdk/nid_cache.txt"
    newest = max((p.stat().st_mtime for p in (ROOT / "config").rglob("symbol_addrs.*.txt")), default=0)
    if not cache.exists() or cache.stat().st_mtime < newest:
        candidates()
    out = {}
    for line in cache.read_text().splitlines():
        name, h = line.split(" ")
        out[int(h, 16)] = name
    return out


def cstr(data, off):
    return data[off:data.index(b"\0", off)].decode()


def main():
    ver, mod = sys.argv[1], sys.argv[2]
    prx = ROOT / "tmp/baserom" / ver / f"{mod}.prx"
    data = prx.read_bytes()
    elf = ELFFile(open(prx, "rb"))
    base = elf.get_segment(0)["p_offset"]
    vr = lambda va: base + va
    w = lambda va: struct.unpack_from("<I", data, vr(va))[0]
    nids = load_cache()

    syms = {}
    secs = {x.name: x for x in prxinfo.sections(elf, data)}
    stub = secs.get(".lib.stub")
    off = 0
    while stub is not None and off < stub.size:
        va = stub.addr + off
        name_va, _, _, size, _, nfunc, nid_tab, stub_tab = struct.unpack_from("<IHHBBHII", data, vr(va))
        off += size * 4
        lib = cstr(data, vr(name_va)) if name_va else "unk"
        for i in range(nfunc):
            n = w(nid_tab + 4 * i)
            syms[stub_tab + 8 * i] = nids.get(n, f"{lib}_{n:08X}")
    ent = secs.get(".lib.ent")
    off = 0
    while ent is not None and off < ent.size:
        va = ent.addr + off
        name_va, _, _, size, nvar, nfunc, tab = struct.unpack_from("<IHHBBHI", data, vr(va))
        lib = cstr(data, vr(name_va)) if name_va else "syslib"
        total = nvar + nfunc
        for i in range(total):
            n, addr = w(tab + 4 * i), w(tab + 4 * (total + i))
            if i < nfunc:
                syms[addr] = nids.get(n, f"{lib}_{n:08X}")
        off += size * 4

    path = ROOT / "config" / ver / f"symbol_addrs.{mod}.txt"
    existing = path.read_text() if path.exists() else ""
    have = {int(m[1], 0) for m in re.finditer(r"=\s*(0x[0-9A-Fa-f]+)", existing)}
    used = set(re.findall(r"^\s*(\w+)\s*=", existing, re.M))
    lines = []
    for addr in sorted(syms):
        name = syms[addr]
        if addr in have or name in used:
            continue
        used.add(name)
        lines.append(f"{name} = 0x{addr:08X}; // type:func")
    if lines:
        path.write_text(existing.rstrip("\n") + ("\n\n" if existing.strip() else "") + "// NID-derived names\n" + "\n".join(lines) + "\n")
    unresolved = sum(1 for l in lines if re.match(r"\w+_[0-9A-F]{8} =", l))
    print(f"{path}: +{len(lines)} names ({unresolved} unresolved)")


if __name__ == "__main__":
    main()
