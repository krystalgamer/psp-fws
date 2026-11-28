#!/usr/bin/env python3
"""Find which DST-version function corresponds to a SRC-version function, by opcode similarity.

    tools/match_funcs.py SRC DST MODULE [NAME ...] [--all] [-n N]

For each NAME (default: every SRC function that has no function of the same name in
DST) the SRC function's code is read from the baserom (it may be C or asm in SRC:
ranges come from the split asm and the build's symbol table), reduced to opcodes,
and compared with every DST asm function of similar size (--all: C functions too).
Prints the N best candidates with their similarity ratio. Nothing is changed.
Both versions must have been split and built (tools/regress.sh).
"""
import argparse
import difflib
import re
import struct
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import auto_decomp as AD  # noqa: E402


def func_ranges(mod):
    """name -> (rom, end, is_asm) for the asm functions and the C functions of the current build."""
    out = {n: (r, e, True) for n, (r, e, p) in mod.funcs.items() if p is not None}
    elfp = ROOT / "tmp/build" / mod.ver / f"{mod.mod}.elf"
    if elfp.exists():
        from elftools.elf.elffile import ELFFile
        for sym in ELFFile(open(elfp, "rb")).get_section_by_name(".symtab").iter_symbols():
            if sym["st_info"]["type"] == "STT_FUNC" and sym["st_size"] and sym.name not in out:
                r = mod.text_off + sym["st_value"]
                out[sym.name] = (r, r + sym["st_size"], False)
    return out


def opkeys(mod, rom, end):
    """Opcode of each word (major opcode; SPECIAL/SPECIAL2/SPECIAL3 funct, REGIMM rt, COP sub-op)."""
    out = []
    for r in range(rom, end, 4):
        w = struct.unpack_from("<I", mod.base, r)[0]
        op = w >> 26
        if op in (0, 0x1C, 0x1F):
            out.append((op, w & 0x3F))
        elif op == 1:
            out.append((op, (w >> 16) & 0x1F))
        elif op in (0x10, 0x11, 0x12):
            out.append((op, (w >> 21) & 0x1F))
        else:
            out.append((op,))
    return out


_CACHE = {}


def _module(ver, mod):
    if (ver, mod) not in _CACHE:
        m = AD.Module(ver, mod)
        _CACHE[(ver, mod)] = (m, func_ranges(m))
    return _CACHE[(ver, mod)]


def candidates(src, dst, module, name, n=3, all_funcs=False):
    """[(ratio, dst_name)] best first, or None when NAME is not a function of SRC."""
    sm, sr = _module(src, module)
    dm, dr = _module(dst, module)
    if name not in sr:
        return None
    a = opkeys(sm, sr[name][0], sr[name][1])
    res = []
    for k, (r, e, is_asm) in dr.items():
        if not (is_asm or all_funcs):
            continue
        nb = (e - r) // 4
        if abs(nb - len(a)) > max(4, len(a) // 5):
            continue
        b = opkeys(dm, r, e)
        res.append((difflib.SequenceMatcher(None, a, b, autojunk=False).ratio(), k))
    return sorted(res, reverse=True)[:n]


def propose(src, dst, module, pairs, out=print):
    """For call targets that differ ((target, mine) pairs: DST calls TARGET where the C calls MINE), print the
    DST functions that look like SRC's MINE. A proposal only: nothing is renamed."""
    for tgt, mine in dict.fromkeys(pairs):
        try:
            c = candidates(src, dst, module, mine, n=3, all_funcs=True)
        except Exception as ex:  # missing build/split of a version
            out(f"  match_funcs: {mine}: {ex}")
            continue
        if not c:
            continue
        best = ", ".join(f"{k} {r:.2f}" for r, k in c)
        hint = "" if c[0][1] != tgt else f" -> the call target {tgt} is the best match: rename it to {mine}?"
        out(f"  match_funcs {src}:{mine} ~ {dst}: {best}{hint}")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("src")
    ap.add_argument("dst")
    ap.add_argument("module")
    ap.add_argument("names", nargs="*")
    ap.add_argument("--all", action="store_true", help="also compare with DST functions that are already C")
    ap.add_argument("-n", type=int, default=2)
    a = ap.parse_args()
    _, sr = _module(a.src, a.module)
    _, dr = _module(a.dst, a.module)
    names = a.names or sorted((k for k in sr if k not in dr), key=lambda k: sr[k][0])
    for nm in names:
        c = candidates(a.src, a.dst, a.module, nm, a.n, a.all)
        if c is None:
            print(f"{nm}: not a function of {a.src}")
            continue
        size = (sr[nm][1] - sr[nm][0]) // 4
        print(f"{nm} ({size} words): " + (", ".join(f"{k} {r:.2f}" for r, k in c) or "no candidate of similar size"))


if __name__ == "__main__":
    main()
