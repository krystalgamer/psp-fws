#!/usr/bin/env python3
"""Find upstream library objects whose whole .text matches a module range.

For each library file with a libmatch anchor, compile the file, locate its
.text in the module (anchor address minus the anchor's offset in the object)
and compare all words with relocated fields masked.

Usage: tools/libobjects.py VERSION MODULE [--opt -O2] [--zlib V] [--png V]
"""
import argparse
import json
import struct
import subprocess
import sys
import tempfile
from pathlib import Path

from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection

sys.path.insert(0, str(Path(__file__).resolve().parent))
import asfix  # noqa: E402
import auto_decomp as ad  # noqa: E402
import libmatch as L  # noqa: E402

ROOT = ad.ROOT


def compile_object(src, incs, defs, opt, outdir):
    """Return (.text masked words, {func: offset}, sections {name: size}) and leave the .o in outdir."""
    i, s, o = outdir / (src.stem + ".i"), outdir / (src.stem + ".s"), outdir / (src.stem + ".o")
    cpp = L.CPP_BASE + [f"-I{d}" for d in incs] + [f"-I{d}" for d in L.SYS_INC] + defs + [str(src)]
    r = subprocess.run(cpp, capture_output=True, text=True)
    if r.returncode:
        return None
    i.write_text(r.stdout)
    r = subprocess.run([str(ad.TOOLS / "cc1-1.7.1"), *opt.split(), "-G0", "-quiet", str(i), "-o", str(s)],
                       capture_output=True, text=True)
    if r.returncode:
        return None
    s.write_text(asfix.fix(s.read_text()))
    r = subprocess.run([str(ad.TOOLS / "psp-as-1.3.1"), "-EL", "-G0", "-o", str(o), str(s)], capture_output=True)
    if r.returncode:
        return None
    elf = ELFFile(open(o, "rb"))
    text = elf.get_section_by_name(".text").data()
    kinds = {}
    for sec in elf.iter_sections():
        if isinstance(sec, RelocationSection) and sec.name == ".rel.text":
            for rel in sec.iter_relocations():
                t = rel["r_info_type"]
                kinds[rel["r_offset"]] = "26" if t == 4 else "16" if t in (5, 6) else "32"
    words = struct.unpack(f"<{len(text) // 4}I", text)
    masked = [ad.mask(w, kinds.get(4 * k) or ("26" if w >> 26 in (2, 3) else None)) for k, w in enumerate(words)]
    offs = {}
    for sym in elf.get_section_by_name(".symtab").iter_symbols():
        if sym["st_info"]["type"] == "STT_FUNC":
            offs[sym.name] = sym["st_value"]
    sizes = {sec.name: sec["sh_size"] for sec in elf.iter_sections() if sec.name.startswith((".text", ".rodata", ".data", ".bss", ".sdata", ".sbss"))}
    return masked, offs, sizes


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("version")
    ap.add_argument("module")
    ap.add_argument("--opt", default="-O2")
    ap.add_argument("--zlib", default=L.VERSIONS["zlib"])
    ap.add_argument("--png", default=L.VERSIONS["png"])
    a = ap.parse_args()
    L.VERSIONS.update(zlib=a.zlib, png=a.png)
    found = json.loads((ROOT / "tmp/libmatch" / f"{a.version}_{a.module}.json").read_text())
    mod = ad.Module(a.version, a.module)
    seg = ELFFile(open(ROOT / "tmp/baserom" / a.version / f"{a.module}.prx", "rb")).get_segment(0)
    base = mod.text_off

    def module_words(addr, n):
        rom = base + addr
        words = struct.unpack_from(f"<{n}I", mod.base, rom)
        return [ad.mask(w, mod.relocs.get(rom + 4 * k) or ("26" if w >> 26 in (2, 3) else None))
                for k, w in enumerate(words)]

    files = {}
    for target, cands in found.items():
        if len({c.split(":")[2] for c in cands}) != 1:
            continue
        for c in cands:
            lib, fname, fn, opt = c.split(":")
            if opt == a.opt:
                files.setdefault((lib, fname), []).append((int(target[-8:], 16), fn))
    results = []
    with tempfile.TemporaryDirectory() as td:
        for (lib, fname), anchors in sorted(files.items()):
            srcs, incs, defs = L.lib_sources(lib)
            src = next(s for s in srcs if s.name == fname)
            r = compile_object(src, incs, defs, a.opt, Path(td))
            if not r:
                continue
            words, offs, sizes = r
            starts = {addr - offs[fn] for addr, fn in anchors if fn in offs}
            for start in sorted(starts):
                if start < 0 or base + start + 4 * len(words) > len(mod.base):
                    continue
                mw = module_words(start, len(words))
                diff = sum(1 for x, y in zip(words, mw) if x != y)
                results.append((lib, fname, start, len(words), diff, sizes))
                print(f"{lib}/{fname}: start 0x{start:X} size 0x{4 * len(words):X} "
                      f"{'FULL MATCH' if diff == 0 else f'{diff} words differ'} {sizes}")
    del seg


if __name__ == "__main__":
    main()
