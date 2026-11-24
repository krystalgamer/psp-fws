#!/usr/bin/env python3
"""Pointer globals (structify phase F).

`extern void *D_x;` (or M2C_UNK * / s32 / u32) read as M2C_FIELD(D_x, T, off)
becomes `extern struct Unk_D_x *D_x;` and the access `D_x->unkOFF`. Globals
used in arithmetic or indexing are left alone.

Usage: called from tools/structify.py --gptr
"""
import collections
import json
import re

import structify as S
from structify_locals import fsize, render
from structify_vtbl import macro_calls

DECL = r"extern (?:void \*|M2C_UNK \*|s32 |u32 )(\w+);"
OFF = r"0x[0-9A-Fa-f]+|\d+"


def structify_gptr(mod, only=None, skip=()):
    src = S.sdir(mod)
    store = json.loads((src / f"{mod}_decls.json").read_text())
    types = store.setdefault("types", {})
    texts = {f: f.read_text() for f in sorted(src.glob("*.c"))}
    gvars = {k for k, v in store["vars"].items() if (m := re.fullmatch(DECL, v)) and m[1] == k}
    acc = collections.defaultdict(collections.Counter)
    rest = []
    for text in texts.values():
        body = S.body_text(text)
        calls = macro_calls(body)
        for s, e, args in calls:
            if len(args) == 3 and args[0] in gvars and re.fullmatch(OFF, args[2]):
                t = S.field_type(False, args[1])
                if t:
                    acc[args[0]][(int(args[2], 0), t)] += 1
        # text outside the macro first-arguments that name a global
        cut, pos = [], 0
        for s, e, args in calls:
            if len(args) == 3 and args[0] in gvars and s >= pos:
                cut.append(body[pos:s])
                pos = e
        cut.append(body[pos:])
        rest.append("".join(cut))
    rest = "\n".join(rest)
    fields_of = {}
    for g, a in acc.items():
        if (only is not None and f"Unk_{g}" not in only) or f"Unk_{g}" in skip:
            continue
        if re.search(rf"(?<![\w.>]){g}\s*(?:[-+\[]|\+\+|--)|[-+]\s*{g}\b|&{g}\b|\({g}\)\s*[-+\[]", rest):
            continue
        by_off = collections.defaultdict(list)
        for (off, t), c in a.items():
            by_off[off].append((c, t))
        fields = {}
        for off in sorted(by_off):
            c, t = max(by_off[off])
            sz = fsize(t)
            if off < 0 or off % min(sz, 4):
                continue
            lo = max((o for o in fields if o < off), default=None)
            if lo is not None and lo + fsize(fields[lo]) > off:
                continue
            fields[off] = t
        if fields:
            fields_of[g] = fields
            types[f"Unk_{g}"] = render(f"Unk_{g}", fields)
            store["vars"][g] = f"extern struct Unk_{g} *{g};"
    if not fields_of:
        return 0, 0
    n_lines = 0
    for f, text in texts.items():
        new = text
        for s, e, args in reversed(macro_calls(text)):
            if len(args) == 3 and args[0] in fields_of and re.fullmatch(OFF, args[2]) \
                    and fields_of[args[0]].get(int(args[2], 0)) == S.field_type(False, args[1]):
                new = new[:s] + f"{args[0]}->unk{int(args[2], 0):X}" + new[e:]
                n_lines += 1
        if new != text:
            f.write_text(new)
    S.write_decls(mod, store)
    return len(fields_of), n_lines
