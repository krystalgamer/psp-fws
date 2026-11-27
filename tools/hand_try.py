#!/usr/bin/env python3
"""Score hand-written C for one function against the original, for every setting.

    tools/hand_try.py VER MODULE FILE.c [--decls DECLS.h] [--diff] [--perm]

Compiles FILE.c with the module's context (decls + DECLS.h) using each compiler
option set auto_decomp tries (with the module's compiler for VER) and prints the
number of differing instructions per setting; --diff shows the instruction diff
for the module's own setting; --perm writes a decomp-permuter directory
(tmp/perm/MODULE/FUNC) seeded with the hand C. Nothing in the repository is changed.
"""
import argparse
import difflib
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import auto_decomp as AD  # noqa: E402


def disasm(words):
    import struct
    import tempfile
    with tempfile.NamedTemporaryFile(suffix=".bin") as f:
        f.write(b"".join(struct.pack("<I", w) for w in words))
        f.flush()
        out = subprocess.run([str(ROOT / "tmp/toolchains/bin/mips-objdump"), "-D", "-b", "binary", "-m", "mips:allegrex",
                              "-EL", "--no-show-raw-insn", f.name], capture_output=True, text=True).stdout
    return [re.sub(r"^\s*[0-9a-f]+:\s*", "", l) for l in out.splitlines() if re.match(r"^\s*[0-9a-f]+:", l)]


def compiled_reloc_syms(c_text, comp, opt):
    """Symbols referenced by the relocations of the compiled .text, in offset order."""
    import tempfile
    from elftools.elf.elffile import ELFFile
    from elftools.elf.relocation import RelocationSection
    with tempfile.TemporaryDirectory() as td:
        c, sf, o = Path(td) / "f.c", Path(td) / "f.s", Path(td) / "f.o"
        c.write_text(subprocess.run(["cpp", "-P", "-undef", "-nostdinc", f"-I{ROOT / 'include'}", "-"],
                                    input=c_text, capture_output=True, text=True).stdout)
        subprocess.run([str(AD.TOOLS / f"cc1-{comp}"), *opt.split(), "-G0", "-quiet", str(c), "-o", str(sf)],
                       capture_output=True)
        subprocess.run([str(AD.TOOLS / "psp-as-1.3.1"), "-EL", "-G0", "-mulsw", "-o", str(o), str(sf)],
                       capture_output=True)
        elf = ELFFile(open(o, "rb"))
        symtab = elf.get_section_by_name(".symtab")
        out = []
        for sec in elf.iter_sections():
            if isinstance(sec, RelocationSection) and sec.name == ".rel.text":
                for rel in sec.iter_relocations():
                    if rel["r_info_type"] not in (5, 6):  # HI16/LO16 only; calls to stubs aren't in reloc_addrs
                        continue
                    sym = symtab.get_symbol(rel["r_info_sym"])
                    out.append((rel["r_offset"], sym.name if sym["st_info"]["type"] != "STT_SECTION" else None))
        return [n for _, n in sorted(out)]


def target_reloc_syms(mod, name):
    rom, end, _ = mod.funcs[name]
    out = []
    for line in (ROOT / "tmp/build" / mod.ver / f"reloc_addrs.{mod.mod}.txt").read_text().splitlines():
        m = re.match(r"rom:(0[xX][0-9A-Fa-f]+) reloc:MIPS_\w+ symbol:(\w+)", line)
        if m and rom <= int(m[1], 16) < end:
            out.append((int(m[1], 16), m[2]))
    return [n for _, n in sorted(out)]


def _perm_score(args):
    pre, lines, idx, perm, target, comp, opt = args
    L = list(lines)
    for i, l in zip(idx, perm):
        L[i] = l
    w, _ = AD.compile_words(pre + "\n".join(L), comp, opt)
    if w is None:
        return None
    sm = difflib.SequenceMatcher(None, target, w, autojunk=False)
    return max(len(target), len(w)) - sum(b.size for b in sm.get_matching_blocks()), [l.strip() for l in perm]


def permute(text, body, target, comp, opt, jobs):
    """Brute-force the order of the //P-tagged body lines (store order, statement order)."""
    import itertools
    from multiprocessing import Pool
    pre = text[:len(text) - len(body)]
    lines = body.split("\n")
    idx = [i for i, l in enumerate(lines) if "//P" in l]
    if len(idx) > 8:
        sys.exit(f"{len(idx)} //P lines: at most 8 (8! orders)")
    jobsl = ((pre, lines, idx, p, target, comp, opt) for p in itertools.permutations([lines[i] for i in idx]))
    res = []
    with Pool(jobs) as pool:
        for r in pool.imap_unordered(_perm_score, jobsl, chunksize=4):
            if r:
                res.append(r)
                if r[0] == 0:
                    pool.terminate()
                    break
    res.sort(key=lambda r: r[0])
    print(f"permute: {len(res)} orders compiled")
    for sc, p in res[:3]:
        print(f"  {sc}:", " | ".join(p))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("ver")
    ap.add_argument("module")
    ap.add_argument("cfile")
    ap.add_argument("--decls")
    ap.add_argument("--diff", action="store_true")
    ap.add_argument("--permute", action="store_true",
                    help="try every order of the body lines tagged //P (own setting), print the best")
    ap.add_argument("-j", type=int, default=4, help="processes for --permute")
    ap.add_argument("--opts", help="';'-separated option sets to try instead of the standard list (own setting kept)")
    ap.add_argument("--extra", default="", help="flags appended to every tried setting, e.g. --extra=-mext")
    ap.add_argument("--perm", action="store_true", help="write tmp/perm/MODULE/FUNC for decomp-permuter (own setting)")
    a = ap.parse_args()
    mod = AD.Module(a.ver, a.module)
    body = Path(a.cfile).read_text()
    name = re.search(r"^(?!static)[^\n;#]*?\b(\w+)\([^;{}]*\)\s*\{", body, re.M)[1]
    extra = Path(a.decls).read_text() if a.decls else ""
    # drop the decls' own prototype/vars that the hand decls redefine
    hdr = mod.header()
    protos = re.findall(r"\b(\w+)\([^;{}]*\);\s*$", extra, re.M)
    for n in protos:
        hdr = re.sub(rf"^[^\n]*\b{n}\([^\n]*\);\n", "", hdr, flags=re.M)
    for n in re.findall(r"\b(\w+)\s*(?:\[[^\]]*\])?;\s*$", extra, re.M) + [name]:
        hdr = re.sub(rf"^[^\n]*\b{n}\b(?:\[[^\]]*\])?;\n", "", hdr, flags=re.M) if n != name else \
            re.sub(rf"^[^\n]*\b{n}\([^\n]*\);\n", "", hdr, flags=re.M)
    # the source file's own prelude: includes, file-local externs and static inlines before the first entry
    src = Path(mod.file_of(name)).read_text()
    m = re.search(r"^(INCLUDE_ASM|INCLUDE_RODATA|#if)", src, re.M)
    prelude = re.sub(r'^#include "\w+_decls\.h"\n', "", src[:m.start()] if m else "", flags=re.M)
    fwv = re.match(r"\d+", a.ver)[0]
    fwvar = (re.search(r"v(\d+)", a.ver) or [None, "0"])[1]
    text = f"#define FW_VERSION {fwv}\n#define FW_VARIANT {fwvar}\n" + hdr + "\n" + prelude + "\n" + extra + "\n" + body
    target = mod.target_words(name)
    comp, own = AD.Module.file_setting(mod.file_of(name))
    best = None
    opts = list(AD.OPTS)
    if a.opts:
        opts = [o.strip() for o in a.opts.split(";") if o.strip()]
        opts += [own.split(" ", 1)[1]] if own.split(" ", 1)[1] not in opts else []
    if a.extra:
        opts = [f"{o} {a.extra}" for o in AD.OPTS]
        own = f"{own} {a.extra}"
    for opt in opts:
        words, err = AD.compile_words(text, comp, opt)
        if words is None:
            print(f"{comp} {opt}: compile error\n{(err or '')[-800:]}")
            break
        sm = difflib.SequenceMatcher(None, target, words, autojunk=False)
        score = max(len(target), len(words)) - sum(b.size for b in sm.get_matching_blocks())
        mark = " <- own" if f"{comp} {opt}" == own else ""
        print(f"{comp} {opt}: {score}{' MATCH' if words == target else ''}{mark}")
        if f"{comp} {opt}" == own:
            best = words
    if best == target:
        # words are compared with relocated fields masked; check the symbols too
        mine = compiled_reloc_syms(text, comp, own.split(" ", 1)[1])
        want = target_reloc_syms(mod, name)
        # splat names an address inside a global's extent D_XXXXXXXX; the C reaches it as sym+off
        # (also auto-named: splat labels each referenced word of a big struct, the C uses the base + field offset)
        def interior(m, w):
            if not re.fullmatch(r"D_[0-9A-F]{8}", w):
                return False
            mm = re.fullmatch(r"D_([0-9A-F]{8})", m)
            return not mm or int(mm[1], 16) < int(w[2:], 16)
        bad = [(i, w, m) for i, (w, m) in enumerate(zip(want, mine)) if m is not None and m != w]
        if len(mine) != len(want) or any(not interior(m, w) for _, w, m in bad):
            print("relocation symbols differ:")
            for i, w, m in bad:
                print(f"  reloc {i}: target {w}, mine {m}")
            print("RESULT: words match, RELOCATION SYMBOLS DIFFER (not a match)")
        else:
            print("relocation symbols match")
            for i, w, m in bad:
                print(f"  (reloc {i}: target label {w} assumed inside {m}; check the offset)")
            print("RESULT: MATCH")
    elif best is not None:
        sm = difflib.SequenceMatcher(None, target, best, autojunk=False)
        print(f"RESULT: {max(len(target), len(best)) - sum(b.size for b in sm.get_matching_blocks())} off (own setting)")
    if a.permute:
        permute(text, body, target, comp, own.split(" ", 1)[1], a.j)
    if a.perm:
        import perm_near
        d = perm_near.write_perm_dir(mod, name, text, comp, own.split(" ", 1)[1])
        print(f"permuter dir: {d}")
    if a.diff and best is not None:
        for l in difflib.unified_diff(disasm(target), disasm(best), "target", "mine", lineterm="", n=2):
            print(l)


if __name__ == "__main__":
    main()
