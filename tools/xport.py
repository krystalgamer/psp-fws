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
    sidx, didx = {}, {}
    for n, (ad, b) in src.items():
        if len(b) >= 8:
            sidx.setdefault(masked(b), []).append(n)
    for n, (ad, b) in dst.items():
        if len(b) >= 8:
            didx.setdefault(masked(b), []).append(n)
    anchors = sorted((src[ns[0]][0], dst[didx[k][0]][0]) for k, ns in sidx.items()
                     if len(ns) == 1 and len(didx.get(k, [])) == 1)
    pairs, taken = {}, set()
    for n in sorted(have_c, key=lambda n: src.get(n, (0,))[0]):
        if n not in src or len(src[n][1]) < 8:
            continue
        cands = didx.get(masked(src[n][1]), [])
        if not cands:
            continue
        sa = src[n][0]
        before = [d - s for s, d in anchors if s <= sa]
        guess = sa + (before[-1] if before else 0)
        best = min(cands, key=lambda c: abs(dst[c][0] - guess))
        if best not in taken and is_asm(a.dst_mod, a.dst_ver, best):
            taken.add(best)
            exact = src[n][1] == dst[best][1]
            pairs[n] = (best, len(cands), exact)
    return pairs


def decl_names(text):
    """Type/tag names a type definition text introduces."""
    names = set(re.findall(r"\b(?:struct|union|enum)\s+(\w+)\s*\{", text))
    names |= set(re.findall(r"}\s*(\w+)\s*;", text))
    names |= set(re.findall(r"typedef\b[^;{}]*?\b(\w+)\s*(?:\[[^\]]*\])?\s*;", text))
    names |= set(re.findall(r"typedef\b[^;{}]*\(\s*\*\s*(\w+)\s*\)", text))
    return names


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
    if a.list:
        for n, (d, k, ex) in pairs.items():
            print(f"{n} -> {d}" + (" exact" if ex else " masked") + (f" ({k} candidates)" if k > 1 else ""))
        return
    sstore = json.loads((src_dir(a.src_ver, a.src_mod) / f"{a.src_mod}_decls.json").read_text())
    dstore = json.loads((src_dir(a.dst_ver, a.dst_mod) / f"{a.dst_mod}_decls.json").read_text())
    dtypes = set()
    for t in dstore.get("types", {}).values():
        dtypes |= decl_names(t)
    dtypes |= set(re.findall(r"\b(\w+)\s*;", (ROOT / "include/common.h").read_text()))
    # SRC types DST lacks, in SRC's order (dependencies first)
    new_types = [(k, t) for k, t in sorted(sstore.get("types", {}).items()) if not (decl_names(t) & dtypes)]
    work = ROOT / "tmp/xport" / a.dst_mod / a.dst_ver
    work.mkdir(parents=True, exist_ok=True)
    matched, used_types, new_decls = [], {}, {}
    dc = c_names(a.dst_mod, a.dst_ver)
    for name, (dname, ncand, _) in pairs.items():
        body = c_body(a.src_mod, a.src_ver, name)
        if body is None:
            continue
        # SRC's declarations of the identifiers the body uses (renamed as the body is)
        idents = set(re.findall(r"\b[A-Za-z_]\w*\b", body)) - {name}
        body = re.sub(rf"\b{name}\b(?=\s*\()", dname, body, count=1)
        for s in a.sub:
            o, n = s.split("=", 1)
            body = re.sub(rf"\b{re.escape(o)}\b", n, body)
        cf, df = work / f"{dname}.c", work / f"{dname}.h"
        ren = {}
        result = "?"
        for _ in range(5):
            decl, dmap = [], {}
            for n in sorted(idents):
                kind = "funcs" if n in sstore["funcs"] else "vars" if n in sstore["vars"] else None
                if kind:
                    t = ren.get(n, n)
                    line = re.sub(rf"\b{n}\b", t, sstore[kind][n])
                    if kind == "funcs" and t in dc:  # DST's definition decides the prototype
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
            if "RESULT: MATCH" in result and not prs:
                break
            if not prs:
                break
            for tgt, mine in prs:
                body = re.sub(rf"\b{mine}\b", tgt, body)
                orig = next((o for o, r in ren.items() if r == mine), mine)
                ren[orig] = tgt
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
            other = "vars" if kind == "funcs" else "funcs"
            store[other].pop(n, None)
            store[kind][n] = line
        structify.SRC[a.dst_mod] = sd
        structify.write_decls(a.dst_mod, store)
        r = subprocess.run([str(ROOT / ".venv/bin/python"), str(ROOT / "tools/hand.py"), a.dst_ver, a.dst_mod,
                            *[str(cf) for cf, _ in matched]], cwd=ROOT, capture_output=True, text=True)
        print(r.stdout.strip() or r.stderr.strip()[-2000:])
        if not re.search(r": C for ", r.stdout):
            for p, s in saved.items():
                p.write_text(s)


if __name__ == "__main__":
    main()
