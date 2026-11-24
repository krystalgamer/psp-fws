#!/usr/bin/env python3
"""Replace M2C_FIELD/M2C_VFIELD accesses on globals with struct fields.

For every global D_xxx of a module that is accessed through
M2C_FIELD(&D_xxx, T *, off) / M2C_VFIELD(&D_xxx, T, off), define
`struct D_xxx_s` with a field `unkOFF` of type T (volatile for M2C_VFIELD
accesses) at each offset, declare the global with that type and rewrite the
accesses as D_xxx.unkOFF. Accesses that can't be fields (conflicting type or
volatility at an offset, overlapping or misaligned fields) keep the macro.
Globals used with pointer arithmetic are left alone.

The module is rebuilt from scratch; on mismatch every change is reverted.
Usage: tools/structify.py VERSION:MODULE [--no-verify]
"""
import collections
import json
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
SIZES = {"s8": 1, "u8": 1, "char": 1, "s16": 2, "u16": 2, "s32": 4, "u32": 4, "int": 4, "f32": 4,
         "M2C_UNK": 4, "s64": 8, "u64": 8, "f64": 8}
ACCESS = re.compile(r"M2C_(V?)FIELD\(&(D_\w+), ([^,()]+?), (0x[0-9A-Fa-f]+|\d+)\)")


def field_type(macro_v, t):
    t = t.strip()
    if not macro_v:  # M2C_FIELD takes a pointer type
        if not t.endswith("*"):
            return None
        t = t[:-1].strip()
    return t


def size_of(t):
    if t.endswith("*"):
        return 4
    return SIZES.get(t)


def write_decls(mod, store):
    src = ROOT / "src" / mod
    (src / f"{mod}_decls.json").write_text(json.dumps(store, indent=1, sort_keys=True))
    lines = [f"#ifndef {mod.upper()}_DECLS_H", f"#define {mod.upper()}_DECLS_H", "",
             '#include "common.h"', '#include "m2c_macros.h"', ""]
    lines += [store["types"][k] + "\n" for k in sorted(store.get("types", {}))]
    lines += [store["vars"][k] for k in sorted(store["vars"])]
    lines.append("")
    lines += [store["funcs"][k] for k in sorted(store["funcs"])]
    lines += ["", "#endif", ""]
    (src / f"{mod}_decls.h").write_text("\n".join(lines))


def body_text(text):
    """C text without INCLUDE_ASM/INCLUDE_RODATA lines."""
    return "\n".join(l for l in text.splitlines() if not l.startswith(("INCLUDE_ASM", "INCLUDE_RODATA")))


def structify_globals(mod, only=None, skip=()):
    src = ROOT / "src" / mod
    store_path = src / f"{mod}_decls.json"
    store = json.loads(store_path.read_text())
    store.setdefault("types", {})
    files = sorted(src.glob("*.c"))
    texts = {f: f.read_text() for f in files}
    code = "\n".join(body_text(t) for t in texts.values())

    uses = collections.defaultdict(collections.Counter)  # sym -> (off, type, vol) -> n
    for m in ACCESS.finditer(code):
        t = field_type(m[1] == "V", m[3])
        uses[m[2]][(int(m[4], 0), t, m[1] == "V")] += 1
    changed = {}
    for sym, acc in uses.items():
        if (only is not None and sym not in only) or sym in skip:
            continue
        decl = store["vars"].get(sym, "")
        if f"struct {sym}_s" in decl:
            continue
        rest = ACCESS.sub("", code)
        if re.search(rf"&\(?{sym}\)?\s*[-+\[]|\(&{sym}\)\s*[-+\[]|\({sym}\)\s*[-+\[]", rest):
            continue
        bare = re.findall(rf"(?<![&\w]){sym}\b(?!\s*\()", rest)
        base_t = None
        if bare:
            dm = re.match(rf"extern (?:volatile )?([\w ]+?\**) ?{sym};$", decl)
            if not dm or dm[1].strip() in ("M2C_UNK", "") or size_of(dm[1].strip()) is None:
                continue
            base_t = dm[1].strip()
            acc[(0, base_t, False)] += len(bare)
        # choose one (type, volatile) per offset, by use count
        by_off = collections.defaultdict(list)
        for (off, t, vol), n in acc.items():
            by_off[off].append((n, t, vol))
        fields = {}
        for off in sorted(by_off):
            n, t, vol = max(by_off[off])
            sz = size_of(t)
            if sz is None or off % min(sz, 4):
                continue
            prev = max((o for o in fields if o < off), default=None)
            if prev is not None and prev + size_of(fields[prev][0]) > off:
                continue
            fields[off] = (t, vol)
        if not fields:
            continue
        if bare and 0 not in fields:
            continue
        body, pos = [], 0
        for off in sorted(fields):
            t, vol = fields[off]
            if off > pos:
                body.append(f"    u8 pad{pos:X}[0x{off - pos:X}];")
            body.append(f"    {'volatile ' if vol else ''}{t}{'' if t.endswith('*') else ' '}unk{off:X};")
            pos = off + size_of(t)
        store["types"][f"{sym}_s"] = f"struct {sym}_s {{\n" + "\n".join(body) + "\n};"
        store["vars"][sym] = f"extern struct {sym}_s {sym};"
        changed[sym] = (fields, bool(bare))
    if not changed:
        return 0, 0

    def repl(m):
        sym = m[2]
        if sym not in changed:
            return m[0]
        fields = changed[sym][0]
        off, t, vol = int(m[4], 0), field_type(m[1] == "V", m[3]), m[1] == "V"
        if fields.get(off) == (t, vol):
            return f"{sym}.unk{off:X}"
        return m[0]

    n_fields = 0
    for f, text in texts.items():
        out = []
        for line in text.splitlines(keepends=True):
            if line.startswith(("INCLUDE_ASM", "INCLUDE_RODATA")):
                out.append(line)
                continue
            new = ACCESS.sub(repl, line)
            for sym, (fields, bare) in changed.items():
                if bare:
                    new = re.sub(rf"(?<![&\w.]){sym}\b(?![\s]*\(|\.)", f"{sym}.unk0", new)
            n_fields += line != new
            out.append(new)
        f.write_text("".join(out))
    write_decls(mod, store)
    return len(changed), n_fields


FUNC = re.compile(r"^((?!static)[\w \*]+?)\b(\w+)\(([^;{}]*)\) \{\n(.*?)^\}\n", re.M | re.S)
ARGACC = re.compile(r"M2C_FIELD\((arg\d+), ([^,()]+?), (0x[0-9A-Fa-f]+|\d+)\)")


class DSU:
    def __init__(self):
        self.p = {}

    def find(self, x):
        self.p.setdefault(x, x)
        while self.p[x] != x:
            self.p[x] = self.p[self.p[x]]
            x = self.p[x]
        return x

    def union(self, a, b):
        self.p[self.find(a)] = self.find(b)


def split_args(s):
    out, depth, cur = [], 0, ""
    for ch in s:
        if ch == "," and depth == 0:
            out.append(cur.strip())
            cur = ""
            continue
        depth += ch in "(["
        depth -= ch in ")]"
        cur += ch
    if cur.strip():
        out.append(cur.strip())
    return out


def proto_params(proto):
    m = re.match(r"^[\w \*]+?\b\w+\((.*)\);$", proto.strip())
    return split_args(m[1]) if m else None


def structify_args(mod, only=None, skip=()):
    """Turn `void *argN` parameters accessed through M2C_FIELD into struct pointers."""
    src = ROOT / "src" / mod
    store = json.loads((src / f"{mod}_decls.json").read_text())
    store.setdefault("types", {})
    files = sorted(src.glob("*.c"))
    texts = {f: f.read_text() for f in files}
    funcs = {}  # name -> (file, params list, body)
    for f, text in texts.items():
        for m in FUNC.finditer(text):
            funcs[m[2]] = (f, split_args(m[3]), m[4])
    dsu = DSU()
    eligible = {}
    for name, (f, params, body) in funcs.items():
        for k, prm in enumerate(params):
            pm = re.fullmatch(r"void \*(arg\d+)", prm)
            if not pm:
                continue
            a = pm[1]
            rest = ARGACC.sub("", body)
            if re.search(rf"\b{a}\s*[-+\[]|[-+]\s*{a}\b|\b{a}\s*[-+]=|\({a}\)\s*[-+\[]", rest):
                continue
            eligible[(name, k)] = a
            dsu.find((name, k))
    # unify parameters passed straight through to other functions
    for name, (f, params, body) in funcs.items():
        args = {a: k for (n, k), a in eligible.items() if n == name}
        if not args:
            continue
        for cm in re.finditer(r"\b(\w+)\(", body):
            callee = cm[1]
            if callee not in funcs and callee not in store["funcs"]:
                continue
            depth, j = 1, cm.end()
            while j < len(body) and depth:
                depth += body[j] == "("
                depth -= body[j] == ")"
                j += 1
            for pos, expr in enumerate(split_args(body[cm.end():j - 1])):
                em = re.fullmatch(r"(?:\([\w \*]+\) )?(arg\d+)", expr)
                if em and em[1] in args and (callee, pos) in eligible:
                    dsu.union((name, args[em[1]]), (callee, pos))
    comps = collections.defaultdict(list)
    for key in eligible:
        comps[dsu.find(key)].append(key)
    n_types = n_lines = 0
    renames = {}  # (func, arg) -> struct name
    accepted = {}  # struct -> fields
    for root, members in sorted(comps.items(), key=lambda kv: min(kv[1])):
        acc = collections.Counter()
        for name, k in members:
            a = eligible[(name, k)]
            for m in ARGACC.finditer(funcs[name][2]):
                if m[1] == a:
                    t = field_type(False, m[2])
                    if t:
                        acc[(int(m[3], 0), t)] += 1
        if not acc:
            continue
        sname = "Unk_" + min(members)[0] + f"_{min(members)[1]}"
        if (only is not None and sname not in only) or sname in skip:
            continue
        by_off = collections.defaultdict(list)
        for (off, t), n in acc.items():
            by_off[off].append((n, t))
        fields = {}
        for off in sorted(by_off):
            n, t = max(by_off[off])
            sz = size_of(t)
            if sz is None or off % min(sz, 4):
                continue
            prev = max((o for o in fields if o < off), default=None)
            if prev is not None and prev + size_of(fields[prev]) > off:
                continue
            fields[off] = t
        if not fields:
            continue
        body, pos = [], 0
        for off in sorted(fields):
            if off > pos:
                body.append(f"    u8 pad{pos:X}[0x{off - pos:X}];")
            body.append(f"    {fields[off]}{'' if fields[off].endswith('*') else ' '}unk{off:X};")
            pos = off + size_of(fields[off])
        store["types"][sname] = f"struct {sname} {{\n" + "\n".join(body) + "\n};"
        accepted[sname] = fields
        for name, k in members:
            renames[(name, k)] = sname
        n_types += 1
    if not renames:
        return 0, 0
    # rewrite definitions, bodies and prototypes
    for f, text in texts.items():
        def fix_func(m):
            nonlocal n_lines
            name, params, body = m[2], split_args(m[3]), m[4]
            for k, prm in enumerate(params):
                sname = renames.get((name, k))
                if not sname:
                    continue
                a = eligible[(name, k)]
                params[k] = f"struct {sname} *{a}"
                fields = accepted[sname]

                def acc_repl(am, a=a, fields=fields):
                    if am[1] != a:
                        return am[0]
                    off, t = int(am[3], 0), field_type(False, am[2])
                    return f"{a}->unk{off:X}" if fields.get(off) == t else am[0]
                new = ARGACC.sub(acc_repl, body)
                n_lines += new != body
                body = new
            return f"{m[1]}{name}({', '.join(params)}) {{\n{body}}}\n"
        new = FUNC.sub(fix_func, text)
        if new != text:
            f.write_text(new)
    for name in {n for n, _ in renames}:
        proto = store["funcs"].get(name)
        params = proto_params(proto) if proto else None
        if not params:
            continue
        for k in range(len(params)):
            sname = renames.get((name, k))
            if sname and re.fullmatch(r"void \*(?:\s*arg\d+)?", params[k]):
                params[k] = f"struct {sname} *" + (re.search(r"arg\d+", params[k])[0] if "arg" in params[k] else "")
        store["funcs"][name] = re.sub(r"\(.*\);$", "(" + ", ".join(params) + ");", proto)
    write_decls(mod, store)
    return n_types, n_lines


def verify(vm):
    return subprocess.run(["tools/regress.sh", vm], cwd=ROOT, capture_output=True, text=True).returncode == 0


def revert(mod):
    subprocess.run(["git", "checkout", "-q", "--", f"src/{mod}"], cwd=ROOT)


def main():
    vm = sys.argv[1]
    v, mod = vm.split(":")
    if subprocess.run(["git", "diff", "--quiet", "--", f"src/{mod}"], cwd=ROOT).returncode:
        print(f"{vm}: local changes, skipping")
        return
    if "--locals" in sys.argv:
        import structify_locals
        phase = structify_locals.structify_locals
    else:
        phase = structify_args if "--args" in sys.argv else structify_globals
    n, lines = phase(mod)
    if not n:
        print(f"{vm}: nothing to do")
        return
    if "--no-verify" in sys.argv:
        print(f"{vm}: {n} globals, {lines} lines (unverified)")
        return
    if verify(vm):
        print(f"{vm}: OK, {n} globals as structs, {lines} lines rewritten")
        return
    # bisect: keep the largest verified subsets of the new structs
    now = json.loads((ROOT / "src" / mod / f"{mod}_decls.json").read_text()).get("types", {})
    head = json.loads(subprocess.run(["git", "show", f"HEAD:src/{mod}/{mod}_decls.json"], cwd=ROOT,
                                     capture_output=True, text=True).stdout or "{}").get("types", {})
    names = sorted(k for k, v in now.items() if head.get(k) != v)
    if phase is structify_globals:
        names = [n[:-2] for n in names if n.endswith("_s")]
    revert(mod)
    good, bad = [], []

    def test(extra):
        revert(mod)
        phase(mod, only=set(good + extra))
        return verify(vm)

    def solve(s):
        if not s:
            return
        if test(s):
            good.extend(s)
        elif len(s) == 1:
            bad.extend(s)
        else:
            solve(s[:len(s) // 2])
            solve(s[len(s) // 2:])
    solve(names)
    revert(mod)
    if good:
        phase(mod, only=set(good))
        if not verify(vm):
            revert(mod)
            good = []
    print(f"{vm}: {'OK' if good else 'FAILED'}, {len(good)} structs after bisection; kept macros for {', '.join(bad)}")


if __name__ == "__main__":
    main()
