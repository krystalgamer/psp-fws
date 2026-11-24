#!/usr/bin/env python3
"""Vtables (structify phase E).

M2C_FIELD(*X, R (**)(P), off)(X, ...) is a virtual call: X points to an object
whose first word points to a table of function pointers. X (a `void **` /
`M2C_UNK **` global, parameter or local) becomes `struct Unk_vt_<X> **` and the
access `(*X)->unkOFF`. Other fields read through *X get the same treatment.

Usage: called from tools/structify.py --vtables
"""
import collections
import json
import re

import structify as S
from structify_locals import fsize, render

PP = r"(?:void|M2C_UNK) \*\*"


def macro_calls(text):
    """(start, end, args) of every M2C_FIELD(...) in text (balanced parens)."""
    out = []
    for m in re.finditer(r"M2C_FIELD\(", text):
        depth, j = 1, m.end()
        while j < len(text) and depth:
            depth += text[j] == "("
            depth -= text[j] == ")"
            j += 1
        out.append((m.start(), j, S.split_args(text[m.end():j - 1])))
    return out


def structify_vtables(mod, only=None, skip=()):
    src = S.sdir(mod)
    store = json.loads((src / f"{mod}_decls.json").read_text())
    types = store.setdefault("types", {})
    files = sorted(src.glob("*.c"))
    texts = {f: f.read_text() for f in files}
    gvars = {}
    for k, v in store["vars"].items():
        if re.fullmatch(rf"extern {PP}{k};", v):
            gvars[k] = v
    acc = collections.defaultdict(collections.Counter)
    node_of = {}  # (func, var) -> node name
    for f, text in texts.items():
        for fm in S.FUNC.finditer(text):
            func, sig, body = fm[2], fm[3], fm[4]
            local_pp = {m[1] for m in re.finditer(rf"^\s+{PP}(\w+);$", body, re.M)}
            param_pp = {m[1] for p in S.split_args(sig) if (m := re.fullmatch(rf"{PP}(arg\d+)", p.strip()))}
            for s, e, args in macro_calls(body):
                if len(args) != 3:
                    continue
                xm = re.fullmatch(r"\*(\w+)", args[0])
                if not xm:
                    continue
                x = xm[1]
                if x in param_pp or x in local_pp:
                    node = f"Unk_vt_{func}_{x}"
                elif x in gvars:
                    node = f"Unk_vt_{x}"
                else:
                    continue
                t = S.field_type(False, args[1])
                if not t or not re.fullmatch(r"0x[0-9A-Fa-f]+|\d+", args[2]):
                    continue
                node_of[(func, x)] = node
                acc[node][(int(args[2], 0), t)] += 1
    chosen = {n for n in acc if (only is None or n in only) and n not in skip}
    fields_of = {}
    for node in chosen:
        by_off = collections.defaultdict(list)
        for (off, t), c in acc[node].items():
            by_off[off].append((c, t))
        fields = {}
        for off in sorted(by_off):
            c, t = max(by_off[off])
            sz = fsize(t)
            if off % min(sz, 4):
                continue
            lo = max((o for o in fields if o < off), default=None)
            if lo is not None and lo + fsize(fields[lo]) > off:
                continue
            fields[off] = t
        if fields:
            fields_of[node] = fields
            types[node] = render(node, fields)
    if not fields_of:
        return 0, 0
    n_lines = 0
    for f, text in texts.items():
        def fix_func(fm):
            nonlocal n_lines
            func, sig, body = fm[2], fm[3], fm[4]
            new = body
            for s, e, args in reversed(macro_calls(body)):
                if len(args) != 3:
                    continue
                xm = re.fullmatch(r"\*(\w+)", args[0])
                if not xm:
                    continue
                node = node_of.get((func, xm[1]))
                t = S.field_type(False, args[1])
                if node in fields_of and re.fullmatch(r"0x[0-9A-Fa-f]+|\d+", args[2]) \
                        and fields_of[node].get(int(args[2], 0)) == t:
                    new = new[:s] + f"(*{xm[1]})->unk{int(args[2], 0):X}" + new[e:]
            params = S.split_args(sig)
            for i, p in enumerate(params):
                pm = re.fullmatch(rf"({PP})(arg\d+)", p.strip())
                if pm and node_of.get((func, pm[2])) in fields_of:
                    params[i] = f"struct {node_of[(func, pm[2])]} **{pm[2]}"
            for x in {x for (fn, x) in node_of if fn == func}:
                node = node_of[(func, x)]
                if node in fields_of:
                    new = re.sub(rf"^(\s+){PP}{x};$", rf"\1struct {node} **{x};", new, flags=re.M)
            sig2 = ", ".join(params) if params != S.split_args(sig) else sig
            n_lines += new != body or sig2 != sig
            return f"{fm[1]}{func}({sig2}) {{\n{new}}}\n"
        out = S.FUNC.sub(fix_func, text)
        if out != text:
            f.write_text(out)
    for (func, x), node in node_of.items():
        if node not in fields_of:
            continue
        if x in gvars and node == f"Unk_vt_{x}":
            store["vars"][x] = f"extern struct {node} **{x};"
        elif func in store["funcs"]:
            params = S.proto_params(store["funcs"][func])
            if params:
                for i, p in enumerate(params):
                    if re.fullmatch(rf"{PP}\s*{x}|{PP}", p.strip()) and x.startswith("arg") and i == int(x[3:]):
                        params[i] = f"struct {node} **{x}" if x in p else f"struct {node} **"
                store["funcs"][func] = re.sub(r"\(.*\);$", "(" + ", ".join(params) + ");", store["funcs"][func])
    S.write_decls(mod, store)
    return len(fields_of), n_lines
