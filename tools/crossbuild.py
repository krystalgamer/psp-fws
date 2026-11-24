#!/usr/bin/env python3
"""Compile a module's matched C functions and compare them with another build.

For each C function of src/<module> (matched against the module's current
binary) whose name also exists in config/<other>/symbol_addrs.<module>.txt
(NID-derived names are stable across firmware versions), compile the C file
with each candidate compiler setting and compare the function's words with
the other build (relocated fields masked).  Same source + different result
points at the compiler.

Needs: `make split` of the current C version (for INCLUDE_ASM files) and of
the other version (asm-only split is enough).

Usage: tools/crossbuild.py MODULE OTHER_VERSION [--settings "1.5.1 -O2" ...]
"""
import argparse
import collections
import difflib
import re
import struct
import subprocess
import sys
import tempfile
from pathlib import Path

from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection

sys.path.insert(0, str(Path(__file__).resolve().parent))
import auto_decomp as ad  # noqa: E402

ROOT = ad.ROOT


def other_funcs(ver, mod):
    """{name: (rom, end)} of the other build, from its symbol file and relocs."""
    elf = ELFFile(open(ROOT / "tmp/baserom" / ver / f"{mod}.prx", "rb"))
    text_off = elf.get_segment(0)["p_offset"]
    syms = {}
    for f in [ROOT / "config" / ver / f"symbol_addrs.{mod}.txt", ROOT / "tmp/build" / ver / f"prx_syms.{mod}.txt"]:
        if f.exists():
            for m in re.finditer(r"^\s*(\w+)\s*=\s*0x([0-9A-Fa-f]+);\s*//\s*type:func", f.read_text(), re.M):
                syms[m[1]] = int(m[2], 16)
    starts = sorted(set(syms.values()))
    asm = (ROOT / "tmp/asm" / ver / mod)
    for s in asm.rglob("*.s"):
        for m in re.finditer(r"^\s*glabel (\w+)\n\s*/\* [0-9A-F]+ ([0-9A-F]+) ", s.read_text(), re.M):
            starts.append(int(m[2], 16))
    starts = sorted(set(starts))
    out = {}
    import bisect
    for name, a in syms.items():
        i = bisect.bisect_right(starts, a)
        end = starts[i] if i < len(starts) else a + 4
        out[name] = (text_off + a, text_off + end)
    return out


def masked(base, relocs, rom, end):
    words = struct.unpack_from(f"<{(end - rom) // 4}I", base, rom)
    return [ad.mask(w, relocs.get(rom + 4 * k) or ("26" if w >> 26 in (2, 3) else None)) for k, w in enumerate(words)]


def compile_file(src, mod, compiler, opt):
    """{function: masked words} of a C file compiled with the given setting."""
    with tempfile.TemporaryDirectory() as td:
        s, o = Path(td) / "f.s", Path(td) / "f.o"
        pre = subprocess.run(["cpp", "-P", "-undef", "-nostdinc", "-Iinclude", f"-Isrc/{mod}", str(src)],
                             cwd=ROOT, capture_output=True, text=True)
        (Path(td) / "f.i").write_text(pre.stdout)
        r = subprocess.run([str(ad.TOOLS / f"cc1-{compiler}"), *opt.split(), "-G0", "-quiet", str(Path(td) / "f.i"),
                            "-o", str(s)], capture_output=True, text=True)
        if r.returncode:
            return {}
        r = subprocess.run([str(ad.TOOLS / "psp-as-1.3.1"), "-EL", "-G0", "-mulsw", f"-I{ROOT}", "-Iinclude", "-o", str(o), str(s)],
                           cwd=ROOT, capture_output=True, text=True)
        if r.returncode:
            return {}
        elf = ELFFile(open(o, "rb"))
        text_idx = next(n for n, sec in enumerate(elf.iter_sections()) if sec.name == ".text")
        text = elf.get_section(text_idx).data()
        kinds = {}
        for sec in elf.iter_sections():
            if isinstance(sec, RelocationSection) and sec.name == ".rel.text":
                for rel in sec.iter_relocations():
                    t = rel["r_info_type"]
                    kinds[rel["r_offset"]] = "26" if t == 4 else "16" if t in (5, 6) else "32"
        syms = sorted((s["st_value"], s.name) for s in elf.get_section_by_name(".symtab").iter_symbols()
                      if s["st_shndx"] == text_idx and s["st_info"]["type"] in ("STT_FUNC", "STT_NOTYPE")
                      and s.name and not s.name.startswith((".", "$")))
        out = {}
        for i, (a, n) in enumerate(syms):
            e = syms[i + 1][0] if i + 1 < len(syms) else len(text)
            while e > a and e - 4 >= a and text[e - 4:e] == b"\0\0\0\0" and n != syms[-1][1]:
                break
            words = struct.unpack_from(f"<{(e - a) // 4}I", text, a)
            out[n] = [ad.mask(w, kinds.get(a + 4 * k) or ("26" if w >> 26 in (2, 3) else None)) for k, w in enumerate(words)]
        return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("module")
    ap.add_argument("other")
    ap.add_argument("--settings", nargs="+", default=["1.3.1 -O2 -frename-registers", "1.5.1 -O2 -frename-registers",
                                                        "1.7.1 -O2 -frename-registers"])
    ap.add_argument("--show", type=int, default=0, help="print diffs of N differing functions")
    a = ap.parse_args()
    mod = a.module
    base = (ROOT / "tmp/baserom" / a.other / f"{mod}.prx").read_bytes()
    relocs = {}
    for line in (ROOT / "tmp/build" / a.other / f"reloc_addrs.{mod}.txt").read_text().splitlines():
        m = re.match(r"rom:(0[xX][0-9A-Fa-f]+) reloc:MIPS_(\w+)", line)
        if m:
            relocs[int(m[1], 16)] = "16" if m[2] in ("HI16", "LO16") else m[2]
    funcs = other_funcs(a.other, mod)
    files = sorted((ROOT / "src" / mod).glob("*.c"))
    c_funcs = {}
    for f in files:
        for m in re.finditer(r"^[^\n;#]*\b(\w+)\([^;{]*\)\s*\{$", f.read_text(), re.M):
            if m[1] in funcs:
                c_funcs[m[1]] = f
    print(f"{len(c_funcs)} C functions with a counterpart in {a.other}")
    results = collections.defaultdict(dict)
    for setting in a.settings:
        comp, opt = setting.split(" ", 1)
        cache = {}
        for n, f in c_funcs.items():
            if f not in cache:
                cache[f] = compile_file(f, mod, comp, opt)
            w = cache[f].get(n)
            if w is None:
                continue
            t = masked(base, relocs, *funcs[n])
            if len(t) > len(w) and all(x == 0 for x in t[len(w):]):
                t = t[:len(w)]
            sm = difflib.SequenceMatcher(None, t, w, autojunk=False)
            results[n][setting] = max(len(t), len(w)) - sum(b.size for b in sm.get_matching_blocks())
    tally = collections.Counter()
    for n, r in results.items():
        ok = tuple(sorted(s for s, v in r.items() if v == 0))
        tally[ok] += 1
    for k, v in tally.most_common():
        print(f"{v:5}  match with: {', '.join(k) or 'none'}")
    if a.show:
        shown = 0
        for n, r in results.items():
            if any(v == 0 for v in r.values()) or min(r.values(), default=99) > 6:
                continue
            print(f"--- {n} {r}")
            shown += 1
            if shown >= a.show:
                break
    return results


if __name__ == "__main__":
    main()
