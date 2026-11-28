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
import math
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
        out, strs, hi, calls, addend, consts = [], {}, {}, [], {}, {}
        # words of .rodata* that are relocated against .text: jump tables (case labels), not literals
        rodata_text = {}  # rodata section name -> {offset: .text offset the word points at}
        func_off = {s.name: s["st_value"] for s in symtab.iter_symbols() if s["st_info"]["type"] == "STT_FUNC"}
        for sec in elf.iter_sections():
            if isinstance(sec, RelocationSection) and sec.name.startswith(".rel.rodata"):
                tsec = elf.get_section(sec["sh_info"])
                d = tsec.data()
                for rel in sec.iter_relocations():
                    sym = symtab.get_symbol(rel["r_info_sym"])
                    if rel["r_info_type"] == 2 and sym["st_shndx"] not in ("SHN_UNDEF", "SHN_ABS") \
                            and elf.get_section(sym["st_shndx"]).name == ".text":
                        rodata_text.setdefault(tsec.name, {})[rel["r_offset"]] = \
                            sym["st_value"] + struct.unpack_from("<I", d, rel["r_offset"])[0]
        jtabs = {}
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
                            jt = rodata_text.get(target.name, {})
                            if off in jt:
                                ents, o2 = [], off
                                while o2 in jt:
                                    ents.append(jt[o2])
                                    o2 += 4
                                jtabs[rel["r_offset"]] = ents
                                continue
                            strs[rel["r_offset"]] = d[off:d.find(b"\0", off)] if 0 <= off < len(d) else None
                            # raw constant words too (float/double literals: .rodata.cst4/cst8 or plain .rodata)
                            width = 8 if target.name.endswith("cst8") else 4
                            consts[rel["r_offset"]] = (d[off:off + width] if 0 <= off <= len(d) - width else None,
                                                       target.name.startswith(".rodata.cst"))
        names = [n for _, n in sorted(out)]
        compiled_reloc_syms.strings = [strs.get(o2) for o2, _ in sorted(out)]
        compiled_reloc_syms.calls = calls
        compiled_reloc_syms.addends = [addend.get(o2) for o2, _ in sorted(out)]
        compiled_reloc_syms.consts = [consts.get(o2) for o2, _ in sorted(out)]
        # jump tables: .text offsets of the entries, relative to the function using them
        def fstart(o2):
            return max([v for v in func_off.values() if v <= o2], default=0)
        compiled_reloc_syms.jtabs = [None if o2 not in jtabs else [t - fstart(o2) for t in jtabs[o2]]
                                     for o2, _ in sorted(out)]
        return names


def build_map_addrs(mod):
    """name -> address from the current build map (segment-relative, like the original's immediates)."""
    mp = ROOT / "tmp/build" / mod.ver / f"{mod.mod}.map"
    out = {}
    if mp.exists():
        for m in re.finditer(r"^\s+0x([0-9a-f]+)\s+([A-Za-z_]\w*)$", mp.read_text(), re.M):
            if not m[2].endswith("NON_MATCHING"):
                out.setdefault(m[2], int(m[1], 16))
    # the map is section-relative for data; symbol_addrs holds the module addresses the immediates use
    sa = ROOT / "config" / mod.ver / f"symbol_addrs.{mod.mod}.txt"
    if sa.exists():
        for m in re.finditer(r"^\s*([A-Za-z_]\w*)\s*=\s*0x([0-9A-Fa-f]+)\s*;", sa.read_text(), re.M):
            out[m[1]] = int(m[2], 16)
    return out


def field_aliases(mod):
    """Old auto labels of fields inside sized symbols: label -> (symbol, offset) (prx_relocs PROVIDEs)."""
    ab = ROOT / "tmp/build" / mod.ver / f"abs_syms.{mod.mod}.txt"
    return {m[1]: (m[2], int(m[3], 16)) for m in re.finditer(
        r"^PROVIDE\((\w+) = (\w+) \+ (0x[0-9a-fA-F]+)\);", ab.read_text() if ab.exists() else "", re.M)}


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
    tadd = {}
    for line in (ROOT / "tmp/build" / mod.ver / f"reloc_addrs.{mod.mod}.txt").read_text().splitlines():
        m = re.match(r"rom:(0[xX][0-9A-Fa-f]+) reloc:MIPS_\w+ symbol:(\w+)(?: addend:(0x[0-9A-Fa-f]+))?", line)
        if m and rom <= int(m[1], 16) < end:
            out.append((int(m[1], 16), m[2]))
            if m[3] and m[2] != "PRX_ZERO":  # a field of a sized symbol: sym+addend
                tadd[int(m[1], 16)] = int(m[3], 16)
    target_reloc_syms.tadds = [tadd.get(r) for r, _ in sorted(out)]
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


def first_variant(body):
    """BODY with every //V{ alt0 //V| alt1 ... //V} block reduced to its first alternative."""
    return re.sub(r"[ \t]*//V\{[^\n]*\n(.*?)[ \t]*//V\}[^\n]*\n",
                  lambda m: re.split(r"[ \t]*//V\|[^\n]*\n", m[1])[0], body, flags=re.S)


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
    if ok:
        print(("best variant source (MATCH):" if ok[0][0] == 0 else f"best variant source ({ok[0][0]} off):")
              + "\n" + src_of(ok[0][1]))
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
            if restart == 0:
                cur = list(start)
            else:  # shuffle the movable units only, the others keep their relative order
                mv = [u for u in start if MOVABLE(u)]
                rng.shuffle(mv)
                cur, it = [], iter(mv)
                fixed = [u for u in start if not MOVABLE(u)]
                slots = sorted(rng.sample(range(len(start)), len(fixed)))
                fi = iter(fixed)
                cur = [next(fi) if k in slots else next(it) for k in range(len(start))]
            best = _perm_score((pre, lines, idx, cur, target, comp, opt))
            best = best[0] if best else 10 ** 9
            best, cur = _climb1(pool, pre, lines, idx, cur, best, target, comp, opt)
            print(f"climb restart {restart}: {best}")
            if best < overall[0]:
                overall = (best, cur)
            if best == 0:
                break
    print(f"climb best {overall[0]}:", " | ".join(" ".join(l.split()) for l in overall[1]))


def _climb1(pool, pre, lines, idx, cur, best, target, comp, opt):
    import time
    deadline = time.time() + float(os.environ.get("CLIMB_SECONDS", "600"))
    if True:
        while best and time.time() < deadline:
            moves = []
            for i in range(len(cur)):
                if not MOVABLE(cur[i]):
                    continue
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


CASES = False
MOVABLE = lambda unit: True  # noqa: E731


def permute(text, body, target, comp, opt, jobs):
    """Brute-force the order of the //P-tagged body lines (store order, statement order)."""
    import itertools
    from multiprocessing import Pool
    pre = text[:len(text) - len(body)]
    if CASES:
        # units = the case blocks of the first switch (each from its `case`/`default` to the next one)
        m = re.search(r"\bswitch\s*\([^)]*\)\s*\{\n", body)
        if not m:
            sys.exit("--cases: no switch in the body")
        depth, i, end = 1, m.end(), None
        while i < len(body):
            depth += (body[i] == "{") - (body[i] == "}")
            if depth == 0:
                end = i
                break
            i += 1
        inner = body[m.end():end]
        parts = re.split(r"(?m)(?=^\s*(?:case\b|default\s*:))", inner)
        head_txt = parts[0] if not re.match(r"\s*(?:case\b|default)", parts[0]) else ""
        blocks = [x for x in (parts[1:] if head_txt else parts) if x]
        # units: head, one per case, tail (rejoined with "\n", so strip one trailing newline per unit)
        lines = [body[:m.end()] + head_txt.rstrip("\n")] + [b.rstrip("\n") for b in blocks] + [body[end:]]
        idx = list(range(1, len(blocks) + 1))
        global MOVABLE
        # cases with an assert keep their (line-number) order; the others move
        MOVABLE = lambda unit: not re.search(r"ASSERT|Kprintf|__LINE__", unit)  # noqa: E731
        print(f"--cases: {len(blocks)} case blocks, {sum(1 for b in blocks if MOVABLE(b))} movable")
        return climb(pre, lines, idx, target, comp, opt, jobs) if len(idx) > 7 else \
            _permute_units(pre, lines, idx, target, comp, opt, jobs)
    lines = []
    raw = body.split("\n")
    i = 0
    while i < len(raw):
        unit = raw[i]
        # a tagged line that opens a block (`if (...) {` ... `}`) moves as one unit with its body
        if "//P" in unit:
            depth = unit.count("{") - unit.count("}")
            first = i
            while depth > 0 and i + 1 < len(raw):
                i += 1
                unit += "\n" + raw[i]
                depth += raw[i].count("{") - raw[i].count("}")
            if i > first:
                print(f"--permute: tagged line {first + 1} of the body opens a block: lines {first + 1}-{i + 1} move as one unit")
        lines.append(unit)
        i += 1
    idx = [i for i, l in enumerate(lines) if "//P" in l]
    if len(idx) > 7:
        return climb(pre, lines, idx, target, comp, opt, jobs)
    return _permute_units(pre, lines, idx, target, comp, opt, jobs)


def _permute_units(pre, lines, idx, target, comp, opt, jobs):
    import itertools
    from multiprocessing import Pool
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
    total = math.factorial(len(idx))
    print(f"permute: {len(res)} orders compiled" + ("" if res and res[0][0] == 0 else f" of {total}"))
    if len(res) < total and not (res and res[0][0] == 0):
        print(f"WARNING: {total - len(res)} orders did not compile (a tagged line that is not a whole statement?)")
    for sc, p in res[:3]:
        print(f"  {sc}:", " | ".join(" ".join(x.split()) for x in p))


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
    ap.add_argument("--cases", action="store_true",
                    help="with --permute: reorder the case blocks of the body's first switch (cases ending in "
                         "a break/return/goto; //P not needed). Order steers -frename-registers and block layout")
    ap.add_argument("--permute", action="store_true",
                    help="try every order of the body lines tagged //P (own setting); >7 lines: hill-climb over single-line moves")
    ap.add_argument("--variants", action="store_true",
                    help="try every combination of '//V{' ... '//V|' ... '//V}' alternative blocks in the body")
    ap.add_argument("--write", action="store_true", help="with --variants: write the best combination back to FILE.c")
    ap.add_argument("-j", type=int, default=4, help="processes for --permute")
    ap.add_argument("--opts", help="';'-separated option sets to try instead of the standard list (own setting kept); --variants/--permute use the first")
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
    if not a.variants and re.search(r"//V\{", body):
        # without --variants a body with //V blocks is scored (and --perm written) with the first alternatives
        print("note: //V blocks: using their first alternatives (--variants scores every combination)")
        body = first_variant(body)
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
        # by address: my symbol (from the build map) + addend == the address the original's immediates give
        taddrs = getattr(target_reloc_syms, "addrs", [])
        adds = getattr(compiled_reloc_syms, "addends", [])
        symaddr = build_map_addrs(mod)

        def same_addr(i, m):
            ta = taddrs[i] if i < len(taddrs) else None
            ad = adds[i] if i < len(adds) else None
            if ta is None or ad is None or m not in symaddr:
                return False
            return (symaddr[m] + ad) & 0xFFFFFFFF == ta & 0xFFFFFFFF
        bad = [(i, w, m) for i, w, m in bad if not same_addr(i, m)]
        # the original references a field of a sized symbol (sym+addend): same symbol, same offset
        tadds = getattr(target_reloc_syms, "tadds", [])

        def tname(i, w):
            ta = tadds[i] if i < len(tadds) else None
            return f"{w}+0x{ta:X}" if ta else w
        off_bad = [(i, w, m) for i, (w, m) in enumerate(zip(want, mine))
                   if m == w and i < len(tadds) and tadds[i] is not None and i < len(adds)
                   and adds[i] is not None and adds[i] != tadds[i]]
        # a %lo of a sized symbol's field must resolve to the same address (no interior-label leniency)
        alias = field_aliases(mod)
        field_bad = [i for i, w, m in bad if i < len(tadds) and tadds[i] is not None and i < len(adds)
                     and adds[i] is not None and alias.get(m, (None, 0))[0] != w
                     or (m in alias and alias[m][0] == w and adds[i] is not None and alias[m][1] + adds[i] != tadds[i])]
        if len(mine) != len(want) or any(not interior(m, w) for _, w, m in bad) or off_bad or field_bad:
            print("relocation symbols differ:")
            for i, w, m in bad:
                print(f"  reloc {i}: target {tname(i, w)}, mine {m}")
            for i, w, m in off_bad:
                print(f"  reloc {i}: target {tname(i, w)}, mine {m}+0x{adds[i]:X} (another field)")
            print("RESULT: words match, RELOCATION SYMBOLS DIFFER (not a match)")
        else:
            print("relocation symbols match")
            adds = getattr(compiled_reloc_syms, "addends", [])
            for i, w, m in bad:
                if alias.get(m, (None,))[0] == w:  # an old field label of w: checked above
                    continue
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
                # only compare text (jump tables and other rodata referenced through .rodata relocs aren't strings)
                printable = lambda b: b and all(32 <= c < 127 or c in (9, 10, 13) for c in b)  # noqa: E731
                if not (printable(ms) and printable(ts)) and not (printable(ms) and not ts):
                    continue
                if ts != ms:
                    bad_str.append((w, ts, ms))
            # constant-pool literals (floats/doubles): compare the raw words at the original's address
            for i, cv in enumerate(getattr(compiled_reloc_syms, "consts", [])):
                ta = taddrs[i] if i < len(taddrs) else None
                if not cv or cv[0] is None or ta is None:
                    continue
                mine_b, is_pool = cv
                ms = compiled_reloc_syms.strings[i] if i < len(compiled_reloc_syms.strings) else None
                if not is_pool and ms and all(32 <= c < 127 or c in (9, 10, 13) for c in ms):
                    continue  # a string, handled above
                at = mod.text_off + ta
                tb = mod.base[at:at + len(mine_b)]
                text = lambda b: b and all(32 <= c < 127 or c in (9, 10, 13, 0) for c in b)  # noqa: E731
                # plain .rodata (-fno-merge-constants): compare when neither side looks like text; a jump table
                # (words pointing into .text) is not a literal either: skip words that look like code addresses
                looks_addr = lambda b: len(b) == 4 and struct.unpack("<I", b)[0] < 0x200000  # noqa: E731
                if tb != mine_b and (is_pool or (not text(mine_b) and not text(tb)
                                                  and not looks_addr(mine_b) and not looks_addr(tb))):
                    bad_str.append((want[i], tb, mine_b))
            for w, ts, ms in dict.fromkeys(bad_str):
                print(f"  literal for {w} differs: target {ts!r}, mine {ms!r}")
            # jump tables: compare the case labels (entry offsets inside the function), not the raw words
            fvaddr = mod.funcs[name][0] - mod.text_off
            for i, jt in enumerate(getattr(compiled_reloc_syms, "jtabs", [])):
                ta = taddrs[i] if i < len(taddrs) else None
                if not jt or ta is None:
                    continue
                at = mod.text_off + ta
                tw = [struct.unpack_from("<I", mod.base, at + 4 * k)[0] - fvaddr for k in range(len(jt))]
                if tw != jt:
                    k = next(k for k in range(len(jt)) if tw[k] != jt[k])
                    print(f"  jump table {want[i]} differs: entry {k} -> +0x{tw[k] & 0xFFFFFFFF:X} in the target, "
                          f"+0x{jt[k]:X} in mine")
                    bad_str.append((want[i], None, None))
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
            # a literal whose original label is still INCLUDE_RODATA in this version would be emitted twice
            src_all = "".join(f.read_text() for f in Path(mod.file_of(name)).parent.glob("*.c"))
            dup = [w for i, (w, ms) in enumerate(zip(want, compiled_reloc_syms.strings))
                   if ms is not None and re.search(rf"INCLUDE_RODATA\([^)]*\b{w}\)", src_all)]
            for w in dict.fromkeys(dup):
                print(f"  WARNING: your C emits the literal for {w}, which the source still has as INCLUDE_RODATA "
                      f"(it would be in .rodata twice): use `extern char {w}[];` or drop that entry for this version")
            if bad_str:
                print("RESULT: words match, LITERALS DIFFER (not a match)")
            elif bad_call:
                print("RESULT: words match, CALL TARGETS DIFFER (not a match)")
            else:
                print("RESULT: MATCH")
    elif best is not None:
        sm = difflib.SequenceMatcher(None, target, best, autojunk=False)
        print(f"RESULT: {max(len(target), len(best)) - sum(b.size for b in sm.get_matching_blocks())} off (own setting)")
    # --variants / --permute score one option set: the first --opts set if given, else the file's own
    sopt = own.split(" ", 1)[1]
    if a.opts:
        sopt = [o.strip() for o in a.opts.split(";") if o.strip()][0]
    if a.extra:
        sopt = f"{sopt} {a.extra}"
    if a.variants:
        bestsrc = variants(text, body, target, comp, sopt, a.j)
        if a.write and bestsrc is not None:
            Path(a.cfile).write_text(bestsrc)
            print(f"wrote the best combination to {a.cfile}")
    global CASES
    CASES = a.cases
    if a.permute:
        permute(text, body, target, comp, sopt, a.j)
    if a.perm and mod.funcs[name][2] is None:
        print(f"--perm: {name} has no asm in {a.ver} (already C), no permuter dir written")
    elif a.perm:
        import perm_near
        ptext = text
        if a.variants and re.search(r"//V\{", body):
            # the permuter needs one compilable source: the best combination, else the first alternatives
            best_v = bestsrc is not None
            ptext = text[:len(text) - len(body)] + (bestsrc if best_v else first_variant(body))
            print(f"--perm: //V blocks reduced to {'the best combination' if best_v else 'their first alternatives'}")
        d = perm_near.write_perm_dir(mod, name, ptext, comp, own.split(" ", 1)[1])
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
