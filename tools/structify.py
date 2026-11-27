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
SRC = {}  # mod -> source dir (from config src_path), set by main


def sdir(mod):
    return SRC.get(mod, ROOT / "src" / mod)


def rel(mod):
    return str(sdir(mod).relative_to(ROOT))
SIZES = {"s8": 1, "u8": 1, "char": 1, "s16": 2, "u16": 2, "s32": 4, "u32": 4, "int": 4, "f32": 4,
         "M2C_UNK": 4, "s64": 8, "u64": 8, "f64": 8}
ACCESS = re.compile(r"M2C_(V?)FIELD\(&(D_\w+), ([^,()]+?), (0x[0-9A-Fa-f]+|\d+)\)")


def field_type(macro_v, t):
    t = t.strip()
    if not macro_v:  # M2C_FIELD takes a pointer type
        fp = re.fullmatch(r"(.+?) \(\*\*\)(\(.*\))", t)
        if fp:  # pointer to function pointer -> function pointer field
            return f"{fp[1]} (*){fp[2]}"
        if not t.endswith("*"):
            return None
        t = t[:-1].strip()
    return t


def size_of(t):
    if t.endswith("*") or "(*)" in t:
        return 4
    return SIZES.get(t)


def decl(t, name):
    """Declaration of a field of type t (function pointers included)."""
    if "(*)" in t:
        return t.replace("(*)", f"(*{name})", 1)
    return f"{t}{'' if t.endswith('*') else ' '}{name}"


_CXX_TYPES = {"int": "s32", "unsigned int": "u32", "short": "s16", "unsigned short": "u16", "char": "char",
              "signed char": "s8", "unsigned char": "u8", "long": "s32", "unsigned long": "u32", "float": "float",
              "double": "double", "long long": "s64", "unsigned long long": "u64", "bool": "bool", "wchar_t": "u16",
              "void": "void"}


def _cxx_param(t):
    t = t.strip()
    base = re.sub(r"\s*(const|volatile)\s*", " ", t).replace("&", "*").strip()
    stars = base.count("*")
    core = base.replace("*", "").strip()
    if core in _CXX_TYPES and not (core == "void" and stars == 0):
        return _CXX_TYPES[core] + " " + "*" * stars if stars else _CXX_TYPES[core]
    return "void *" if stars or core else "void *"  # class/struct/enum/function types: opaque


def cxx_proto(line, static=False):
    """C++ units: an unprototyped `R f();` is `R f(void)` in C++. Mangled names give the real parameters
    (member functions get `void *self` first unless `static`); other unknown prototypes become `(...)`."""
    m = re.match(r"^(.*?)\b(\w+)\(\);$", line)
    if not m:
        return line
    ret, name = m[1], m[2]
    if name.startswith("_Z"):
        dm = _demangle(name)
        pm = re.match(r"^(.*?)\((.*)\)( const)?$", dm)
        if pm and dm != name:
            qual, args = pm[1], pm[2]
            params = [] if args in ("", "void") else [_cxx_param(a) for a in _split_args(args)]
            if not static and _is_member(qual):
                params = ["void *self"] + params
            return f"{ret}{name}({', '.join(params) or 'void'});"
    return f"{ret}{name}(...);"


_DEMANGLED = {}


def _demangle(name):
    if name not in _DEMANGLED:
        _DEMANGLED[name] = subprocess.run(["c++filt", name], capture_output=True, text=True).stdout.strip()
    return _DEMANGLED[name]


def _is_member(qual):
    """Ns::Class::method (and ctors/dtors) take `this`; a single namespace level (vsh::f, paf::f) doesn't."""
    if "::" not in qual:
        return False
    return not re.match(r"^(vsh|paf|sce\w*)::\w+$", qual)


def mangled_params(name):
    """Number of declared parameters of a mangled function (without `this`), or None."""
    dm = _demangle(name)
    pm = re.match(r"^(.*?)\((.*)\)( const)?$", dm)
    if not pm or dm == name:
        return None, False
    return (0 if pm[2] in ("", "void") else len(_split_args(pm[2]))), _is_member(pm[1])


def _call_arities(texts, name):
    """Argument counts of every call `name(...)` in the module's C (definitions excluded)."""
    out = set()
    for text in texts:
        for m in re.finditer(rf"(?<![\w.>:]){name}\(", text):
            line_start = text.rfind("\n", 0, m.start()) + 1
            if m.start() > line_start and not text[line_start].isspace():
                continue  # a file-scope definition / declaration
            i, depth, n, nonempty = m.end(), 1, 0, False
            while i < len(text) and depth:
                c = text[i]
                if c in "([":
                    depth += 1
                elif c in ")]":
                    depth -= 1
                elif c == "," and depth == 1:
                    n += 1
                elif not c.isspace():
                    nonempty = True
                i += 1
            out.add(n + 1 if nonempty else 0)
    return out


def static_members(mod, store):
    """Mangled member-looking imports that are static: marked in store["cxx_static"], or every call in the
    module passes exactly the declared parameters (no `this`), e.g. vsh::OptionMenu::Show()."""
    marked = set(store.get("cxx_static", []))
    texts = [f.read_text() for f in sdir(mod).glob("*.c")]
    for name, proto in store["funcs"].items():
        if not name.startswith("_Z") or not re.search(r"\(\);$", proto):
            continue
        nparams, member = mangled_params(name)
        if not member or nparams is None:
            continue
        ar = _call_arities(texts, name)
        if ar and ar == {nparams}:
            marked.add(name)
    return marked


# C++ units get these headers outside the extern "C" block (class declarations of the imports)
CXX_PRELUDE = ['#include "paf.h"', '#include "vsh.h"']


def _type_names(text):
    """Names a type entry defines (struct/class/union/enum tags, typedef names)."""
    names = set(re.findall(r"\b(?:struct|class|union|enum)\s+(\w+)\s*(?::[^;{]*)?\{", text))
    # brace bodies removed (nested), so `typedef struct {...} Name;` ends at the right ';' and fields don't count
    flat, depth = [], 0
    for ch in re.sub(r"/\*.*?\*/", "", text, flags=re.S):
        if ch == "{":
            depth += 1
            if depth == 1:
                flat.append("{}")
            continue
        if ch == "}":
            depth -= 1
            continue
        if depth == 0:
            flat.append(ch)
    flat = "".join(flat)
    names |= set(re.findall(r"\btypedef\b[^;]*?\b(\w+)\s*(?:\[[^\]]*\])?\s*;", flat))
    names |= set(re.findall(r"\btypedef\b[^;]*?\(\s*\*\s*(\w+)\s*\)", flat))
    return names


def ordered_types(types):
    """Type entries in dependency order (a type after the types it uses by value or derives from);
    pointer uses need no order. Ties keep the sorted key order, cycles fall back to it."""
    keys = sorted(types)
    defs = {k: _type_names(types[k]) for k in keys}
    owner = {n: k for k in keys for n in defs[k]}
    deps = {}
    for k in keys:
        body = re.sub(r"/\*.*?\*/", "", types[k], flags=re.S)
        d = set()
        for m in re.finditer(r"(\bstruct\s+|\bunion\s+|\benum\s+)?\b(\w+)\b(\s*\*)?", body):
            o = owner.get(m[2])
            # by-value uses need the definition first; pointer uses of a typedef name need the typedef
            # (only `struct X *` is fine without it)
            if o and o != k and m[2] not in defs[k] and not (m[3] and m[1]):
                d.add(o)
        deps[k] = d
    out, done = [], set()
    pending = list(keys)
    while pending:
        for k in pending:
            if deps[k] <= done:
                break
        else:
            k = pending[0]  # cycle
        pending.remove(k)
        done.add(k)
        out.append(k)
    return out


def decls_body(mod, store, cxx):
    """Header text after the includes: C++ prelude, then types (dependency order), globals and prototypes,
    inside extern "C" for C++ units."""
    lines = []
    if cxx:
        prelude = CXX_PRELUDE + store.get("cxx_prelude", [])
        lines += ["#ifdef __cplusplus"] + prelude + ['extern "C" {', "#endif", ""]
    types = store.get("types", {})
    lines += [types[k] + "\n" for k in ordered_types(types)]
    lines += [store["vars"][k] for k in sorted(store["vars"])]
    lines.append("")
    statics = static_members(mod, store) if cxx else set()
    lines += [cxx_proto(store["funcs"][k], k in statics) if cxx else store["funcs"][k] for k in sorted(store["funcs"])]
    if cxx:
        lines += ["", "#ifdef __cplusplus", "}", "#endif"]
    return lines


def _split_args(args):
    out, depth, cur = [], 0, ""
    for ch in args:
        depth += ch in "<(" ; depth -= ch in ">)"
        if ch == "," and depth == 0:
            out.append(cur); cur = ""
        else:
            cur += ch
    return out + [cur]


def write_decls(mod, store):
    src = sdir(mod)
    (src / f"{mod}_decls.json").write_text(json.dumps(store, indent=1, sort_keys=True))
    lines = [f"#ifndef {mod.upper()}_DECLS_H", f"#define {mod.upper()}_DECLS_H", "",
             '#include "common.h"', '#include "m2c_macros.h"', ""]
    # C++ units: the decompiled names keep C linkage (a later definition inherits it)
    cxx = any("/* lang: c++ */" in f.read_text() for f in src.glob("*.c"))
    lines += decls_body(mod, store, cxx)
    lines += ["", "#endif", ""]
    (src / f"{mod}_decls.h").write_text("\n".join(lines))


def body_text(text):
    """C text without INCLUDE_ASM/INCLUDE_RODATA lines."""
    return "\n".join(l for l in text.splitlines() if not l.startswith(("INCLUDE_ASM", "INCLUDE_RODATA")))


def structify_globals(mod, only=None, skip=()):
    src = sdir(mod)
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
        vdecl = store["vars"].get(sym, "")
        if f"struct {sym}_s" in vdecl:
            continue
        rest = ACCESS.sub("", code)
        if re.search(rf"&\(?{sym}\)?\s*[-+\[]|\(&{sym}\)\s*[-+\[]|\({sym}\)\s*[-+\[]", rest):
            continue
        bare = re.findall(rf"(?<![&\w]){sym}\b(?!\s*\()", rest)
        base_t = None
        if bare:
            dm = re.match(rf"extern (?:volatile )?([\w ]+?\**) ?{sym};$", vdecl)
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
            body.append(f"    {'volatile ' if vol else ''}{decl(t, f'unk{off:X}')};")
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
    src = sdir(mod)
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
            pm = re.fullmatch(r"(void \*|M2C_UNK \*|s32 |u32 )(arg\d+)", prm)
            if not pm:
                continue
            a = pm[2]
            rest = ARGACC.sub("", body)
            if pm[1].strip() in ("s32", "u32") and re.search(
                    rf"\b{a}\s*(?:[*/%&|^]|<<|>>|[<>]=?\s*(?!0\b)\w)|(?:[*/%&|^]|<<|>>)\s*{a}\b|\({a}\)\s*[*/%&|^<>]", rest):
                continue
            # byte arithmetic (arg + n) is kept as (u8 *)arg + n; anything else excludes
            if re.search(rf"\b{a}\s*\[|[-+]\s*{a}\b|\b{a}\s*[-+]=|\b{a}\s*(?:\+\+|--)|\({a}\)\s*[-+\[]", rest):
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
            body.append(f"    {decl(fields[off], f'unk{off:X}')};")
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

                def addr_repl(om, a=a, fields=fields):
                    off = int(om[1], 0)
                    return f"&{a}->unk{off:X}" if off in fields else om[0]
                new = re.sub(rf"\b{a}\s*([-+])(?![-+=>])", rf"(u8 *){a} \1", new)
                new = re.sub(rf"\(u8 \*\){a} \+ (0x[0-9A-Fa-f]+|\d+)(?=[),;])", addr_repl, new)
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
            if sname and re.fullmatch(r"(?:void \*|M2C_UNK \*|s32|u32)(?:\s*arg\d+)?", params[k]):
                params[k] = f"struct {sname} *" + (re.search(r"arg\d+", params[k])[0] if "arg" in params[k] else "")
        store["funcs"][name] = re.sub(r"\(.*\);$", "(" + ", ".join(params) + ");", proto)
    write_decls(mod, store)
    return n_types, n_lines


def verify(vm):
    return subprocess.run(["tools/regress.sh", "--shared", vm], cwd=ROOT, capture_output=True, text=True).returncode == 0


def revert(mod):
    """Restore src/<mod> to HEAD without touching the git index (parallel-safe)."""
    tracked = subprocess.run(["git", "ls-tree", "-r", "--name-only", "HEAD", rel(mod)], cwd=ROOT,
                             capture_output=True, text=True).stdout.split()
    for path in tracked:
        data = subprocess.run(["git", "show", f"HEAD:{path}"], cwd=ROOT, capture_output=True).stdout
        if (ROOT / path).read_bytes() != data:
            (ROOT / path).write_bytes(data)
    for f in (sdir(mod)).iterdir():
        if f.is_file() and str(f.relative_to(ROOT)) not in tracked:
            f.unlink()


def main():
    vm = sys.argv[1]
    v, mod = vm.split(":")
    from srcdir import src_dir
    SRC[mod] = src_dir(v, mod)
    if subprocess.run(["git", "diff", "--quiet", "--no-ext-diff", "--", rel(mod)], cwd=ROOT).returncode:
        print(f"{vm}: local changes, skipping")
        return
    if "--ret" in sys.argv:
        import structify_ret
        phase = structify_ret.structify_ret
    elif "--extend" in sys.argv:
        import structify_extend
        phase = structify_extend.structify_extend
    elif "--gptr" in sys.argv:
        import structify_gptr
        phase = structify_gptr.structify_gptr
    elif "--vtables" in sys.argv:
        import structify_vtbl
        phase = structify_vtbl.structify_vtables
    elif "--nested" in sys.argv:
        import structify_nested
        phase = structify_nested.structify_nested
    elif "--locals" in sys.argv:
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
    now = json.loads((sdir(mod) / f"{mod}_decls.json").read_text()).get("types", {})
    head = json.loads(subprocess.run(["git", "show", f"HEAD:{rel(mod)}/{mod}_decls.json"], cwd=ROOT,
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
