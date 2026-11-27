#!/usr/bin/env python3
"""Turn a module's C units into C++ units (cc1plus) without changing the binaries.

    tools/to_cxx.py MODULE [--ver 100] [--rounds 6] [--no-build] [--keep]

1. marks every src/<mod>/*.c `/* lang: c++ */` and regenerates the decls header (C++ prelude,
   static members, prototypes from the mangled names: tools/structify.write_decls);
2. rewrites m2c C forms that cc1plus compiles differently: `!(x & K)` -> `((x & K) == 0)`
   (C++ folds `!int` through bool: xori/andi instead of andi/bnez);
3. compiles every file for every version sharing the source and fixes the mechanical
   C++ errors (see FIXERS): m2c's dropped pass-through arguments, implicit pointer
   conversions between m2c's per-function structs, int <-> pointer arguments;
4. rebuilds every version (tools/regress.sh --shared). On a compile error left over or a
   mismatch everything is restored (unless --keep) and the leftovers are printed.
"""
import argparse
import os
import re
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import structify  # noqa: E402
from srcdir import sharing_versions, src_dir  # noqa: E402

MARK = "/* lang: c++ */"


# ---------------------------------------------------------------- source rewrites

def _toplevel_ops(s):
    depth, ops, i = 0, [], 0
    while i < len(s):
        c = s[i]
        if c in "([":
            depth += 1
        elif c in ")]":
            depth -= 1
        elif depth == 0:
            for op in ("&&", "||", "?", " & ", " == ", " != ", ","):
                if s.startswith(op, i):
                    ops.append(op.strip())
                    i += len(op) - 1
                    break
        i += 1
    return ops


def rewrite_not(text):
    """`!(X & K)` -> `((X & K) == 0)`: in C both are the same tree, in C++ `!` goes through bool."""
    out, i, n = [], 0, 0
    while True:
        j = text.find("!(", i)
        if j < 0:
            out.append(text[i:])
            break
        if text[j + 2:j + 3] == "=" or (j and text[j - 1] in "!"):
            out.append(text[i:j + 2])
            i = j + 2
            continue
        depth, k = 0, j + 1
        while k < len(text):
            if text[k] == "(":
                depth += 1
            elif text[k] == ")":
                depth -= 1
                if depth == 0:
                    break
            k += 1
        inner = text[j + 2:k]
        if _toplevel_ops(inner) == ["&"] and "\n" not in inner:
            out.append(text[i:j] + f"(({inner}) == 0)")
            n += 1
            i = k + 1
        else:
            out.append(text[i:j + 2])
            i = j + 2
    text = "".join(out)
    # `if (((X) == 0)) {` -> `if ((X) == 0) {`
    text = re.sub(r"\bif \(\((\(.*\) == 0)\)\) \{$", r"if (\1) {", text, flags=re.M)
    return text, n


# ---------------------------------------------------------------- compiling

def fw(ver):
    return re.match(r"\d+", ver)[0], (re.search(r"v(\d+)", ver) or [None, "0"])[1]


def compile_errors(path, ver):
    """cc1plus errors of one unit for one version: [(line, message)] with real source lines."""
    import cc_of
    text = path.read_text()
    comp, flags = cc_of.setting(text, ver, path.parent.name)
    v, var = fw(ver)
    cpp = subprocess.run(["cpp", "-undef", "-nostdinc", "-Iinclude", "-Isrc", f"-DVERSION={ver}", f"-DFW_VERSION={v}",
                          f"-DFW_VARIANT={var}", "-D__GNUC__=3", "-D_LANGUAGE_C", "-D__psp__", "-D__mips__",
                          "-D__cplusplus=1", str(path.resolve().relative_to(ROOT))], capture_output=True, text=True, cwd=ROOT)
    if cpp.returncode:
        return [(0, "cpp: " + cpp.stderr.strip()[:300])]
    cc = subprocess.run([str(ROOT / "tmp/toolchains/bin" / f"cc1plus-{comp}"), *flags.split(), "-fno-exceptions",
                         "-fno-rtti", "-fpermissive", "-G0", "-quiet", "-o", "/dev/null"],
                        input=cpp.stdout, capture_output=True, text=True, cwd=ROOT)
    # gcc wraps long messages: continuation lines start with 3 spaces
    msgs = []
    for line in cc.stderr.splitlines():
        if line.startswith("   ") and msgs:
            msgs[-1] += " " + line.strip()
        else:
            msgs.append(line)
    msgs = [re.sub(r"\s+", " ", m) for m in msgs]
    errs = []
    pending = None  # an error reported at a declaration in a header, located by the next "at this point"
    for line in msgs:
        m = re.match(r"^(.*?):(\d+): (error|warning): (.*)$", line)
        if not m or m[3] != "error":
            continue
        here = Path(m[1]).name == path.name
        if here and m[4].startswith("at this point in file"):
            if pending is not None:
                errs.append((int(m[2]), pending))
                pending = None
        elif here and not re.match(r"too (few|many) arguments to function", m[4]):
            errs.append((int(m[2]), m[4]))
        else:
            # reported at the callee's declaration (header or earlier in this file); located by the
            # following "at this point in file"
            pending = m[4]
    if cc.returncode and not errs:
        errs.append((0, (cc.stderr.strip() or "cc1plus failed")[-300:]))
    return errs


# ---------------------------------------------------------------- fixers

def _call_span(line, name, start=0):
    """(open paren index, close paren index, [arg spans]) of the first call `name(` in line."""
    m = re.search(rf"(?<![\w]){re.escape(name)}\s*\(", line[start:])
    if not m:
        return None
    o = start + m.end() - 1
    depth, args, a0 = 0, [], o + 1
    for i in range(o, len(line)):
        c = line[i]
        if c in "([":
            depth += 1
        elif c in ")]":
            depth -= 1
            if depth == 0:
                if line[a0:i].strip():
                    args.append((a0, i))
                return o, i, args
        elif c == "," and depth == 1:
            args.append((a0, i))
            a0 = i + 1
    return None


def _enclosing_def(lines, idx):
    """Index and parameter names of the function definition containing line idx."""
    for j in range(idx, -1, -1):
        m = re.match(r"^[\w][^;{]*?\b\w+\((.*)\)\s*\{\s*$", lines[j])
        if m:
            names = []
            for p in m[1].split(","):
                pm = re.search(r"(\w+)\s*(\[[^\]]*\])?\s*$", p.strip())
                if pm and p.strip() not in ("void", ""):
                    names.append(pm[1])
            return j, names
        if lines[j].startswith("}"):
            return None, []
    return None, []


def _enclosing_params(lines, idx):
    return _enclosing_def(lines, idx)[1]


# definitions whose parameter list a fixer changed: name -> new prototype (the driver updates the decls)
CHANGED_PROTOS = {}


def _mangled_short(name):
    return name


def fix_too_few(lines, idx, msg):
    """m2c drops arguments that are passed through in a0.. unchanged: pass the caller's own params."""
    m = re.search(r"too few arguments to function `(.*?)\b(\w+)\((.*?)\)'", msg)
    if not m:
        return False
    name, params = m[2], [p for p in m[3].split(",") if p.strip() and p.strip() != "void"]
    span = _call_span(lines[idx], name)
    if not span:
        return False
    o, c, args = span
    have = len(args)
    j, mine = _enclosing_def(lines, idx)
    need = len(params)
    if j is None:
        return False
    if len(mine) < need:
        # the caller passes its own a0..aN through untouched, so m2c saw no use: add the parameters
        if any(not re.fullmatch(r"arg\d+", n) for n in mine) or [f"arg{i}" for i in range(len(mine))] != mine:
            return False
        dm = re.match(r"^(.*?\b(\w+))\((.*)\)(\s*\{\s*)$", lines[j])
        ps = [] if dm[3].strip() in ("", "void") else [dm[3]]
        ps += [f"s32 arg{i}" for i in range(len(mine), need)]
        lines[j] = f"{dm[1]}({', '.join(ps)}){dm[4]}"
        CHANGED_PROTOS[dm[2]] = f"{dm[1]}({', '.join(ps)});"
        mine = [f"arg{i}" for i in range(need)]
    extra = mine[have:need]
    new = ", ".join([lines[idx][a:b].strip() for a, b in args] + extra)
    lines[idx] = lines[idx][:o + 1] + new + lines[idx][c:]
    return True


def _paren(e):
    """An expression safe to put after a cast: `(T) (u8 *)p + 0x20` would cast before the add."""
    return e if re.fullmatch(r"&?[\w.]+(->\w+)*", e) else f"({e})"


def _cast_arg(lines, idx, name, argno, typ):
    span = _call_span(lines[idx], name)
    if not span:
        return False
    o, c, args = span
    if argno > len(args):
        return False
    a, b = args[argno - 1]
    arg = lines[idx][a:b]
    lead = arg[:len(arg) - len(arg.lstrip())]
    lines[idx] = lines[idx][:a] + f"{lead}({typ}) {_paren(arg.strip())}" + lines[idx][b:]
    return True


STORE = {}


def _set_param(name, argno, typ):
    """Retype parameter argno of a decls prototype (m2c guessed M2C_UNK * for strings)."""
    proto = STORE.get("funcs", {}).get(name)
    if not proto:
        return False
    pm = re.match(r"^(.*?\b" + re.escape(name) + r")\((.*)\);$", proto)
    if not pm:
        return False
    ps = [x.strip() for x in structify._split_args(pm[2])]
    if argno > len(ps) or ps[argno - 1] == "...":
        return False
    pname = re.search(r"\b(arg\d+)$", ps[argno - 1])
    ps[argno - 1] = typ + (f" {pname[1]}" if pname else "")
    CHANGED_PROTOS[name] = f"{pm[1]}({', '.join(ps)});"
    return True


def fix_convert_arg(lines, idx, msg):
    """`cannot convert `A*' to `B*' for argument `N' to `R f(...)'`: string literals retype the
    callee's parameter to `const char *`; m2c's per-function structs of one object get a cast."""
    m = re.search(r"cannot convert `(.+?)' to `(.+?)' for argument `(\d+)' to `(?:.*?)\b(\w+)\(", msg)
    if not m:
        return False
    if m[1] == "const char*" and re.fullmatch(r"(M2C_UNK|s32|u32|s8|u8|void|char)\s*\*", m[2]):
        if m[4] in CHANGED_PROTOS or _set_param(m[4], int(m[3]), "const char *"):
            return True
    if m[2] == "const char*" and _string_var(lines, idx, m[4], int(m[3])):
        return True
    return _cast_arg(lines, idx, m[4], int(m[3]), m[2])


def _string_var(lines, idx, name, argno):
    """A global passed where a string is expected (rodata string symbol): retype it `const char D[]`."""
    span = _call_span(lines[idx], name)
    if not span or argno > len(span[2]):
        return False
    a, b = span[2][argno - 1]
    arg = lines[idx][a:b].strip()
    vm = re.fullmatch(r"&?(D_\w+)", arg)
    vars_ = STORE.get("vars", {})
    if not vm or vm[1] not in vars_:
        return False
    if not re.fullmatch(rf"extern (M2C_UNK|s32|u32|s8|u8|char|const char) {vm[1]}(\[\])?;", vars_[vm[1]]):
        return False
    vars_[vm[1]] = f"extern const char {vm[1]}[];"
    CHANGED_PROTOS.setdefault("", "")  # forces a decls rewrite
    # &D (array address) and D are the same pointer; keep the call text but drop the `&`
    for k in range(len(lines)):
        lines[k] = re.sub(rf"&{vm[1]}\b", vm[1], lines[k])
    return True


def fix_too_many(lines, idx, msg):
    """`too many arguments to function `R _Z...(...)'`: m2c guessed the prototype from fewer uses;
    a mangled name gives the real parameters."""
    m = re.search(r"too many arguments to function `(.*?)\b(_Z\w+)\(", msg)
    if not m or m[2] not in STORE.get("funcs", {}):
        return False
    old = STORE["funcs"][m[2]]
    rm = re.match(rf"^(.*?)\b{m[2]}\(", old)
    new = structify.cxx_proto(f"{rm[1] if rm else 'M2C_UNK '}{m[2]}();")
    if new == old or new.endswith("(...);"):
        return False
    CHANGED_PROTOS[m[2]] = new
    return True


def fix_convert_passing(lines, idx, msg):
    """`cannot convert `A*' to `B*' in argument passing` (calls through m2c function pointers): find the
    argument with a matching `&x`/x of type A on the line is not possible without types; cast the
    first argument that is an address-of expression."""
    m = re.search(r"cannot convert `(.+?)' to `(.+?)' in argument passing", msg)
    if not m:
        return False
    line = lines[idx]
    am = re.search(r"\(([^()]*?)(&\w+)", line)
    pm = list(re.finditer(r"(?<=[(,] )(&\w+)(?=[,)])|(?<=\()(&\w+)(?=[,)])", line))
    if not pm:
        return False
    s = pm[0]
    lines[idx] = line[:s.start()] + f"({m[2]}) {s.group(0)}" + line[s.end():]
    return True


def fix_convert_assign(lines, idx, msg):
    m = re.search(r"cannot convert `(.+?)' to `(.+?)' in (assignment|initialization)", msg)
    if not m:
        return False
    line = lines[idx]
    am = re.match(r"^(\s*[^=;]*?[^=!<>+\-*/&|^]=)\s*(.+);\s*$", line)
    if not am:
        return False
    lines[idx] = f"{am[1]} ({m[2]}) {_paren(am[2].strip())};"
    return True


def fix_ptr_int_compare(lines, idx, msg):
    """`ISO C++ forbids comparison between pointer and integer`: m2c typed a local `void *` that holds a
    value (e.g. an ioctl result read back through &sp0); make the local s32, or cast a non-local."""
    if "comparison between pointer and integer" not in msg:
        return False
    j, _ = _enclosing_def(lines, idx)
    for m in re.finditer(r"\b(\w+)\s*(?:==|!=|<=|>=|<|>)\s*-?(?:0x[0-9A-Fa-f]+|\d+)\b", lines[idx]):
        name = m[1]
        if j is not None:
            for k in range(j + 1, idx):
                dm = re.match(rf"^(\s*)void \*{name};\s*$", lines[k])
                if dm:
                    lines[k] = f"{dm[1]}s32 {name};"
                    return True
    # general `A == B` / `A != B` (sign doesn't matter): compare both as s32
    line = lines[idx]
    done = False
    for m in reversed(list(re.finditer(r"\s(==|!=)\s", line))):
        lo = _operand(line, m.start(), -1)
        hi = _operand(line, m.end(), 1)
        if lo is None or hi is None:
            continue
        l, r = line[lo:m.start()].strip(), line[m.end():hi].strip()
        if l.startswith("(s32)") or r.startswith("(s32)"):
            continue
        # every ==/!= on the line (we don't know which one is pointer vs int; s32 casts are neutral)
        line = line[:lo] + f"(s32) {_paren(l)} {m[1]} (s32) {_paren(r)}" + line[hi:]
        done = True
    lines[idx] = line
    return done


def _operand(line, i, step):
    """Span end of the operand next to a binary operator at i (scan direction step)."""
    depth, j = 0, (i - 1 if step < 0 else i)
    while 0 <= j < len(line):
        c = line[j]
        if c in ("(" if step > 0 else ")"):
            depth += 1
        elif c in (")" if step > 0 else "("):
            if depth == 0:
                break
            depth -= 1
        elif depth == 0 and (line.startswith("&&", j - (1 if step < 0 else 0)) or line.startswith("||", j - (1 if step < 0 else 0)) or c in ",;?:"):
            break
        j += step
    if step < 0:
        return j + 1
    return j


def fix_convert_return(lines, idx, msg):
    """`cannot convert `A*' to `M2C_UNK*' in return`: m2c's return type guess; return A *."""
    m = re.search(r"cannot convert `(.+?)\*' to `(?:M2C_UNK|s32|u32|void|s8|u8)\*' in return", msg)
    if not m:
        return False
    j, _ = _enclosing_def(lines, idx)
    if j is None:
        return False
    dm = re.match(r"^((?:static )?)(M2C_UNK|s32|u32|void|s8|u8) \*(\w+)\((.*)$", lines[j])
    if not dm:
        return dm is None and False
    typ = m[1].strip()
    lines[j] = f"{dm[1]}{typ} *{dm[3]}({dm[4]}"
    proto = lines[j].rstrip().rstrip("{").rstrip() + ";"
    CHANGED_PROTOS[dm[3]] = proto[len(dm[1]):] if dm[1] else proto
    return True


def fix_undeclared(lines, idx, msg):
    """`f' undeclared (first use this function)`: C called it with an implicit `int f()`; declare
    `s32 f(...)` (same calling sequence for integer arguments)."""
    m = re.search(r"`\s*(\w+)' undeclared \(first use this function\)", msg)
    if not m or not re.match(r"^(func_[0-9A-F]{8}|\w+_[0-9A-F]{8})$", m[1]):
        return False
    STORE.setdefault("funcs", {}).setdefault(m[1], f"s32 {m[1]}(...);")
    CHANGED_PROTOS.setdefault("", "")
    return True


FIXERS = [fix_too_few, fix_too_many, fix_convert_return, fix_undeclared, fix_convert_arg, fix_convert_passing, fix_convert_assign, fix_ptr_int_compare]


def unify_arity(files, store):
    """m2c definitions of one function with different (pass-through) parameter counts per version are
    different overloads in C++ (callers then miss the C symbol): give every definition and the
    prototype the longest `argN` parameter list (fixers can add parameters to one version's copy)."""
    DEF = re.compile(r"^((?:static )?[\w \*]+?\b)(\w+)\(([^()]*)\)(\s*\{)$", re.M)

    def plist(s):
        ps = [x.strip() for x in structify._split_args(s) if x.strip() not in ("", "void")]
        return ps if all(re.fullmatch(rf"[\w \*]+\barg{i}", x) for i, x in enumerate(ps)) else None
    longest = {}
    for f in files:
        for m in DEF.finditer(f.read_text()):
            ps = plist(m[3])
            if ps is not None and m[2] in store["funcs"] and len(ps) > len(longest.get(m[2], [])):
                longest[m[2]] = ps
    for f in files:
        t = f.read_text()

        def widen(m):
            ps, want = plist(m[3]), longest.get(m[2])
            if ps is None or want is None or len(ps) >= len(want):
                return m[0]
            return f"{m[1]}{m[2]}({', '.join(ps + want[len(ps):])}){m[4]}"
        u = DEF.sub(widen, t)
        if u != t:
            f.write_text(u)
    for name, want in longest.items():
        pm = re.match(rf"^(.*?\b{name})\((.*)\);$", store["funcs"][name])
        if pm and plist(pm[2]) is not None and len(plist(pm[2])) < len(want):
            store["funcs"][name] = f"{pm[1]}({', '.join(want)});"


# ---------------------------------------------------------------- driver

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("module")
    ap.add_argument("--ver", default="100", help="a version of the module (selects the shared source)")
    ap.add_argument("--rounds", type=int, default=6)
    ap.add_argument("--jobs", type=int, default=int(os.environ.get("REGRESS_JOBS", "2")))
    ap.add_argument("--no-build", action="store_true", help="stop after the compile-fix loop")
    ap.add_argument("--keep", action="store_true", help="keep the changes on failure")
    a = ap.parse_args()
    mod = a.module
    if not (ROOT / f"config/{a.ver}/{mod}.yaml").exists():
        have = sorted((p.parent.name for p in ROOT.glob(f"config/*/{mod}.yaml")), key=lambda v: (int(re.match(r"\d+", v)[0]), v))
        if not have:
            sys.exit(f"{mod}: no config")
        a.ver = have[0]
    sd = src_dir(a.ver, mod)
    vers = [a.ver] + [v for v in sharing_versions(a.ver, mod) if v != a.ver]
    files = sorted(sd.glob("*.c"))
    keep = {p: p.read_text() for p in sorted(sd.iterdir()) if p.is_file()}

    def restore():
        for p, t in keep.items():
            p.write_text(t)

    nots = 0
    for f in files:
        t = f.read_text()
        if MARK not in t:
            # only C written for cc1: a unit that is already C++ may use `!` on purpose (xori form)
            t, n = rewrite_not(MARK + "\n" + t)
            nots += n
        f.write_text(t)
    store_p = sd / f"{mod}_decls.json"
    structify.SRC[mod] = sd
    store = __import__("json").loads(store_p.read_text()) if store_p.exists() else {"funcs": {}, "vars": {}, "types": {}}
    STORE.clear()
    STORE.update(store)
    store = STORE
    # C accepts `extern void D;` (only &D is used); C++ doesn't
    for k, v in store.get("vars", {}).items():
        store["vars"][k] = re.sub(r"^extern (volatile )?void (\w+);$", r"extern \1u8 \2;", v)
    unify_arity(files, store)
    structify.write_decls(mod, store)
    print(f"{mod}: {len(files)} units marked C++, {nots} `!(x & K)` rewritten, versions {' '.join(vers)}")

    left = []
    for rnd in range(a.rounds + 1):
        last = rnd == a.rounds  # the extra round only verifies
        jobs = [(f, v) for f in files for v in vers]
        with ThreadPoolExecutor(max(1, a.jobs * 2)) as ex:
            res = list(ex.map(lambda fv: (fv[0], compile_errors(*fv)), jobs))
        errs = {}
        for f, es in res:
            for l, msg in es:
                errs.setdefault(f, {}).setdefault(l, msg)
        n = sum(len(v) for v in errs.values())
        if not n:
            left = []
            break
        fixed = 0
        left = []
        if last:
            left = [(f.name, l, msg) for f, by_line in errs.items() for l, msg in sorted(by_line.items())]
            break
        for f, by_line in errs.items():
            lines = f.read_text().split("\n")
            for l, msg in sorted(by_line.items()):
                if l < 1 or not any(fx(lines, l - 1, msg) for fx in FIXERS):
                    left.append((f.name, l, msg))
                else:
                    fixed += 1
            f.write_text("\n".join(lines))
        unify_arity(files, store)
        CHANGED_PROTOS.setdefault("", "")
        if CHANGED_PROTOS:
            for name, proto in CHANGED_PROTOS.items():
                if name and name in store["funcs"]:
                    store["funcs"][name] = proto
            CHANGED_PROTOS.clear()
            structify.write_decls(mod, store)
        print(f"round {rnd + 1}: {n} error lines, {fixed} fixed")
        if not fixed:
            break
    if left:
        print("compile errors left:")
        for f, l, msg in left[:40]:
            print(f"  {f}:{l}: {msg[:240]}")
        if not a.keep:
            restore()
            print("restored")
        sys.exit(1)
    if a.no_build:
        print("compiles as C++ for every version (not built)")
        return
    env = dict(os.environ, REGRESS_JOBS=str(a.jobs), MAKE_JOBS=os.environ.get("MAKE_JOBS", "2"))
    r = subprocess.run(["tools/regress.sh", "--shared", f"{a.ver}:{mod}"], cwd=ROOT, capture_output=True, text=True, env=env)
    out = sorted(l for l in r.stdout.splitlines() if l.strip())
    bad = [l for l in out if not l.endswith(": OK")]
    print("\n".join(out))
    if bad:
        if not a.keep:
            restore()
            print("restored (mismatch); run with --keep to inspect")
        sys.exit(1)
    print(f"{mod}: C++ in every version, byte-matching")


if __name__ == "__main__":
    main()
