#!/usr/bin/env python3
"""Extend existing structs (structify phase G).

M2C_FIELD(v, T, off) where v is already a `struct Unk_* *` (parameter, local
or pointer global) means the struct lacks a field at `off`. If `off` falls in
padding, the field is added and the access becomes `v->unkOFF`.

Usage: called from tools/structify.py --extend
"""
import collections
import json
import re

import structify as S
from structify_locals import fsize, parse_struct, render
from structify_vtbl import macro_calls

OFF = r"0x[0-9A-Fa-f]+|\d+"
SP = r"struct (\w+) \*"


def _vars(sig, body):
    out = {}
    for p in S.split_args(sig):
        if m := re.fullmatch(rf"{SP}(\w+)", p.strip()):
            out[m[2]] = m[1]
    for m in re.finditer(rf"^\s+{SP}(\w+);$", body, re.M):
        out[m[2]] = m[1]
    return out


def _sites(texts, store):
    """yield (file, func, start, end, var, struct, off, type) for every candidate access."""
    gptr = {k: m[1] for k, v in store["vars"].items() if (m := re.fullmatch(rf"extern {SP}(\w+);", v)) and m[2] == k}
    for f, text in texts.items():
        for fm in S.FUNC.finditer(text):
            vs = dict(gptr)
            vs.update(_vars(fm[3], fm[4]))
            base = fm.start(4)
            for s, e, args in macro_calls(fm[4]):
                if len(args) == 3 and args[0] in vs and re.fullmatch(OFF, args[2]):
                    t = S.field_type(False, args[1])
                    if t:
                        yield f, base + s, base + e, args[0], vs[args[0]], int(args[2], 0), t


def structify_extend(mod, only=None, skip=()):
    src = S.ROOT / "src" / mod
    store = json.loads((src / f"{mod}_decls.json").read_text())
    types = store.setdefault("types", {})
    texts = {f: f.read_text() for f in sorted(src.glob("*.c"))}
    sites = list(_sites(texts, store))
    acc = collections.defaultdict(collections.Counter)
    for *_, st, off, t in sites:
        acc[st][(off, t)] += 1
    added = {}
    for st, a in acc.items():
        if st not in types or (only is not None and st not in only) or st in skip:
            continue
        old = parse_struct(types[st])
        if render(st, old) != types[st]:
            continue
        fields = dict(old)
        by_off = collections.defaultdict(list)
        for (off, t), c in a.items():
            by_off[off].append((c, t))
        for off in sorted(by_off):
            c, t = max(by_off[off])
            if off in fields or off < 0 or off % min(fsize(t), 4):
                continue
            lo = max((o for o in fields if o < off), default=None)
            hi = min((o for o in fields if o > off), default=None)
            if lo is not None and lo + fsize(fields[lo]) > off:
                continue
            if hi is not None and off + fsize(t) > hi:
                continue
            fields[off] = t
        if fields != old:
            types[st] = render(st, fields)
            added[st] = fields
    if not added:
        return 0, 0
    edits = collections.defaultdict(list)
    for f, s, e, v, st, off, t in sites:
        if st in added and added[st].get(off) == t:
            edits[f].append((s, e, f"{v}->unk{off:X}"))
    n = 0
    for f, ed in edits.items():
        text = texts[f]
        last = None
        for s, e, rep in sorted(ed, reverse=True):
            if last is not None and e > last:
                continue  # nested inside an already rewritten access
            text = text[:s] + rep + text[e:]
            last = s
            n += 1
        f.write_text(text)
    S.write_decls(mod, store)
    return len(added), n
