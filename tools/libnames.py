#!/usr/bin/env python3
"""Name a module's library functions from libmatch anchors by source order.

Within one upstream object file, functions are emitted in source order. Given
exact matches from tools/libmatch.py (anchors), functions between two anchors
of the same file are named one-to-one when the counts agree; past the first or
last anchor, names are extended while sizes stay similar.

Usage: tools/libnames.py VERSION MODULE [--opt -O2]
Prints `name = 0xADDR; // type:func` lines (prefixed with the file name when a
static name is not unique) to tmp/libmatch/<ver>_<mod>.names.txt.
"""
import argparse
import collections
import json
import re
import sys
from pathlib import Path

from elftools.elf.elffile import ELFFile

sys.path.insert(0, str(Path(__file__).resolve().parent))
import libmatch as L  # noqa: E402

ROOT = L.ROOT


def module_funcs(ver, mod):
    """[(addr, name, size)] of function symbols in the module's main section."""
    elf = ELFFile(open(ROOT / "tmp/build" / ver / f"{mod}.elf", "rb"))
    sec = elf.get_section_by_name(f".{mod}")
    shndx = next(i for i, s in enumerate(elf.iter_sections()) if s.name == f".{mod}")
    funcs, every = {}, set()
    for sym in elf.get_section_by_name(".symtab").iter_symbols():
        if sym["st_shndx"] != shndx or not sym.name or "." in sym.name:
            continue
        every.add(sym["st_value"])
        if sym["st_info"]["type"] == "STT_FUNC" or re.match(r"^(func_|sce\w+_[0-9A-F]{8}$)", sym.name):
            funcs.setdefault(sym["st_value"], sym.name)
    every = sorted(every | {sec["sh_size"]})
    import bisect
    return [(a, funcs[a], every[bisect.bisect_right(every, a)] - a) for a in sorted(funcs)]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("version")
    ap.add_argument("module")
    ap.add_argument("--opt", default="-O2")
    a = ap.parse_args()
    found = json.loads((ROOT / "tmp/libmatch" / f"{a.version}_{a.module}.json").read_text())
    funcs = module_funcs(a.version, a.module)
    idx = {f[1]: i for i, f in enumerate(funcs)}
    # anchors per library file: {file: [(module index, lib index)]}
    anchors = collections.defaultdict(set)
    libfuncs = {}
    for target, cands in found.items():
        files = {(c.split(":")[0], c.split(":")[1]) for c in cands if c.split(":")[3] == a.opt}
        names = {c.split(":")[2] for c in cands if c.split(":")[3] == a.opt}
        if len(files) != 1 or len(names) != 1 or target not in idx:
            continue
        lib, fname = files.pop()
        key = f"{lib}/{fname}"
        if key not in libfuncs:
            srcs, incs, defs = L.lib_sources(lib)
            f = next(s for s in srcs if s.name == fname)
            compiled = L.compile_funcs_ordered(f, incs, defs, a.opt)
            libfuncs[key] = compiled
        order = [n for n, _ in libfuncs[key]]
        anchors[key].add((idx[target], order.index(names.pop())))
    named = {}
    for key, anc in anchors.items():
        lf = libfuncs[key]
        anc = sorted(anc)
        if any(anc[i][1] >= anc[i + 1][1] for i in range(len(anc) - 1)):
            print(f"{key}: anchors out of order, skipped", file=sys.stderr)
            continue
        for mi, li in anc:
            named[mi] = (lf[li][0], key)
        for (m0, l0), (m1, l1) in zip(anc, anc[1:]):
            if m1 - m0 == l1 - l0:
                for k in range(1, m1 - m0):
                    named[m0 + k] = (lf[l0 + k][0], key)

        def similar(mi, li):
            ms, ls = funcs[mi][2], lf[li][1]
            return abs(ms - ls) <= max(16, 0.25 * ls)

        mi, li = anc[0]
        while mi > 0 and li > 0 and similar(mi - 1, li - 1):
            mi, li = mi - 1, li - 1
            named.setdefault(mi, (lf[li][0], key))
        mi, li = anc[-1]
        while mi + 1 < len(funcs) and li + 1 < len(lf) and similar(mi + 1, li + 1):
            mi, li = mi + 1, li + 1
            named.setdefault(mi, (lf[li][0], key))
    counts = collections.Counter(n for n, _ in named.values())
    out = []
    for mi in sorted(named):
        n, key = named[mi]
        if not funcs[mi][1].startswith("func_"):
            continue
        if counts[n] > 1:
            n = f"{Path(key).stem}_{n}"
        out.append(f"{n} = 0x{funcs[mi][0]:08X}; // type:func")
    p = ROOT / "tmp/libmatch" / f"{a.version}_{a.module}.names.txt"
    p.write_text("\n".join(out) + "\n")
    print(f"{len(out)} names ({len(anchors)} files) -> {p}")


if __name__ == "__main__":
    main()
