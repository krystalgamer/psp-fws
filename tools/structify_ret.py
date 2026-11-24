#!/usr/bin/env python3
"""Function results (structify phase H).

M2C_FIELD(f(...), T, off) where f returns `void *` / `M2C_UNK *` / s32 / u32:
f gets return type `struct Unk_ret_<f> *` (prototype and, if present, its C
definition) and the access becomes `f(...)->unkOFF`. Functions whose result
takes part in arithmetic or indexing are left alone.

Usage: called from tools/structify.py --ret
"""
import collections
import json
import re

import structify as S
from structify_locals import fsize, render
from structify_vtbl import macro_calls

OFF = r"0x[0-9A-Fa-f]+|\d+"
RET = r"(void \*|M2C_UNK \*|s32 |u32 )"


def _call(expr):
    """function name if expr is exactly one call `f(...)`."""
    m = re.match(r"(\w+)\(", expr)
    if not m or not expr.endswith(")"):
        return None
    depth = 0
    for i, ch in enumerate(expr[m.end() - 1:], m.end() - 1):
        depth += ch == "("
        depth -= ch == ")"
        if depth == 0:
            return m[1] if i == len(expr) - 1 else None
    return None


def _call_ends(text, f):
    """end offsets of every call to f in text."""
    for m in re.finditer(rf"(?<![\w.>]){f}\(", text):
        depth, j = 1, m.end()
        while j < len(text) and depth:
            depth += text[j] == "("
            depth -= text[j] == ")"
            j += 1
        yield m.start(), j


def structify_ret(mod, only=None, skip=()):
    src = S.ROOT / "src" / mod
    store = json.loads((src / f"{mod}_decls.json").read_text())
    types = store.setdefault("types", {})
    texts = {f: f.read_text() for f in sorted(src.glob("*.c"))}
    acc = collections.defaultdict(collections.Counter)
    for text in texts.values():
        for s, e, args in macro_calls(S.body_text(text)):
            if len(args) == 3 and (f := _call(args[0])) and re.fullmatch(OFF, args[2]):
                t = S.field_type(False, args[1])
                if t:
                    acc[f][(int(args[2], 0), t)] += 1
    fields_of = {}
    for f, a in acc.items():
        node = f"Unk_ret_{f}"
        if (only is not None and node not in only) or node in skip:
            continue
        proto = store["funcs"].get(f, "")
        if not re.match(rf"{RET}{f}\(", proto):
            continue
        bad = False
        for text in texts.values():
            body = S.body_text(text)
            for s, e in _call_ends(body, f):
                if proto.startswith(("void *", "M2C_UNK *")) and re.match(rf"\s*\+\s*(?:{OFF})\b", body[e:]) \
                        and not re.search(r"[-+*/&|^]\s*\(?\s*$|\(u8 \*\)\s*$", body[:s]):
                    continue
                if re.match(r"\s*(?:[-+\[]|\)\s*[-+\[])", body[e:]) or re.search(r"[-+]\s*\(?\s*$", body[:s]):
                    bad = True
        if bad:
            continue
        by_off = collections.defaultdict(list)
        for (off, t), c in a.items():
            by_off[off].append((c, t))
        fields = {}
        for off in sorted(by_off):
            c, t = max(by_off[off])
            if off < 0 or off % min(fsize(t), 4):
                continue
            lo = max((o for o in fields if o < off), default=None)
            if lo is not None and lo + fsize(fields[lo]) > off:
                continue
            fields[off] = t
        if fields:
            fields_of[f] = fields
            types[node] = render(node, fields)
            store["funcs"][f] = re.sub(rf"^{RET}", f"struct {node} *", proto)
    if not fields_of:
        return 0, 0
    n = 0
    for path, text in texts.items():
        new, last = text, None
        for s, e, args in reversed(macro_calls(text)):
            f = len(args) == 3 and _call(args[0])
            if last is not None and e > last:
                continue
            if f in fields_of and re.fullmatch(OFF, args[2]) \
                    and fields_of[f].get(int(args[2], 0)) == S.field_type(False, args[1]):
                new = new[:s] + f"{args[0]}->unk{int(args[2], 0):X}" + new[e:]
                n += 1
                last = s
        for f in fields_of:
            for s, e in reversed(list(_call_ends(new, f))):
                if re.match(rf"\s*\+\s*(?:{OFF})\b", new[e:]) and not re.search(r"\(u8 \*\)\s*$", new[:s]) \
                        and not re.match(r"[\w ]+\*?\s*$", new[:s].rsplit("\n", 1)[-1]):
                    new = new[:s] + "(u8 *)" + new[s:]
            new = re.sub(rf"^{RET}{f}\(", f"struct Unk_ret_{f} *{f}(", new, flags=re.M)
        if new != text:
            path.write_text(new)
    S.write_decls(mod, store)
    return len(fields_of), n
