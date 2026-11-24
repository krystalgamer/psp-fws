#!/usr/bin/env python3
"""Struct types for local pointer variables and pointer fields (structify phase C).

Within each C function, `void *` / `M2C_UNK *` locals accessed through
M2C_FIELD get struct types. Types are inferred jointly across the module:
  - `L = argK` (struct parameter) or `L = M` (another local): same type
  - `L = X->unkN` / `L = M2C_FIELD(X, void **, N)` and the store form: field N
    of X's struct is a pointer to L's struct (linked structures)
New structs are named Unk_<function>_<local>; existing ones gain fields.
Locals used with pointer arithmetic are skipped; conflicting fields keep the
macro. Verified by tools/structify.py (bisection on struct names).

Usage: called from tools/structify.py --locals
"""
import collections
import json
import re
from pathlib import Path

import structify as S

LOCAL_DECL = re.compile(r"^(\s+)(void|M2C_UNK) \*(\w+);$", re.M)
PTR_FIELD = re.compile(r"M2C_FIELD\(([\w>-]+), (?:void|M2C_UNK) \*\*, (0x[0-9A-Fa-f]+|\d+)\)")


def parse_struct(text):
    """{offset: type} of a generated struct definition."""
    fields, pos = {}, 0
    for line in text.splitlines()[1:-1]:
        m = re.match(r"\s+(?:volatile )?(.+?) (\w+)(\[0x([0-9A-F]+)\])?;$", line)
        if not m:
            continue
        if m[2].startswith("pad"):
            pos += int(m[4], 16)
            continue
        fields[pos] = m[1]
        pos += S.size_of(m[1].replace("struct ", "").strip() if not m[1].endswith("*") else "x *") or 4
    return fields


def render(name, fields):
    body, pos = [], 0
    for off in sorted(fields):
        t = fields[off]
        if off > pos:
            body.append(f"    u8 pad{pos:X}[0x{off - pos:X}];")
        body.append(f"    {t}{'' if t.endswith('*') else ' '}unk{off:X};")
        pos = off + (4 if t.endswith("*") else S.size_of(t) or 4)
    return f"struct {name} {{\n" + "\n".join(body) + "\n};"


def structify_locals(mod, only=None, skip=()):
    src = S.ROOT / "src" / mod
    store = json.loads((src / f"{mod}_decls.json").read_text())
    types = store.setdefault("types", {})
    files = sorted(src.glob("*.c"))
    texts = {f: f.read_text() for f in files}
    funcs = {}
    for f, text in texts.items():
        for m in S.FUNC.finditer(text):
            funcs[m[2]] = (f, S.split_args(m[3]), m[4])
    dsu = S.DSU()
    node_struct = {}  # node -> existing struct name
    locals_ = {}  # (func, local) -> True if eligible
    field_links = []  # (base node, off, target node)
    acc = collections.defaultdict(collections.Counter)  # node -> (off, type) counts

    def pnode(func, a):
        for k, prm in enumerate(funcs[func][1]):
            pm = re.fullmatch(r"struct (\w+) \*(arg\d+)", prm)
            if pm and pm[2] == a:
                node = ("P", func, k)
                node_struct[node] = pm[1]
                dsu.find(node)
                return node
        return None

    for func, (f, params, body) in funcs.items():
        for dm in LOCAL_DECL.finditer(body):
            name = dm[3]
            uses = S.ARGACC.pattern.replace("arg\\d+", re.escape(name))
            if not re.search(rf"M2C_FIELD\({re.escape(name)}, ", body):
                continue
            rest = re.sub(rf"M2C_FIELD\({re.escape(name)}, [^,()]+?, (?:0x[0-9A-Fa-f]+|\d+)\)", "", body)
            if re.search(rf"\b{name}\s*[-+\[]|[-+]\s*{name}\b|\b{name}\s*[-+]=|\b{name}\+\+|\({name}\)\s*[-+\[]", rest):
                continue
            node = ("L", func, name)
            locals_[node] = True
            dsu.find(node)
            for am in re.finditer(rf"M2C_FIELD\({re.escape(name)}, ([^,()]+?), (0x[0-9A-Fa-f]+|\d+)\)", body):
                t = S.field_type(False, am[1])
                if t:
                    acc[node][(int(am[2], 0), t)] += 1
        # assignments
        for am in re.finditer(r"^\s+(\w+) = (?:\((?:void|M2C_UNK) \*\) )?(.+?);$", body, re.M):
            lhs, rhs = am[1], am[2]
            ln = ("L", func, lhs)
            if ln not in locals_:
                continue
            if re.fullmatch(r"arg\d+", rhs):
                pn = pnode(func, rhs)
                if pn:
                    dsu.union(ln, pn)
            elif ("L", func, rhs) in locals_:
                dsu.union(ln, ("L", func, rhs))
            else:
                fm = PTR_FIELD.fullmatch(rhs)
                am2 = re.fullmatch(r"(\w+)->unk([0-9A-F]+)", rhs)
                if fm or am2:
                    base, off = (fm[1], int(fm[2], 0)) if fm else (am2[1], int(am2[2], 16))
                    bn = ("L", func, base) if ("L", func, base) in locals_ else (pnode(func, base) if base.startswith("arg") else None)
                    if bn:
                        field_links.append((bn, off, ln))
    # components
    comps = collections.defaultdict(list)
    for node in list(locals_) + list(node_struct):
        comps[dsu.find(node)].append(node)
    comp_name = {}
    for root, members in comps.items():
        existing = {node_struct[n] for n in members if n in node_struct}
        if len(existing) > 1:
            continue
        if existing:
            comp_name[root] = existing.pop()
        else:
            first = min(n for n in members if n[0] == "L")
            comp_name[root] = f"Unk_{first[1]}_{first[2]}"
    chosen = {n for n in comp_name.values() if (only is None or n in only) and n not in skip}
    # fields per struct
    struct_fields = {}
    for root, name in comp_name.items():
        if name not in chosen:
            continue
        base = parse_struct(types[name]) if name in types else {}
        counts = collections.Counter()
        for n in comps[root]:
            counts.update(acc.get(n, {}))
        by_off = collections.defaultdict(list)
        for (off, t), c in counts.items():
            by_off[off].append((c, t))
        fields = dict(base)
        for off in sorted(by_off):
            if off in fields:
                continue
            c, t = max(by_off[off])
            sz = S.size_of(t)
            if sz is None or off % min(sz, 4):
                continue
            lo = max((o for o in fields if o < off), default=None)
            hi = min((o for o in fields if o > off), default=None)
            if lo is not None and lo + (4 if fields[lo].endswith("*") else S.size_of(fields[lo]) or 4) > off:
                continue
            if hi is not None and off + sz > hi:
                continue
            fields[off] = t
        struct_fields[name] = fields
    # pointer fields
    link_ok = []
    for bn, off, tn in field_links:
        bname, tname = comp_name.get(dsu.find(bn)), comp_name.get(dsu.find(tn))
        if not bname or not tname or bname not in struct_fields or tname not in chosen:
            continue
        cur = struct_fields[bname].get(off)
        if cur in (None, "void *", "M2C_UNK *", f"struct {tname} *"):
            lo = max((o for o in struct_fields[bname] if o < off), default=None)
            if cur is None and lo is not None and lo + 4 > off:
                continue
            struct_fields[bname][off] = f"struct {tname} *"
            link_ok.append((bn, off, tn))
    if not struct_fields:
        return 0, 0
    for name, fields in struct_fields.items():
        types[name] = render(name, fields)
    # rewrite
    n_lines = 0
    node_type = {}
    for root, name in comp_name.items():
        if name in struct_fields:
            for n in comps[root]:
                node_type[n] = name

    for f, text in texts.items():
        def fix_func(m):
            nonlocal n_lines
            func, body = m[2], m[4]
            new = body
            for dm in list(LOCAL_DECL.finditer(body)):
                name = dm[3]
                sname = node_type.get(("L", func, name))
                if not sname:
                    continue
                fields = struct_fields[sname]
                new = re.sub(rf"^(\s+)(?:void|M2C_UNK) \*{name};$", rf"\1struct {sname} *{name};", new, flags=re.M)

                def acc_repl(am, name=name, fields=fields):
                    off, t = int(am[2], 0), S.field_type(False, am[1])
                    return f"{name}->unk{off:X}" if fields.get(off) == t else am[0]
                new = re.sub(rf"M2C_FIELD\({re.escape(name)}, ([^,()]+?), (0x[0-9A-Fa-f]+|\d+)\)", acc_repl, new)
            # pointer-field loads/stores through typed bases
            def pf_repl(pm):
                base, off = pm[1], int(pm[2], 0)
                bt = node_type.get(("L", func, base))
                if not bt and base.startswith("arg"):
                    for k, prm in enumerate(m[3].split(",")):
                        mm = re.fullmatch(rf"\s*struct (\w+) \*{base}\s*", prm)
                        if mm:
                            bt = mm[1] if mm[1] in struct_fields else None
                if bt and struct_fields[bt].get(off, "").startswith("struct "):
                    return f"{base}->unk{off:X}"
                return pm[0]
            new = PTR_FIELD.sub(pf_repl, new)
            n_lines += new != body
            return f"{m[1]}{func}({m[3]}) {{\n{new}}}\n"
        out = S.FUNC.sub(fix_func, text)
        if out != text:
            f.write_text(out)
    S.write_decls(mod, store)
    return len(struct_fields), n_lines
