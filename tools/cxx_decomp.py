#!/usr/bin/env python3
"""Decompile still-asm methods of a module's classes with m2c, `this` typed as the class.

    tools/cxx_decomp.py VER MODULE [--classes N] [--max-size 0x200] [--fields] [--apply] [-v]

Methods per class come from tools/cxx_layout.py (vtable entries, vptr builders, mangled names); a
method shared by several classes (inherited) goes to the class with the fewest methods. For each
asm method (smallest first) m2c runs with the module's C context where the method's first parameter
is `Class_X *` (structify.c_mirrors gives m2c the class's fields), so accesses come out as
`arg0->unkN`; `M2C_FIELD(arg0, T *, N)` left over becomes `arg0->unkN` when the class has that field
with type T. The draft is compiled with the module's compiler/setting (cc1plus) and kept only on an
exact match (relocations masked); --apply inserts the matches with tools/hand.py (every version
compiling the entry, shared regress) together with their prototypes.
--fields first gives the classes the fields tools/cxx_layout.py observes (scalar, no conflicts,
after the base's fields), so m2c sees them (declarations only: existing code is unchanged).
"""
import argparse
import importlib.util
import json
import re
import subprocess
import sys
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import auto_decomp as AD  # noqa: E402
import structify  # noqa: E402


def load(name, path):
    spec = importlib.util.spec_from_file_location(name, ROOT / path)
    m = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(m)
    return m


L = load("cxx_layout", "tools/cxx_layout.py")
CC = load("cxx_classes", "tools/cxx_classes.py")

TYPES = {1: {"s8", "u8"}, 2: {"s16", "u16"}, 4: {"s32", "u32", "f32"}}


def class_methods(ver, mod, n):
    V = L.Version(ver, mod)
    loaders = V.vptr_loaders()
    rows = []
    for g in V.groups():
        m = re.match(r"^_ZN(\d+)(Class_\w+?)D2Ev$", g["funcs"][0][1])
        if g["kind"] == "dtor" and m:
            _, ms = L.methods(V, m[2], loaders)
            rows.append((len(ms), m[2], ms))
    rows.sort(reverse=True)
    owner = {}
    for k, cls, ms in rows[:n]:
        for a in ms:
            if a not in owner or k < owner[a][0]:
                owner[a] = (k, cls)
    return V, {V.starts[a]: (cls, V.end[a] - a) for a, (k, cls) in owner.items()}


def add_fields(mod, ver, store, classes, vers):
    """Observed scalar fields (cxx_layout) into generated class declarations."""
    types = store["types"]
    declared = {}
    for k, t in types.items():
        for m in re.finditer(r"^class (\w+)(?: : public ([\w:]+))? \{", t, re.M):
            declared[m[1]] = (k, m[2])
    n = 0
    for cls in classes:
        if cls not in declared or not any(g in types[declared[cls][0]] for g in CC.GENERATED):
            continue
        obs, _ = L.layout(mod, cls, vers)
        rows = L.report(obs)
        base_end, b = 4, declared[cls][1]
        while b in declared:
            for o, (sz, d) in CC.struct_fields(types[declared[b][0]]).items():
                base_end = max(base_end, o + (sz or 4))
            b = declared[b][1]
        k = declared[cls][0]
        have = CC.struct_fields(types[k])
        add = []
        end = base_end
        for r in rows:
            o, sizes, ty = r["off"], r["sizes"], r["type"]
            if o < end or r["flag"] or len(sizes) != 1 or ty not in TYPES.get(sizes[0], ()) or o % sizes[0]:
                continue
            end = o + sizes[0]
            if o in have:
                continue
            add.append(f"    {ty} unk{o:X};")
        if add:
            types[k] = types[k].replace("public:\n", "public:\n" + "\n".join(add) + "\n", 1)
            n += len(add)
    bad = CC.relayout(types)
    return n, bad


def retype(header, name, cls):
    """The method's prototype in the C context with `Class_X *` first (m2c reads the context)."""
    pat = re.compile(rf"^(.*?\b{name}\()([^,)]*)([,)].*;)$", re.M)
    m = pat.search(header)
    if not m:
        return header + f"\nvoid {name}({cls} *arg0);\n", False
    first = m[2].strip()
    if first in ("", "void", "..."):
        return header, False
    return header[:m.start()] + m[1] + f"{cls} *arg0" + m[3] + header[m.end():], True


TYPEWORDS = {"s8", "u8", "s16", "u16", "s32", "u32", "f32", "int", "char", "short", "long", "float", "bool",
             "unsigned", "signed", "void", "M2C_UNK", "const"}


def keep_proto(body, proto, cls):
    """Define the method with the store's prototype (callers keep their types) and view `this` as the
    class through a copy: `T f(P0 cxxthis, ...) { Class_X *arg0 = (Class_X *) cxxthis; ...`."""
    pm = re.match(r"^(.*?)\b(\w+)\((.*)\);$", proto.strip())
    bm = re.match(r"^(.*?)\b(\w+)\((.*?)\) \{\n", body)
    if not pm or not bm:
        return None
    pps = [x.strip() for x in pm[3].split(",")] if pm[3].strip() not in ("", "void") else []
    bps = [x.strip() for x in bm[3].split(",")] if bm[3].strip() not in ("", "void") else []
    if not pps or len(pps) != len(bps):
        return None
    names = []
    for i, pp in enumerate(pps):
        pm2 = re.match(r"^(.*?[\s*])(\w+)$", pp)
        ty = pm2[1].strip() if pm2 and pm2[2] not in TYPEWORDS else pp
        names.append(f"{ty} {'cxxthis' if i == 0 else f'arg{i}'}".replace("* ", "*") if not ty.endswith("*")
                     else f"{ty}{'cxxthis' if i == 0 else f'arg{i}'}")
    head = f"{pm[1].strip()} {pm[2]}({', '.join(names)}) {{\n    {cls} *arg0 = ({cls} *) cxxthis;\n"
    return head + body[bm.end():]


def fields_of(header, cls):
    m = re.search(rf"typedef struct {cls} \{{\n(.*?)\n\}} {cls};", header, re.S)
    out = {}
    if m:
        for fm in re.finditer(r"^\s*(.+?)\s*\bunk([0-9A-F]+);", m[1], re.M):
            out[int(fm[2], 16)] = fm[1].strip()
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("version")
    ap.add_argument("module")
    ap.add_argument("--classes", type=int, default=20)
    ap.add_argument("--max-size", type=lambda x: int(x, 0), default=0x200)
    ap.add_argument("--fields", action="store_true")
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("-v", action="store_true")
    a = ap.parse_args()
    ver, mod = a.version, a.module
    V, meth = class_methods(ver, mod, a.classes)
    m = AD.Module(ver, mod)
    if a.fields:
        vers = [v for v in L.sharing_versions(ver, mod)]
        n, bad = add_fields(mod, ver, m.store, sorted({c for c, _ in meth.values()}), vers)
        if bad:
            raise SystemExit(f"fields overlap in {bad}")
        m.write_decls()
        print(f"{n} observed fields added to the classes")
    import fwblocks as FB
    asm = set()
    for f in m.files:
        asm |= set(FB.asm_names(f.read_text(), ver, m.fwvers)) if m.shared else set(
            x[2] for x in AD.INC.finditer(f.read_text()))
    asm &= set(meth) & set(m.funcs)
    todo = sorted((nm for nm in asm if meth[nm][1] <= a.max_size and not re.search(r"[CD][0-2]Ev$", nm)),
                  key=lambda nm: meth[nm][1])
    header = m.header()
    out_dir = ROOT / "tmp/cxx_decomp" / mod
    out_dir.mkdir(parents=True, exist_ok=True)
    matched = []
    for nm in todo:
        cls = meth[nm][0]
        compiler, setting = AD.Module.file_setting(m.file_of(nm))
        setting = setting.split(" ", 1)[1] if setting.startswith(compiler + " ") else setting
        ctx, typed = retype(header, nm, cls)
        res = None
        for target in AD.M2C_TARGETS:
            out = AD.run_m2c(m, nm, ctx, target)
            if not out:
                continue
            decls, body = AD.split_m2c(out, nm)
            if body is None or re.search(r"\b(sp|subroutine_arg\d+|saved_reg_\w+|unksp\w*|goto)\b", body):
                continue
            fl = fields_of(ctx, cls)
            body = body.replace("arg0->vptr", "M2C_FIELD(arg0, void **, 0)")  # the C view's vptr word
            body = re.sub(r"M2C_FIELD\(arg0, ([\w ]+?) \*, (0x[0-9A-Fa-f]+|\d+)\)",
                          lambda mm: f"arg0->unk{int(mm[2], 0):X}" if fl.get(int(mm[2], 0)) == mm[1] else mm[0], body)
            new_decls = [d for d in decls if not re.search(rf"\b{nm}\(", d)]
            if nm in m.store["funcs"] and typed:
                kb = keep_proto(body, structify.cxx_proto(m.store["funcs"][nm]), cls)
                if kb is None:
                    continue
                body = kb
            text = header + "\n" + "\n".join(new_decls) + "\n" + body
            words, err = AD.compile_words(text, compiler, setting)
            tw = m.target_words(nm)
            if words is not None and words == tw:
                res = (body, new_decls)
                break
            if a.v:
                import difflib
                sc = "compile error: " + err.strip().splitlines()[-1][:100] if words is None else \
                    max(len(tw), len(words)) - sum(b.size for b in difflib.SequenceMatcher(None, tw, words, autojunk=False).get_matching_blocks())
                print(f"    {target}: {sc}")
                (out_dir / f"{nm}.try.c").write_text(body)
        status = "MATCH" if res else "-"
        if a.v or res:
            print(f"{nm:40} {meth[nm][1]:#6x} {cls:24} {status}")
        if res:
            body, new_decls = res
            sig = body.split("{", 1)[0].strip() + ";"
            (out_dir / f"{nm}.c").write_text(body)
            (out_dir / f"{nm}.h").write_text("\n".join(new_decls + [sig]) + "\n")
            matched.append(nm)
    print(f"{mod} {ver}: {len(matched)}/{len(todo)} methods match (tmp/cxx_decomp/{mod})")
    if a.apply and matched:
        decl = out_dir / "_all.h"
        lines = []
        for nm in matched:
            for l in (out_dir / f"{nm}.h").read_text().splitlines():
                if l not in lines:
                    lines.append(l)
        decl.write_text("\n".join(lines) + "\n")
        r = subprocess.run([sys.executable, str(ROOT / "tools/hand.py"), ver, mod,
                            *[str(out_dir / f"{nm}.c") for nm in matched], "--decls", str(decl)],
                           cwd=ROOT, capture_output=True, text=True)
        print("\n".join((r.stdout + r.stderr).splitlines()[-15:]))


if __name__ == "__main__":
    main()
