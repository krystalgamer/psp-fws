#!/usr/bin/env python3
"""Turn trivial gcc 3.3 constructor clone pairs of converted classes into C++, per version.

    tools/cxx_ctors.py MODULE [--apply] [--no-build] [-v]

Run after tools/cxx_classes.py: a C2/C1 pair (tools/cxx_groups.py) qualifies in a version when
- it stores the vptr of a class whose destructor is converted there (`Class_X::~Class_X`), and
- its code equals `X::X() {}` compiled with the unit's compiler and flags: only the vptr store
  (no base), or the base-class C2 call then the vptr store (base = the class's declared base);
  the base C2 is mangled already or is a pair of the base class (it keeps its asm/C body and
  just gets the mangled C2/C1 names), and
- its two entries are consecutive among the functions the version compiles.
The two entries become one `X::X() {}` for that version (fwmodel edit), `X();` is declared in the
class, symbols get the mangled C2/C1 names in symbol_addrs and in C compiled by the version.
--apply rebuilds every version (tools/regress.sh --shared) and restores on failure.
"""
import argparse
import json
import os
import re
import subprocess
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import fwmodel as FM  # noqa: E402
import structify  # noqa: E402
from srcdir import sharing_versions, src_dir  # noqa: E402
import importlib.util  # noqa: E402

_spec = importlib.util.spec_from_file_location("cxx_classes", ROOT / "tools/cxx_classes.py")
CC = importlib.util.module_from_spec(_spec)
_spec.loader.exec_module(CC)
CG = CC.CG

CTOR_TEMPLATES = {
    0x10: "class A { public: A(); virtual ~A(); };\nA::A() {}\n",
    0x28: "class B { public: B(); virtual ~B(); };\nclass A : public B { public: A(); virtual ~A(); };\nA::A() {}\n",
}


def ctor_names(cls, sig="v"):
    return [f"_ZN{CC.mangle_cls(cls)}C{k}E{sig}" for k in (2, 1)]


MANGLE = {"s32": "i", "M2C_UNK": "i", "int": "i", "u32": "j", "s16": "s", "u16": "t", "s8": "a", "u8": "h",
          "f32": "f", "void": "v", "char": "c"}


def mangle_params(params):
    """'s32 arg1, void *arg2' -> 'iPv' (None for types we don't mangle)."""
    out = ""
    for prm in [x.strip() for x in params.split(",") if x.strip()]:
        m = re.match(r"^(?:const )?(\w+)\s*(\**)\s*arg\d+$", prm)
        if not m or m[1] not in MANGLE or (m[1] == "void" and not m[2]):
            return None
        out += "P" * len(m[2]) + MANGLE[m[1]]
    return out or "v"


def ctor_body(text, label, structs):
    """m2c C of a C2/C1 -> (params, mangled params, body, base C2 name or None, fields) or None.
    The base ctor call (first statement, `B(arg0);`) and the vptr store go: the compiler emits them."""
    m = re.match(r"^void \w+\((?:struct (\w+) \*|M2C_UNK \*\*|void \*|s32 )arg0((?:, [^)]*)?)\) \{\n(.*)\n\}\n*$",
                 text, re.S)
    if not m:
        return None
    params = m[2][2:] if m[2] else ""
    sig = mangle_params(params)
    if sig is None:
        return None
    lines = m[3].split("\n")
    vp = [i for i, l in enumerate(lines) if re.match(rf"^    (?:arg0->unk0|\*arg0) = (?:\([^)]*\) )?&{label};$", l)]
    if len(vp) != 1:
        return None
    del lines[vp[0]]
    # locals first, then the statements
    k = 0
    while k < len(lines) and (re.match(r"^    [\w ]+\**\s*\w+(?:\[\w+\])?;$", lines[k]) or not lines[k].strip()):
        k += 1
    base = None
    bm = re.match(r"^    (\w+)\((?:\([^()]*\) )?arg0\);$", lines[k]) if k < len(lines) else None
    if bm:
        base = bm[1]
        del lines[k]
    body = "\n".join(lines).rstrip()
    if re.search(r"\barg0->unk0\b|\*arg0\b|\breturn\b", body):
        return None
    fields = {}
    if m[1]:
        for o, f in structs.get(m[1], {}).items():
            if re.search(rf"\barg0->unk{o:X}\b", body):
                if f[0] is None:
                    return None
                fields[o] = f
    if re.search(r"\barg0->unk", body) and not fields:
        return None
    return params, sig, re.sub(r"\barg0\b", "this", body), base, fields


def ctor_shapes(flags, size):
    key = 0x100 + size  # template_shapes caches by (flags, key)
    CC.TEMPLATES[key] = CTOR_TEMPLATES[size]
    return CC.template_shapes(flags, key)


def declare_ctor(text, cls, params=""):
    decl = f"    {cls}({params});"
    if decl in text.split("\n"):
        return text
    return re.sub(rf"(class {cls}\b[^{{]*\{{\npublic:\n)", lambda m: m[1] + decl + "\n", text, count=1)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("module")
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--no-build", action="store_true")
    ap.add_argument("-v", action="store_true")
    ap.add_argument("--nontrivial", action="store_true", help="also ctors with a body (from the C of C2/C1)")
    ap.add_argument("--exclude", default="", help="classes to leave alone (comma-separated)")
    a = ap.parse_args()
    mod = a.module
    have = sorted((p.parent.name for p in ROOT.glob(f"config/*/{mod}.yaml")), key=lambda v: (CC.fwnum(v), v))
    ver = have[0]
    vers = [ver] + [v for v in sharing_versions(ver, mod) if v != ver]
    fv = sorted({CC.fwnum(v) for v in vers})
    sd = src_dir(ver, mod)
    files = sorted(sd.glob("*.c"))
    ents = {f: FM.parse(f.read_text(), fv) for f in files}
    sp = sd / f"{mod}_decls.json"
    store = json.loads(sp.read_text())
    types = store.setdefault("types", {})
    declared = {}  # class -> (types key, base)
    for k, t in types.items():
        for m in re.finditer(r"^class (\w+)(?: : public ([\w:]+))? \{", t, re.M):
            declared[m[1]] = (k, m[2])

    structs = {}
    for t in types.values():
        for m in re.finditer(r"struct (\w+) \{\n(.*?)\n\};", t, re.S):
            structs[m[1]] = CC.struct_fields(m[2])
    reasons, plans, base_renames = Counter(), [], []
    for v in vers:
        n = CC.fwnum(v)
        comp = {f: [(k, e) for k, e in enumerate(es) if n in e.vers and e.kind in ("asm", "cfunc")] for f, es in ents.items()}
        gs = CG.groups(v, mod)
        cls_of = {}  # vptr -> class with a converted dtor
        for g in gs:
            m = CC.MANGLED.match(g["funcs"][0][1])
            if g["kind"] == "dtor" and m and g["vptr"]:
                cls_of[g["vptr"]] = m[2]
        vptr_of = {c: p for p, c in cls_of.items()}
        pair_by_c2 = {g["funcs"][0][1]: g for g in gs if g["kind"] == "pair"}
        for g in gs:
            if g["kind"] != "pair" or g["vptr"] not in cls_of:
                continue
            cls = cls_of[g["vptr"]]
            if not any(f"{cls}::~{cls}()" in e.text for lst in comp.values() for _, e in lst):
                reasons["dtor not C++ (no vtable alias)"] += 1
                continue
            names = [x for _, x in g["funcs"]]
            if all(x.startswith(f"_ZN{CC.mangle_cls(cls)}C") for x in names):
                reasons["done"] += 1
                continue
            if any(x.startswith("_Z") for x in names):
                reasons["other mangled names"] += 1
                continue
            size = g["sizes"][0]
            triv = tuple(g["sizes"]) in ((0x10, 0x10), (0x28, 0x28))
            if (not triv and not a.nontrivial) or cls not in declared:
                reasons["not trivial"] += 1
                continue
            where = None
            for f, lst in comp.items():
                idx = [i for i, (_, e) in enumerate(lst) if e.name in names]
                if len(idx) == 2 and [lst[i][1].name for i in idx] == names and idx[1] == idx[0] + 1:
                    where = (f, [lst[i][0] for i in idx])
                elif idx:
                    where = where or "split"
            if not isinstance(where, tuple):
                reasons["entries not consecutive"] += 1
                continue
            flags = CC.unit_flags(where[0], v)
            if not flags.startswith("cc1plus"):
                reasons["not C++"] += 1
                continue
            base = declared[cls][1]
            nt = None
            if not (triv and ctor_shapes(flags, size) == [list(x) for x in g["shapes"]]):
                if not a.nontrivial:
                    reasons["not trivial"] += 1
                    continue
                es = ents[where[0]]
                nt = next((b for b in (ctor_body(es[k].text, g["vptr_label"], structs) for k in where[1]
                                       if es[k].kind == "cfunc") if b), None)
                if nt is None:
                    reasons["ctor body not in C (or not convertible)"] += 1
                    continue
                have = CC.struct_fields(types[declared[cls][0]])
                if any(o in have and have[o] != f for o, f in nt[4].items()):
                    reasons["field differs from the class's"] += 1
                    continue
            if (nt is None and size == 0x10 and base) or (nt is not None and bool(nt[3]) != bool(base)):
                reasons["base mismatch"] += 1
                continue
            if (nt is None and size == 0x28) or (nt is not None and base):
                b = nt[3] if nt is not None else g["base"]
                if not base:
                    reasons["base mismatch"] += 1
                    continue
                bnew = ctor_names(base) if "::" not in base else [f"_ZN{CC.mangle_cls(base)}C{k}Ev" for k in (2, 1)]
                if b != bnew[0]:
                    bg = pair_by_c2.get(b)
                    if not bg or base not in vptr_of or bg["vptr"] != vptr_of[base] \
                            or any(x.startswith("_Z") for _, x in bg["funcs"]):
                        reasons["base ctor not found"] += 1
                        continue
                    base_renames.append((v, base, bg))
            plans.append((v, cls, g, where, nt))
    ex = set(a.exclude.split(",")) - {""}
    plans = [p for p in plans if p[1] not in ex]
    base_renames = [b for b in base_renames if any(p[0] == b[0] for p in plans)]
    print(f"{mod}: {len(plans)} ctor pairs to convert; " + ", ".join(f"{k} {c}" for k, c in sorted(reasons.items())))
    if a.v:
        for v, cls, g, _, nt in plans:
            print(f"  {v}: {cls}::{cls}({nt[0] if nt else ''})  {' '.join(x for _, x in g['funcs'])}")
    if not a.apply or not plans:
        return

    keep = {q: q.read_text() for q in sorted(sd.iterdir()) if q.is_file()}
    keepcfg = {}
    renames = {}  # version number -> {old: new}

    def rename_cfg(v, funcs, new):
        n = CC.fwnum(v)
        renames.setdefault(n, {}).update(dict(zip([x for _, x in funcs], new)))
        sa, fs = ROOT / f"config/{v}/symbol_addrs.{mod}.txt", ROOT / f"config/{v}/func_starts.{mod}.txt"
        for q in (sa, fs):
            if q.exists() and q not in keepcfg:
                keepcfg[q] = q.read_text()
        st, ft = sa.read_text(), (fs.read_text() if fs.exists() else "")
        for (addr, old), mn in zip(funcs, new):
            st = re.sub(rf"^{old}\s*=.*\n", "", st, flags=re.M)
            ft = re.sub(rf"^{old}\s*=.*\n", "", ft, flags=re.M)
            st = st.rstrip("\n") + f"\n{mn} = 0x{addr:08X}; // type:func\n"
        sa.write_text(st)
        if fs.exists():
            fs.write_text(ft)

    done_base = set()
    for v, base, bg in base_renames:
        if (v, base) in done_base:
            continue
        done_base.add((v, base))
        rename_cfg(v, bg["funcs"], ctor_names(base))
        k, _ = declared[base]
        types[k] = declare_ctor(types[k], base)
    for v, cls, g, (f, _), nt in plans:
        n = CC.fwnum(v)
        es = ents[f]
        names = [x for _, x in g["funcs"]]
        idxs = [k for k, e in enumerate(es) if n in e.vers and e.kind in ("asm", "cfunc") and e.name in names]
        assert [es[k].name for k in idxs] == names, (cls, v)
        for k in idxs:
            es[k].vers = es[k].vers - {n}
        params, sig, body, _, fields = nt if nt else ("", "v", "", None, {})
        body = body + "\n" if body.strip() else ""
        es.insert(idxs[0], FM.Entry(frozenset([n]), "cfunc", f"{cls}_ctor", f"{cls}::{cls}({params}) {{\n{body}}}\n"))
        if fields:
            k, _ = declared[cls]
            fs = CC.struct_fields(types[k])
            add = [f[1] for o, f in sorted(fields.items()) if o not in fs]
            if add:
                types[k] = types[k].replace("public:\n", "public:\n" + "".join(f"    {d}\n" for d in add), 1)
        rename_cfg(v, g["funcs"], ctor_names(cls, sig))
        k, base = declared[cls]
        types[k] = declare_ctor(types[k], cls, params)
        if base and base in declared:
            bk, _ = declared[base]
            types[bk] = declare_ctor(types[bk], base)
    for f, es in ents.items():
        out = []
        for e in es:
            hits = any(n in e.vers and any(re.search(rf"\b{o}\b", e.text) for o in m) for n, m in renames.items())
            if not hits or e.kind == "rodata":
                out.append(e)
                continue
            groups = {}
            for n in e.vers:
                groups.setdefault(tuple(sorted(renames.get(n, {}).items())), set()).add(n)
            for key, vs in groups.items():
                txt = e.text
                for o, nn in key:
                    txt = re.sub(rf"\b{o}\b", nn, txt)
                out.append(FM.Entry(frozenset(vs), e.kind, e.name, txt))
        f.write_text(FM.emit(FM.dedupe(out), fv))
    for m in renames.values():
        for o, nn in m.items():
            if o in store["funcs"] and nn not in store["funcs"]:
                store["funcs"][nn] = re.sub(rf"\b{o}\b", nn, store["funcs"][o])
    bad = CC.relayout(types)
    if bad:
        for q, txt in list(keep.items()) + list(keepcfg.items()):
            q.write_text(txt)
        raise SystemExit(f"fields overlap the base's in {', '.join(bad)}; restored")
    structify.SRC[mod] = sd
    structify.write_decls(mod, store)
    print(f"converted {len(plans)} ctor pairs in {len(renames)} versions")
    r = subprocess.run([sys.executable, str(ROOT / "tools/to_cxx.py"), mod, "--ver", ver, "--keep", "--no-build"],
                       cwd=ROOT, capture_output=True, text=True)

    def restore():
        for q, txt in list(keep.items()) + list(keepcfg.items()):
            q.write_text(txt)
        print("restored")
        sys.exit(1)
    if r.returncode:
        print("\n".join(r.stdout.splitlines()[-6:]))
        restore()
    if a.no_build:
        return
    env = dict(os.environ, REGRESS_JOBS=os.environ.get("REGRESS_JOBS", "2"), MAKE_JOBS=os.environ.get("MAKE_JOBS", "2"))
    r = subprocess.run(["tools/regress.sh", "--shared", f"{ver}:{mod}"], cwd=ROOT, capture_output=True, text=True, env=env)
    bad = [l for l in r.stdout.splitlines() if l.strip() and not l.endswith(": OK")]
    if bad:
        print("\n".join(sorted(bad)[:12]))
        culprits = set()
        for l in bad:
            m = re.match(r"^(\w+):\S+: FAIL .*MISMATCH", l)
            if m:
                cm = re.match(r"^(\w+)::\1\(", CC.first_mismatch(m[1], mod) or "")
                if cm:
                    culprits.add(cm[1])
        if culprits:
            print("mismatching classes: " + " ".join(sorted(culprits)))
        restore()
    print(f"{mod}: every version byte-matching")


if __name__ == "__main__":
    main()
