#!/usr/bin/env python3
"""Carry C functions from one module to another (copies of the same code, e.g. reboot -> rebooti).

    tools/xport.py SRC_MOD SRC_VER DST_MOD DST_VER [FUNC[=DSTNAME] ...] [--apply] [--sub OLD=NEW ...] [--list]

Pairs SRC's C functions with DST's asm functions by their masked bytes (calls,
%hi/%lo and load/store offsets masked; tmp/build/<ver>/<mod>.elf of both must be
current). A body with several masked twins in DST takes the one nearest the
position predicted from the closest uniquely paired function before it. Without
FUNC every pair is tried. Each SRC body (FW_VERSION blocks resolved for SRC_VER)
is scored against DST with hand_try, with SRC's prototypes, externs and the
types DST lacks as extra decls; hand_try's reports of DST's names (relocation
symbols, call targets) are substituted (a few rounds), like tools/port.py.
--list: only print the pairs. --apply: insert every MATCH with one tools/hand.py
call (the decls they need go to DST's decls). Work files: tmp/xport/DST_MOD/DST_VER/.
"""
import argparse
import json
import re
import subprocess
import sys
from pathlib import Path

from elftools.elf.elffile import ELFFile
from elftools.elf.sections import SymbolTableSection

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import fwmodel as FM  # noqa: E402
from port import c_body, fw, hand_try  # noqa: E402
from srcdir import sharing_versions, src_dir  # noqa: E402

AUTO = re.compile(r"(func|D|jtbl|sub)_[0-9A-F]{8}")


def elf_funcs(ver, mod):
    """name -> (address, bytes) of the functions in the module's build."""
    with open(ROOT / "tmp/build" / ver / f"{mod}.elf", "rb") as f:
        e = ELFFile(f)
        out, secs = {}, {}
        for s in e.iter_sections():
            if not isinstance(s, SymbolTableSection):
                continue
            for y in s.iter_symbols():
                if y["st_info"]["type"] != "STT_FUNC" or y["st_size"] <= 0 or not isinstance(y["st_shndx"], int):
                    continue
                i = y["st_shndx"]
                if i not in secs:
                    sec = e.get_section(i)
                    secs[i] = (sec.data(), sec["sh_addr"])
                data, base = secs[i]
                a = y["st_value"] - base
                out[y.name] = (y["st_value"], data[a:a + y["st_size"]])
    return out


LIT = re.compile(r'"(?:[^"\\\n]|\\.)*"|\'(?:[^\'\\\n]|\\.)*\'|/\*.*?\*/|//[^\n]*', re.S)


def code_sub(pat, repl, text):
    """re.sub outside string/char literals and comments (a string may hold a function's real name)."""
    out, pos = [], 0
    for m in LIT.finditer(text):
        out.append(re.sub(pat, repl, text[pos:m.start()]))
        out.append(m[0])
        pos = m.end()
    out.append(re.sub(pat, repl, text[pos:]))
    return "".join(out)


def elf_syms(ver, mod):
    """function address -> name"""
    with open(ROOT / "tmp/build" / ver / f"{mod}.elf", "rb") as f:
        return {y["st_value"]: y.name for s in ELFFile(f).iter_sections() if isinstance(s, SymbolTableSection)
                for y in s.iter_symbols() if y.name and y["st_info"]["type"] == "STT_FUNC"}


def call_map(sb, db, ssyms, dsyms):
    """SRC callee name -> DST callee name, from the jal pairs of two twin functions."""
    out = {}
    for i in range(0, min(len(sb), len(db)) - 3, 4):
        ws, wd = int.from_bytes(sb[i:i + 4], "little"), int.from_bytes(db[i:i + 4], "little")
        if ws >> 26 == 3 and wd >> 26 == 3:
            s, d = ssyms.get((ws & 0x3FFFFFF) << 2), dsyms.get((wd & 0x3FFFFFF) << 2)
            if s and d:
                out[s] = d
    return out


def masked(b):
    r = []
    for i in range(0, len(b) - 3, 4):
        w = int.from_bytes(b[i:i + 4], "little")
        op = w >> 26
        if op in (2, 3):
            w &= 0xFC000000
        elif op in (0x09, 0x0D, 0x0F) or 0x20 <= op <= 0x3F:
            w &= 0xFFFF0000
        r.append(w)
    return tuple(r)


def c_names(mod, ver):
    sd = src_dir(ver, mod)
    fv = sorted({fw(v) for v in sharing_versions(ver, mod)})
    return {e.name for f in sd.glob("*.c") for e in FM.parse(f.read_text(), fv)
            if e.kind == "cfunc" and fw(ver) in e.vers}


def is_asm(mod, ver, name):
    return any((ROOT / "tmp/asm" / ver / mod / "nonmatchings").glob(f"*/{name}.s"))


def pair(a):
    src, dst = elf_funcs(a.src_ver, a.src_mod), elf_funcs(a.dst_ver, a.dst_mod)
    have_c = c_names(a.src_mod, a.src_ver)
    dst_c = c_names(a.dst_mod, a.dst_ver)
    sidx, didx = {}, {}
    for n, (ad, b) in src.items():
        if len(b) >= 8:
            sidx.setdefault(masked(b), []).append(n)
    for n, (ad, b) in dst.items():
        if len(b) >= 8:
            didx.setdefault(masked(b), []).append(n)
    anchors = sorted((src[ns[0]][0], dst[didx[k][0]][0]) for k, ns in sidx.items()
                     if len(ns) == 1 and len(didx.get(k, [])) == 1)
    # greedy assignment: identical bytes first, then nearest to the predicted address
    opts = []
    for n in have_c:
        if n not in src or len(src[n][1]) < 8:
            continue
        cands = didx.get(masked(src[n][1]), [])
        sa = src[n][0]
        before = [d - s for s, d in anchors if s <= sa]
        guess = sa + (before[-1] if before else 0)
        for c in cands:
            opts.append((src[n][1] != dst[c][1], abs(dst[c][0] - guess), n, c, len(cands)))
    pairs, taken = {}, set()
    for notexact, _, n, c, k in sorted(opts):
        if n in pairs or c in taken:
            continue
        taken.add(c)
        if is_asm(a.dst_mod, a.dst_ver, c) or (a.replace and c in dst_c):
            pairs[n] = (c, k, not notexact)
    pairs = dict(sorted(pairs.items(), key=lambda x: src[x[0]][0]))
    return pairs


def decl_names(text):
    """Type/tag names a type definition text introduces."""
    names = set(re.findall(r"\b(?:struct|union|enum)\s+(\w+)\s*\{", text))
    names |= set(re.findall(r"}\s*(\w+)\s*;", text))
    names |= set(re.findall(r"typedef\b[^;{}]*?\b(\w+)\s*(?:\[[^\]]*\])?\s*;", text))
    names |= set(re.findall(r"typedef\b[^;{}]*\(\s*\*\s*(\w+)\s*\)", text))
    return names


def names(a, pairs):
    dc = c_names(a.dst_mod, a.dst_ver)
    tok = re.compile(r"[A-Za-z_]\w*|0[xX][0-9a-fA-F]+|\d+|\S")
    ren, bad = {}, set()
    for n, (d, _, _) in pairs.items():
        if d not in dc:
            continue
        sb, db = c_body(a.src_mod, a.src_ver, n), c_body(a.dst_mod, a.dst_ver, d)
        if sb is None or db is None:
            continue
        st, dt = tok.findall(sb), tok.findall(db)
        if len(st) != len(dt):
            continue
        for s, t in zip(st, dt):
            if s != t and AUTO.fullmatch(t) and not AUTO.fullmatch(s) and re.fullmatch(r"[A-Za-z_]\w*", s):
                if ren.get(t, s) != s:
                    bad.add(t)
                ren[t] = s
    used = set(elf_syms(a.dst_ver, a.dst_mod).values()) | set(
        json.loads((src_dir(a.dst_ver, a.dst_mod) / f"{a.dst_mod}_decls.json").read_text())["types"])
    news = {}
    for t, s in ren.items():
        news.setdefault(s, []).append(t)
    specs = [f"{a.dst_ver}:{t}={s}" for t, s in sorted(ren.items())
             if t not in bad and s not in used and len(news[s]) == 1]
    for t, s in sorted(ren.items()):
        if f"{a.dst_ver}:{t}={s}" not in specs:
            print(f"skipped {t}={s}" + (" (conflict)" if t in bad or len(news[s]) > 1 else " (name in use)"))
    if not specs:
        print("nothing to rename")
        return
    print(" ".join(specs))
    # rename_sym only renames names the asm uses: C-only names are done here (symbol_addrs line,
    # sources, decls; func_starts pins would keep the auto name), then the shared regress decides
    import structify
    sd = src_dir(a.dst_ver, a.dst_mod)
    cfg = ROOT / "config" / a.dst_ver
    files = [cfg / f"symbol_addrs.{a.dst_mod}.txt", cfg / f"func_starts.{a.dst_mod}.txt",
             *sd.glob("*.c"), *sd.glob(f"{a.dst_mod}_decls.*")]
    saved = {f: f.read_text() for f in files if f.exists()}
    pairs_ = [s.split(":", 1)[1].split("=") for s in specs]
    olds = dict(pairs_)
    pat = re.compile(r"\b(" + "|".join(olds) + r")\b")
    lines = []
    for o, n in pairs_:
        ad = int(o.split("_")[1], 16)
        lines.append(f"{n} = 0x{ad:08X};" + (" // type:func" if o.startswith("func_") else ""))
    sa = cfg / f"symbol_addrs.{a.dst_mod}.txt"
    sa.write_text(pat.sub(lambda m: olds[m[1]], saved[sa]).rstrip("\n") + "\n// names from " +
                  f"{a.src_mod} (tools/xport.py --names)\n" + "\n".join(
                      l for l in lines if not re.search(rf"^{l.split()[0]} =", saved[sa], re.M)) + "\n")
    fs = cfg / f"func_starts.{a.dst_mod}.txt"
    if fs in saved:
        fs.write_text("".join(l for l in saved[fs].splitlines(keepends=True)
                              if not (m := re.match(r"\s*(\w+)\s*=", l)) or m[1] not in olds))
    for f in saved:
        if f.parent == sd and f.suffix in (".c", ".json"):
            f.write_text(pat.sub(lambda m: olds[m[1]], saved[f]))
    structify.SRC[a.dst_mod] = sd
    structify.write_decls(a.dst_mod, json.loads((sd / f"{a.dst_mod}_decls.json").read_text()))
    r = subprocess.run(["tools/regress.sh", "--shared", f"{a.dst_ver}:{a.dst_mod}"], cwd=ROOT,
                       capture_output=True, text=True)
    print(r.stdout.strip())
    if any(": OK" not in l for l in r.stdout.splitlines()):
        for f, s in saved.items():
            f.write_text(s)
        subprocess.run(["tools/regress.sh", "--shared", f"{a.dst_ver}:{a.dst_mod}"], cwd=ROOT, capture_output=True)
        print("renames restored")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("src_mod")
    ap.add_argument("src_ver")
    ap.add_argument("dst_mod")
    ap.add_argument("dst_ver")
    ap.add_argument("funcs", nargs="*")
    ap.add_argument("--sub", action="append", default=[], help="OLD=NEW text substitution applied first")
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--list", action="store_true")
    ap.add_argument("--names", action="store_true",
                    help="no scoring: give DST's auto-named functions/globals the SRC names, from pairs that are C on "
                         "both sides (token-aligned bodies), with tools/rename_sym.py")
    ap.add_argument("--replace", action="store_true",
                    help="also pair with DST functions that are C already and replace their C (e.g. m2c drafts)")
    a = ap.parse_args()
    pairs = pair(a)
    if a.funcs:
        sel = {}
        for spec in a.funcs:
            n, _, d = spec.partition("=")
            if d:
                sel[n] = (d, 1, False)
            elif n in pairs:
                sel[n] = pairs[n]
            else:
                print(f"{n}: no asm twin in {a.dst_mod} {a.dst_ver}")
        pairs = sel
    if a.names:
        return names(a, pairs)
    if a.list:
        for n, (d, k, ex) in pairs.items():
            print(f"{n} -> {d}" + (" exact" if ex else " masked") + (f" ({k} candidates)" if k > 1 else ""))
        return
    sj = src_dir(a.src_ver, a.src_mod) / f"{a.src_mod}_decls.json"
    sstore = json.loads(sj.read_text()) if sj.exists() else {}
    for k in ("types", "vars", "funcs"):
        sstore.setdefault(k, {})
    # file-scope externs between SRC's functions (e.g. `extern char D_000169E8[];` after its INCLUDE_RODATA)
    for f in src_dir(a.src_ver, a.src_mod).glob("*.c"):
        for m in re.finditer(r"^extern [^;(]*?\b(\w+)\s*(?:\[[^\]]*\])*;$", f.read_text(), re.M):
            sstore["vars"].setdefault(m[1], m[0])
    dstore = json.loads((src_dir(a.dst_ver, a.dst_mod) / f"{a.dst_mod}_decls.json").read_text())
    dtypes = set()
    for t in dstore.get("types", {}).values():
        dtypes |= decl_names(t)
    dtypes |= set(re.findall(r"\b(\w+)\s*;", (ROOT / "include/common.h").read_text()))
    # SRC types DST lacks, in SRC's order (dependencies first)
    new_types = [(k, t) for k, t in sorted(sstore.get("types", {}).items()) if not (decl_names(t) & dtypes)]
    work = ROOT / "tmp/xport" / a.dst_mod / a.dst_ver
    ssyms, dsyms = elf_syms(a.src_ver, a.src_mod), elf_syms(a.dst_ver, a.dst_mod)
    sfun, dfun = elf_funcs(a.src_ver, a.src_mod), elf_funcs(a.dst_ver, a.dst_mod)
    work.mkdir(parents=True, exist_ok=True)
    matched, used_types, new_decls = [], {}, {}
    dc = c_names(a.dst_mod, a.dst_ver)
    repl = {d for d, _, _ in pairs.values() if d in dc}
    for name, (dname, ncand, _) in pairs.items():
        body = c_body(a.src_mod, a.src_ver, name)
        if body is None:
            continue
        # SRC's declarations of the identifiers the body uses (renamed as the body is)
        idents = set(re.findall(r"\b[A-Za-z_]\w*\b", body)) - {name}
        body = re.sub(rf"\b{name}\b(?=\s*\()", dname, body, count=1)
        for s in a.sub:
            o, n = s.split("=", 1)
            body = code_sub(rf"\b{re.escape(o)}\b", n, body)
        cf, df = work / f"{dname}.c", work / f"{dname}.h"
        # callees: DST's names from the twin jal pairs; other SRC auto names (func_00000000 may be another
        # function in DST) get placeholders, so that hand_try reports DST's name for each
        ren = {}
        calls = call_map(sfun[name][1], dfun[dname][1], ssyms, dsyms) if name in sfun and dname in dfun else {}
        for n in sorted(idents):
            if n in calls:
                ren[n] = calls[n]
            elif AUTO.fullmatch(n) and (n in sstore["funcs"] or n in sstore["vars"]):
                ren[n] = f"xp_{n}"
        if ren:
            pat = re.compile(r"\b(" + "|".join(map(re.escape, ren)) + r")\b")
            body = code_sub(pat, lambda m: ren[m[1]], body)
        result = "?"
        for _ in range(5):
            decl, dmap = [], {}
            for n in sorted(idents):
                kind = "funcs" if n in sstore["funcs"] else "vars" if n in sstore["vars"] else None
                if kind:
                    t = ren.get(n, n)
                    line = re.sub(rf"\b{n}\b", t, sstore[kind][n])
                    if kind == "funcs" and t in dc and t not in repl:  # DST's definition decides the prototype
                        continue
                    decl.append(line)
                    dmap[t] = (kind, line)
            types = []
            text_all = body + "\n".join(decl)
            # types used by the body/decls (and by the types they use)
            for _ in range(3):
                types = [(k, t) for k, t in new_types if decl_names(t) & set(re.findall(r"\w+", text_all))]
                text_all = body + "\n".join(decl) + "\n".join(t for _, t in types)
            cf.write_text(body)
            df.write_text("\n".join(t for _, t in types) + "\n" + "\n".join(decl) + "\n")
            out = hand_try(a.dst_mod, a.dst_ver, cf, df)
            res = [l for l in out.splitlines() if l.startswith("RESULT")]
            result = res[-1] if res else ((out.strip().splitlines() or ["error"])[-1])[:200]
            prs = re.findall(r"reloc \d+: target (\w+), mine (\w+)", out) + \
                re.findall(r"call target differs: target (\w+), mine (\w+)", out)
            # an SRC global at the same place as a DST auto label: DST's label at offset 0
            prs += [(t, m) for t, m, o in re.findall(
                r"target label (\w+) assumed inside (\w+);[^\[\n]*(?:\[\w+\+0x([0-9A-F]+)\])?", out)
                if int(o or "0", 16) == 0 and t != m and AUTO.fullmatch(t)]
            prs = [(t, m) for t, m in dict.fromkeys(prs) if t != m]
            for tb, toff, mine in dict.fromkeys(re.findall(r"reloc \d+: target (\w+)\+0x([0-9A-F]+), mine (\w+)", out)):
                print(f"  {name}: {mine} is {tb}+0x{toff} in {a.dst_ver} (a field of a sized symbol): "
                      f"write it as a member of {tb}, not substituted")
            for t, m in prs:
                if re.fullmatch(r"D_[0-9A-F]{8}", t) and (m in sstore["vars"] or m.startswith("xp_")):
                    print(f"  {name}: adopting the address label {t} for {m}; if it is a struct member, give the "
                          f"containing global a `// size:` in config/{a.dst_ver}/symbol_addrs.{a.dst_mod}.txt and "
                          f"re-split (references become sym+offset)")
            if "RESULT: MATCH" in result and not prs:
                break
            if not prs:
                break
            for tgt, mine in prs:
                body = code_sub(rf"\b{mine}\b", tgt, body)
                orig = next((o for o, r in ren.items() if r == mine), mine)
                ren[orig] = tgt
        if "RESULT: MATCH" in result and "xp_" in body:
            result = "unresolved names: " + " ".join(sorted(set(re.findall(r"xp_\w+", body))))
        print(f"{name} -> {a.dst_mod} {a.dst_ver}:{dname}: {result}" + (f" [{ncand} candidates]" if ncand > 1 else ""))
        if "RESULT: MATCH" in result:
            matched.append((cf, df))
            for k2, (kind, line) in dmap.items():
                new_decls[k2] = (kind, line)
            for k, t in types:
                used_types[k] = t
    if a.apply and matched:
        # the decls go straight into DST's store (hand.py --decls drops function-pointer externs)
        import structify
        sd = src_dir(a.dst_ver, a.dst_mod)
        store_p = sd / f"{a.dst_mod}_decls.json"
        saved = {p: p.read_text() for p in sd.glob(f"{a.dst_mod}_decls.*")}
        store = json.loads(store_p.read_text())
        for k, t in used_types.items():
            store.setdefault("types", {})[f"x_{a.src_mod}_{k}"] = t
        for n, (kind, line) in new_decls.items():
            if "#if" in store[kind].get(n, ""):  # per-version declaration: keep it for the other versions
                print(f"{n}: per-version declaration in the decls kept")
                continue
            other = "vars" if kind == "funcs" else "funcs"
            store[other].pop(n, None)
            store[kind][n] = line
        # C that replaces DST's C (--replace): in place, DST's version only
        saved.update({p: p.read_text() for p in sd.glob("*.c")})
        asm_files = []
        fv = sorted({fw(v) for v in sharing_versions(a.dst_ver, a.dst_mod)})
        for cf, _ in matched:
            dname = cf.stem
            if dname not in repl:
                asm_files.append(cf)
                continue
            body = cf.read_text().strip("\n") + "\n"
            for f in sd.glob("*.c"):
                ents = FM.parse(f.read_text(), fv)
                hit = [e for e in ents if e.kind == "cfunc" and e.name == dname and fw(a.dst_ver) in e.vers]
                if not hit:
                    continue
                if len(hit[0].vers) > 1:
                    print(f"{dname}: C shared with other versions, not replaced")
                    break
                hit[0].text = body
                f.write_text(FM.emit(ents, fv))
                sig = re.match(r"^(?!static)([^\n;#{]*?\b" + re.escape(dname) + r"\([^;{}]*\))\s*\{", body, re.M)
                if sig and "#if" not in store["funcs"].get(dname, ""):
                    store["funcs"][dname] = " ".join(sig[1].split()) + ";"
                print(f"{dname}: C replaced")
                break
        structify.SRC[a.dst_mod] = sd
        structify.write_decls(a.dst_mod, store)
        if not asm_files:
            r = subprocess.run(["tools/regress.sh", "--shared", f"{a.dst_ver}:{a.dst_mod}"], cwd=ROOT,
                               capture_output=True, text=True)
            print(r.stdout.strip())
            if any(": OK" not in l for l in r.stdout.splitlines()):
                for p, s in saved.items():
                    p.write_text(s)
                print("restored")
            return
        matched = [(cf, None) for cf in asm_files]
        r = subprocess.run([str(ROOT / ".venv/bin/python"), str(ROOT / "tools/hand.py"), a.dst_ver, a.dst_mod,
                            *[str(cf) for cf, _ in matched]], cwd=ROOT, capture_output=True, text=True)
        print(r.stdout.strip() or r.stderr.strip()[-2000:])
        if not re.search(r": C for ", r.stdout):
            for p, s in saved.items():
                p.write_text(s)


if __name__ == "__main__":
    main()
