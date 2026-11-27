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
import os
import difflib
import re
import struct
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
        cxx = "/* lang: c++ */" in c_text
        c.write_text(subprocess.run(["cpp", "-P", "-undef", "-nostdinc", f"-I{ROOT / 'include'}"] + (["-D__cplusplus=1"] if cxx else []) + ["-"],
                                    input=c_text, capture_output=True, text=True).stdout)
        cc, extra = (f"cc1plus-{comp}", ["-fno-exceptions", "-fno-rtti", "-fpermissive"]) if cxx else (f"cc1-{comp}", [])
        subprocess.run([str(AD.TOOLS / cc), *opt.split(), *extra, "-G0", "-quiet", str(c), "-o", str(sf)],
                       capture_output=True)
        subprocess.run([str(AD.TOOLS / "psp-as-1.3.1"), "-EL", "-G0", "-mulsw", "-o", str(o), str(sf)],
                       capture_output=True)
        elf = ELFFile(open(o, "rb"))
        symtab = elf.get_section_by_name(".symtab")
        text = elf.get_section_by_name(".text").data()
        out, strs, hi, calls, addend = [], {}, {}, [], {}
        for sec in elf.iter_sections():
            if isinstance(sec, RelocationSection) and sec.name == ".rel.text":
                for rel in sorted(sec.iter_relocations(), key=lambda r: r["r_offset"]):
                    if rel["r_info_type"] == 4:  # R_MIPS_26: call targets, compared with the asm's jal names
                        sym = symtab.get_symbol(rel["r_info_sym"])
                        calls.append(sym.name if sym["st_info"]["type"] != "STT_SECTION" else None)
                    if rel["r_info_type"] not in (5, 6):  # HI16/LO16 only; calls to stubs aren't in reloc_addrs
                        continue
                    sym = symtab.get_symbol(rel["r_info_sym"])
                    is_sec = sym["st_info"]["type"] == "STT_SECTION"
                    out.append((rel["r_offset"], sym.name if not is_sec else None))
                    imm = struct.unpack_from("<I", text, rel["r_offset"])[0] & 0xFFFF
                    if rel["r_info_type"] == 5:
                        hi[rel["r_info_sym"]] = imm
                    else:
                        addend[rel["r_offset"]] = (hi.get(rel["r_info_sym"], 0) << 16) + (imm - 0x10000 if imm & 0x8000 else imm)
                    if rel["r_info_type"] == 5:
                        pass
                    elif is_sec:
                        target = elf.get_section(sym["st_shndx"])
                        if target.name.startswith(".rodata"):
                            off = (hi.get(rel["r_info_sym"], 0) << 16) + (imm - 0x10000 if imm & 0x8000 else imm)
                            d = target.data()
                            strs[rel["r_offset"]] = d[off:d.find(b"\0", off)] if 0 <= off < len(d) else None
        names = [n for _, n in sorted(out)]
        compiled_reloc_syms.strings = [strs.get(o2) for o2, _ in sorted(out)]
        compiled_reloc_syms.calls = calls
        compiled_reloc_syms.addends = [addend.get(o2) for o2, _ in sorted(out)]
        return names


def target_calls_from_words(mod, name):
    """j/jal targets of an already-C function, read from the original's words and named via the build map
    (the function is C in this version, so splat wrote no asm for it). Jumps inside the function are None."""
    mp = ROOT / "tmp/build" / mod.ver / f"{mod.mod}.map"
    if not mp.exists():
        return None
    names = {}
    for m in re.finditer(r"^\s+0x([0-9a-f]+)\s+([A-Za-z_]\w*)$", mp.read_text(), re.M):
        if not m[2].endswith("NON_MATCHING"):
            names.setdefault(int(m[1], 16), m[2])
    rom, end, _ = mod.funcs[name]
    out = []
    for r in range(rom, end, 4):
        w = struct.unpack_from("<I", mod.base, r)[0]
        if w >> 26 in (2, 3):
            tgt = (w & 0x3FFFFFF) << 2
            lo, hi = rom - mod.text_off, end - mod.text_off
            out.append(None if lo <= tgt < hi else names.get(tgt))
    return out


def target_reloc_syms(mod, name):
    rom, end, _ = mod.funcs[name]
    out = []
    for line in (ROOT / "tmp/build" / mod.ver / f"reloc_addrs.{mod.mod}.txt").read_text().splitlines():
        m = re.match(r"rom:(0[xX][0-9A-Fa-f]+) reloc:MIPS_\w+ symbol:(\w+)", line)
        if m and rom <= int(m[1], 16) < end:
            out.append((int(m[1], 16), m[2]))
    # the address each reloc resolves to, from the original's own HI/LO immediates
    # (splat's label name may carry another version's address)
    addrs, hi = [], {}
    for r, _ in sorted(out):
        w = struct.unpack_from("<I", mod.base, r)[0]
        imm = w & 0xFFFF
        if w >> 26 == 0xF:  # lui
            hi[(w >> 16) & 31] = imm
            addrs.append(None)
        else:
            base = hi.get((w >> 21) & 31, 0)
            addrs.append((base << 16) + (imm - 0x10000 if imm & 0x8000 else imm))
    target_reloc_syms.addrs = addrs
    return [n for _, n in sorted(out)]


def top_level_lines(text):
    """Lines of TEXT that start at brace depth 0."""
    out, depth = [], 0
    for line in text.splitlines():
        if depth == 0:
            out.append(line)
        depth += line.count("{") - line.count("}")
    return out


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


def _var_score(args):
    pre, src, combo, target, comp, opt = args
    w, err = AD.compile_words(pre + src, comp, opt)
    if w is None:
        return combo, None
    sm = difflib.SequenceMatcher(None, target, w, autojunk=False)
    return combo, max(len(target), len(w)) - sum(b.size for b in sm.get_matching_blocks())


def variants(text, body, target, comp, opt, jobs):
    """Score every combination of the body's //V{ alt0 //V| alt1 ... //V} blocks."""
    import itertools
    from multiprocessing import Pool
    pre = text[:len(text) - len(body)]
    parts = re.split(r"[ \t]*//V\{[^\n]*\n(.*?)[ \t]*//V\}[^\n]*\n", body, flags=re.S)
    fixed = parts[0::2]
    alts = [re.split(r"[ \t]*//V\|[^\n]*\n", p) for p in parts[1::2]]
    if not alts:
        sys.exit("--variants: no //V{ ... //V} blocks in the body")

    def src_of(combo):
        out = fixed[0]
        for i, c in enumerate(combo):
            out += alts[i][c] + fixed[i + 1]
        return out
    combos = list(itertools.product(*[range(len(a)) for a in alts]))
    with Pool(jobs) as pool:
        res = pool.map(_var_score, [(pre, src_of(c), c, target, comp, opt) for c in combos])
    ok = sorted((sc, c) for c, sc in res if sc is not None)
    print(f"variants: {len(combos)} combinations, {len(ok)} compiled")
    for sc, c in ok[:5]:
        print(f"  {sc}: {c}")
    if ok and ok[0][0] == 0:
        print("best variant source:\n" + src_of(ok[0][1]))
    return src_of(ok[0][1]) if ok else None


def climb(pre, lines, idx, target, comp, opt, jobs):
    """Many //P lines: hill-climb over moves of one line to another position (parallel per round)."""
    import random
    from multiprocessing import Pool
    start = [lines[i] for i in idx]
    rng = random.Random(1)
    overall = (10 ** 9, start)
    with Pool(jobs) as pool:
        import time
        deadline = time.time() + float(os.environ.get("CLIMB_SECONDS", "600"))
        for restart in range(8):
            if time.time() > deadline:
                print("climb: time cap (CLIMB_SECONDS) reached")
                break
            cur = list(start) if restart == 0 else rng.sample(start, len(start))
            best = _perm_score((pre, lines, idx, cur, target, comp, opt))
            best = best[0] if best else 10 ** 9
            best, cur = _climb1(pool, pre, lines, idx, cur, best, target, comp, opt)
            print(f"climb restart {restart}: {best}")
            if best < overall[0]:
                overall = (best, cur)
            if best == 0:
                break
    print(f"climb best {overall[0]}:", " | ".join(l.strip() for l in overall[1]))


def _climb1(pool, pre, lines, idx, cur, best, target, comp, opt):
    import time
    deadline = time.time() + float(os.environ.get("CLIMB_SECONDS", "600"))
    if True:
        while best and time.time() < deadline:
            moves = []
            for i in range(len(cur)):
                for j in range(len(cur)):
                    if i != j:
                        c = cur[:i] + cur[i + 1:]
                        c.insert(j, cur[i])
                        moves.append(c)
            res = [r for r in pool.map(_perm_score, [(pre, lines, idx, m, target, comp, opt) for m in moves]) if r]
            if not res:
                break
            sc, order = min(res, key=lambda r: r[0])
            if sc >= best:
                break
            best = sc
            cur = [next(l for l in cur if l.strip() == o) for o in order]
    return best, cur


def permute(text, body, target, comp, opt, jobs):
    """Brute-force the order of the //P-tagged body lines (store order, statement order)."""
    import itertools
    from multiprocessing import Pool
    pre = text[:len(text) - len(body)]
    lines = body.split("\n")
    idx = [i for i, l in enumerate(lines) if "//P" in l]
    if len(idx) > 7:
        return climb(pre, lines, idx, target, comp, opt, jobs)
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


def lock_shared():
    """Wait while tools/hand.py rewrites this tree's sources (it holds the lock exclusively)."""
    import fcntl
    (ROOT / "tmp").mkdir(exist_ok=True)
    f = open(ROOT / "tmp" / "hand.lock", "a")
    fcntl.flock(f, fcntl.LOCK_SH)
    return f


def main():
    _lk = lock_shared()  # noqa: F841
    ap = argparse.ArgumentParser()
    ap.add_argument("ver")
    ap.add_argument("module")
    ap.add_argument("cfile")
    ap.add_argument("--decls")
    ap.add_argument("--diff", action="store_true")
    ap.add_argument("--diff-opt", help="with --diff: show the diff for this option set (e.g. '-O2') instead of the own one")
    ap.add_argument("--permute", action="store_true",
                    help="try every order of the body lines tagged //P (own setting); >7 lines: hill-climb over single-line moves")
    ap.add_argument("--variants", action="store_true",
                    help="try every combination of '//V{' ... '//V|' ... '//V}' alternative blocks in the body")
    ap.add_argument("--write", action="store_true", help="with --variants: write the best combination back to FILE.c")
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
    # only file-scope lines count (struct members and statements inside bodies don't)
    top = "\n".join(top_level_lines(extra))
    protos = re.findall(r"\b(\w+)\([^;{}]*\);\s*$", top, re.M)
    names = set(protos)
    varn = {n for n in re.findall(r"\b(\w+)\s*(?:\[[^\]]*\])?;\s*$", top, re.M)}
    out, depth = [], 0
    for line in hdr.splitlines(keepends=True):
        drop = False
        if depth == 0:
            pm = re.search(r"\b(\w+)\([^\n]*\);\s*$", line)
            vm = re.search(r"\b(\w+)\s*(?:\[[^\]]*\])?;\s*$", line)
            drop = bool(pm and (pm[1] in names or pm[1] == name)) or bool(vm and not pm and vm[1] in varn)
        depth += line.count("{") - line.count("}")
        if not drop:
            out.append(line)
    hdr = "".join(out)
    # the source file's own prelude: includes, file-local externs and static inlines before the first entry
    src = Path(mod.file_of(name)).read_text()
    # (stops at the first non-static function definition too: earlier C functions would be compiled into the score)
    m = re.search(r"^(INCLUDE_ASM|INCLUDE_RODATA|#if|(?!static)[^\n;#]*?\b\w+\([^;{}]*\)\s*\{)", src, re.M)
    prelude = re.sub(r'^#include "\w+_decls\.h"\n', "", src[:m.start()] if m else "", flags=re.M)
    fwv = re.match(r"\d+", a.ver)[0]
    fwvar = (re.search(r"v(\d+)", a.ver) or [None, "0"])[1]
    text = f"#define FW_VERSION {fwv}\n#define FW_VARIANT {fwvar}\n" + hdr + "\n" + prelude + "\n" + extra + "\n" + body
    target = mod.target_words(name)
    comp, own = AD.Module.file_setting(mod.file_of(name))
    if os.environ.get("HT_COMP"):  # try another compiler release with the file's flags
        comp = os.environ["HT_COMP"]
        own = comp + " " + own.split(" ", 1)[1]
    best = diff_words = None
    opts = list(AD.OPTS)
    if own.split(" ", 1)[1] not in opts:  # file flags beyond the standard sets (e.g. -fno-merge-constants)
        opts.append(own.split(" ", 1)[1])
    if a.opts:
        opts = [o.strip() for o in a.opts.split(";") if o.strip()]
        opts += [own.split(" ", 1)[1]] if own.split(" ", 1)[1] not in opts else []
    if a.extra:
        opts = [f"{o} {a.extra}" for o in opts]
        own = f"{own} {a.extra}"
    if a.variants:  # the raw body holds every alternative; only the combinations are scored
        opts = []
        best = None
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
        if a.diff_opt and opt == a.diff_opt:
            diff_words = words
    if best == target:
        # words are compared with relocated fields masked; check the symbols too
        mine = compiled_reloc_syms(text, comp, own.split(" ", 1)[1])
        want = target_reloc_syms(mod, name)
        # splat names an address inside a global's extent D_XXXXXXXX; the C reaches it as sym+off
        # (also auto-named: splat labels each referenced word of a big struct, the C uses the base + field offset)
        def interior(m, w):
            if w == "PRX_ZERO":  # splat: a second %lo reusing an earlier lui register
                return True
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
            adds = getattr(compiled_reloc_syms, "addends", [])
            for i, w, m in bad:
                off = adds[i] if i < len(adds) and adds[i] is not None else None
                print(f"  (reloc {i}: target label {w} assumed inside {m}; check the offset)"
                      + (f" [{m}+0x{off:X}]" if off is not None else ""))
            # string literals the C emits must equal the original's (hand_try compares no other rodata)
            bad_str = []
            taddrs = getattr(target_reloc_syms, "addrs", [])
            for i, (w, ms) in enumerate(zip(want, compiled_reloc_syms.strings)):
                ta = taddrs[i] if i < len(taddrs) else None
                if ms is None or ta is None:
                    continue
                at = mod.text_off + ta
                ts = mod.base[at:mod.base.find(b"\0", at)]
                if ts != ms:
                    bad_str.append((w, ts, ms))
            for w, ts, ms in dict.fromkeys(bad_str):
                print(f"  string literal for {w} differs: target {ts!r}, mine {ms!r}")
            # call targets: the original's jal names (from its asm) must be the functions the C calls
            bad_call = []
            asm_path = mod.funcs[name][2]
            want_calls = None
            if asm_path is not None:
                # j/jal in program order; local labels (.L) are jumps, not calls
                want_calls = [None if c.startswith(".") else c
                              for c in re.findall(r"\bj(?:al)?\s+(\.?[A-Za-z_]\w*)", asm_path.read_text())]
            else:
                want_calls = target_calls_from_words(mod, name)
            if want_calls is not None:
                got = compiled_reloc_syms.calls
                if len(want_calls) == len(got):
                    bad_call = [(w, g) for w, g in zip(want_calls, got) if None not in (w, g) and g != w]
                else:
                    wc, gc = [c for c in want_calls if c], [c for c in got if c]
                    if len(wc) == len(gc):
                        bad_call = [(w, g) for w, g in zip(wc, gc) if g != w]
            for w, g in dict.fromkeys(bad_call):
                print(f"  call target differs: target {w}, mine {g}")
            if bad_str:
                print("RESULT: words match, STRING LITERALS DIFFER (not a match)")
            elif bad_call:
                print("RESULT: words match, CALL TARGETS DIFFER (not a match)")
            else:
                print("RESULT: MATCH")
    elif best is not None:
        sm = difflib.SequenceMatcher(None, target, best, autojunk=False)
        print(f"RESULT: {max(len(target), len(best)) - sum(b.size for b in sm.get_matching_blocks())} off (own setting)")
    if a.variants:
        bestsrc = variants(text, body, target, comp, own.split(" ", 1)[1], a.j)
        if a.write and bestsrc is not None:
            Path(a.cfile).write_text(bestsrc)
            print(f"wrote the best combination to {a.cfile}")
    if a.permute:
        permute(text, body, target, comp, own.split(" ", 1)[1], a.j)
    if a.perm:
        import perm_near
        d = perm_near.write_perm_dir(mod, name, text, comp, own.split(" ", 1)[1])
        print(f"permuter dir: {d}")
    if a.diff and a.diff_opt:
        if a.diff_opt not in opts:
            opts.append(a.diff_opt)
            diff_words, _ = AD.compile_words(text, comp, a.diff_opt)
        best = diff_words
    if a.diff and best is not None:
        for l in difflib.unified_diff(disasm(target), disasm(best), "target", "mine", lineterm="", n=2):
            print(l)


if __name__ == "__main__":
    main()
