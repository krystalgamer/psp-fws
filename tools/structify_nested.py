#!/usr/bin/env python3
"""Struct types behind pointer fields (structify phase D).

Rewrites M2C_FIELD(X->unkN, T *, off) / M2C_FIELD(D_x.unkN, T *, off), where
X's struct type is known, as X->unkN->unkOFF: field N (void * / M2C_UNK *)
becomes a pointer to struct Unk_<S>_<N> (or the struct it already points to
gains the field). Repeats until nothing changes, so chains resolve level by
level. Fields used with pointer arithmetic anywhere in the module are skipped.

Usage: called from tools/structify.py --nested
"""
import collections
import json
import re

import structify as S
from structify_locals import fsize, parse_struct, render

ACC = re.compile(r"M2C_FIELD\(((\w+)((?:(?:->|\.)unk[0-9A-F]+)+)), ((?:[^,()]|\((?:[^()]|\([^()]*\))*\))+?), (0x[0-9A-Fa-f]+|\d+)\)")
ARITH = re.compile(r"(?<![\w>.])(\w+)((?:(?:->|\.)unk[0-9A-F]+)+)\)?\s*(?:[-+]=?|\[|\+\+|--)(?!>)|[-+]\s*\(?(\w+)((?:(?:->|\.)unk[0-9A-F]+)+)")
OPAQUE = ("void *", "M2C_UNK *")


def var_types(func_sig, body, store):
    types = {}
    for prm in S.split_args(func_sig):
        m = re.fullmatch(r"struct (\w+) \*(\w+)", prm.strip())
        if m:
            types[m[2]] = (m[1], "->")
    for m in re.finditer(r"^\s+struct (\w+) \*(\w+);$", body, re.M):
        types[m[2]] = (m[1], "->")
    return types


def structify_nested(mod, only=None, skip=()):
    src = S.ROOT / "src" / mod
    store = json.loads((src / f"{mod}_decls.json").read_text())
    stypes = store.setdefault("types", {})
    globals_ = {}
    for v in store["vars"].values():
        m = re.fullmatch(r"extern (?:volatile )?struct (\w+) (\w+);", v)
        if m:
            globals_[m[2]] = (m[1], ".")
    files = sorted(src.glob("*.c"))
    texts = {f: f.read_text() for f in files}
    code = "\n".join(texts.values())
    fields = {name: parse_struct(defn) for name, defn in stypes.items()}
    total_lines, changed = 0, set()
    for _ in range(6):
        # targets: (struct, field off) -> struct the field points to
        acc = collections.defaultdict(collections.Counter)
        plans = []
        arith = set()  # (struct, off) fields used in pointer arithmetic or indexing
        for text in texts.values():
            for fm in S.FUNC.finditer(text):
                vt = dict(globals_)
                vt.update(var_types(fm[3], fm[4], store))
                for xm in ARITH.finditer(fm[4]):
                    base, chain = (xm[1], xm[2]) if xm[1] else (xm[3], xm[4])
                    if base not in vt:
                        continue
                    sname = vt[base][0]
                    steps = re.findall(r"(?:->|\.)unk([0-9A-F]+)", chain)
                    for i, st in enumerate(steps):
                        if i == len(steps) - 1:
                            arith.add((sname, int(st, 16)))
                            break
                        pm = re.fullmatch(r"struct (\w+) \*", fields.get(sname, {}).get(int(st, 16), ""))
                        if not pm:
                            break
                        sname = pm[1]
        for f, text in texts.items():
            for fm in S.FUNC.finditer(text):
                vt = dict(globals_)
                vt.update(var_types(fm[3], fm[4], store))
                for am in ACC.finditer(fm[4]):
                    base, chain = am[2], am[3]
                    if base not in vt:
                        continue
                    sname, _ = vt[base]
                    steps = re.findall(r"(?:->|\.)unk([0-9A-F]+)", chain)
                    ok = True
                    for i, st in enumerate(steps):
                        off = int(st, 16)
                        ft = fields.get(sname, {}).get(off)
                        if ft is None:
                            ok = False
                            break
                        if i == len(steps) - 1:
                            break
                        pm = re.fullmatch(r"struct (\w+) \*", ft)
                        if not pm:
                            ok = False
                            break
                        sname = pm[1]
                    if not ok:
                        continue
                    last = int(steps[-1], 16)
                    ft = fields[sname][last]
                    if ft in OPAQUE:
                        target = f"Unk_{sname}_{last:X}"
                    else:
                        pm = re.fullmatch(r"struct (\w+) \*", ft)
                        if not pm:
                            continue
                        target = pm[1]
                    if (sname, last) in arith:
                        continue
                    if (only is not None and target not in only) or target in skip:
                        continue
                    t = S.field_type(False, am[4])
                    if not t:
                        continue
                    acc[target][(int(am[5], 0), t)] += 1
                    plans.append((sname, last, target))
        if not plans:
            break
        new_fields = {}
        for target, counts in acc.items():
            base = dict(fields.get(target, {}))
            by_off = collections.defaultdict(list)
            for (off, t), c in counts.items():
                by_off[off].append((c, t))
            for off in sorted(by_off):
                if off in base:
                    continue
                c, t = max(by_off[off])
                sz = S.size_of(t)
                if sz is None or off % min(sz, 4):
                    continue
                lo = max((o for o in base if o < off), default=None)
                hi = min((o for o in base if o > off), default=None)
                if lo is not None and lo + fsize(base[lo]) > off:
                    continue
                if hi is not None and off + sz > hi:
                    continue
                base[off] = t
            new_fields[target] = base
        for sname, last, target in plans:
            if target in new_fields and fields[sname].get(last) in OPAQUE:
                fields[sname][last] = f"struct {target} *"
                changed.add(sname)
        for target, fl in new_fields.items():
            fields[target] = fl
            changed.add(target)
        # rewrite accesses whose field now exists in the target struct
        lines = 0
        for f, text in texts.items():
            def fix_func(fm):
                nonlocal lines
                vt = dict(globals_)
                vt.update(var_types(fm[3], fm[4], store))

                def repl(am):
                    base, chain = am[2], am[3]
                    if base not in vt:
                        return am[0]
                    sname = vt[base][0]
                    for st in re.findall(r"(?:->|\.)unk([0-9A-F]+)", chain):
                        ft = fields.get(sname, {}).get(int(st, 16), "")
                        pm = re.fullmatch(r"struct (\w+) \*", ft)
                        if not pm:
                            return am[0]
                        sname = pm[1]
                    off, t = int(am[5], 0), S.field_type(False, am[4])
                    if fields.get(sname, {}).get(off) == t:
                        return f"{am[1]}->unk{off:X}"
                    return am[0]
                body = ACC.sub(repl, fm[4])
                lines += body != fm[4]
                return f"{fm[1]}{fm[2]}({fm[3]}) {{\n{body}}}\n"
            texts[f] = S.FUNC.sub(fix_func, text)
        if not lines:
            break
        total_lines += lines
        code = "\n".join(texts.values())
    if not total_lines:
        return 0, 0
    for name in changed:
        stypes[name] = render(name, fields[name])
    for f, text in texts.items():
        if f.read_text() != text:
            f.write_text(text)
    S.write_decls(mod, store)
    return len(changed), total_lines
