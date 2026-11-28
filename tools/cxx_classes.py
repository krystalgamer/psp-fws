#!/usr/bin/env python3
"""Turn trivial gcc 3.3 destructor clone groups into C++ classes, per version.

    tools/cxx_classes.py MODULE [--apply] [--limit N] [--no-build] [-v]

Groups come from tools/cxx_groups.py (clustered across versions by shape, names, base
call, vptr label). A group qualifies for a version when it is a virtual destructor triple
D2/D1/D0 whose D2 is only `this->vptr = &vtable` (sizes 0x10/0x10/0x28) or that plus the
base-class destructor call (0x28/0x28/0x38), and in that version
- its three entries (INCLUDE_ASM or C, any names) are consecutive among the functions the
  version compiles (other versions' blocks and rodata in between are fine);
- the base call is a mangled destructor (`_ZN3paf8PhWidgetD2Ev` -> paf::PhWidget), or the D2 of
  another converted group (bases first), the same class in every version;
- the vptr label is defined in some unit of the version (INCLUDE_RODATA, or inside the rodata
  of an INCLUDE_ASM'd function): `_ZTV<class> = <label> - 8` goes into that unit, in a block
  compiled by exactly the versions that use it (fwmodel conditions, kept by add_version).
The three entries become one `Class_X::~Class_X() {}` for those versions (fwmodel edit: other
versions keep their entries), the symbols get the mangled D2/D1/D0 names in each version's
symbol_addrs, references to the old names in C compiled by those versions are renamed. Groups
already converted in some versions (mangled names) are completed for the other versions.
--apply rebuilds every version (tools/regress.sh --shared) and restores on failure.
"""
import argparse
import importlib.util
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

spec = importlib.util.spec_from_file_location("cxx_groups", ROOT / "tools/cxx_groups.py")
CG = importlib.util.module_from_spec(spec)
spec.loader.exec_module(CG)

MANGLED = re.compile(r"^_ZN(\d+)(Class_\w+?)D[012]Ev$")
TRIVIAL = ((0x10, 0x10, 0x28), (0x28, 0x28, 0x38))


TEMPLATES = {
    0x10: "class A { public: virtual ~A(); };\nA::~A() {}\n",
    0x28: "class B { public: virtual ~B(); };\nclass A : public B { public: virtual ~A(); };\nA::~A() {}\n",
}
_tpl = {}


def template_shapes(flags, size):
    """Opcode shapes of D2/D1/D0 of a trivial dtor compiled with a unit's compiler and flags."""
    key = (flags, size)
    if key not in _tpl:
        from elftools.elf.elffile import ELFFile
        d = ROOT / "tmp/scratch/cxx_tpl"
        d.mkdir(parents=True, exist_ok=True)
        cc, *fl = flags.split()
        src, asm, obj = d / f"t{size:x}.ii", d / f"t{size:x}.s", d / f"t{size:x}.o"
        src.write_text(TEMPLATES[size])
        subprocess.run([str(ROOT / "tmp/toolchains/bin" / cc), *fl, "-G0", "-quiet", "-o", str(asm), str(src)],
                       check=True, cwd=ROOT)
        subprocess.run([str(ROOT / "tmp/toolchains/bin/psp-as-1.3.1"), "-EL", "-G0", "-mulsw", "-o", str(obj), str(asm)],
                       check=True, cwd=ROOT)  # as the Makefile assembles C
        with open(obj, "rb") as fh:
            e = ELFFile(fh)
            text = e.get_section_by_name(".text").data()
            syms = sorted((s["st_value"], s.name) for s in e.get_section_by_name(".symtab").iter_symbols()
                          if s["st_info"]["type"] == "STT_FUNC")
        ws = [int.from_bytes(text[i:i + 4], "little") for i in range(0, len(text), 4)]
        bounds = [a for a, _ in syms] + [len(text)]
        _tpl[key] = [list(CG.shape_of(ws[a // 4:z // 4])) for a, z in zip(bounds, bounds[1:])]
    return _tpl[key]


_flags = {}


def unit_flags(f, v):
    if (f, v) not in _flags:
        _flags[(f, v)] = subprocess.run([sys.executable, str(ROOT / "tools/cc_of.py"), str(f), v],
                                        capture_output=True, text=True, cwd=ROOT).stdout.strip()
    return _flags[(f, v)]


SCALAR = {"s8": 1, "u8": 1, "s16": 2, "u16": 2, "s32": 4, "u32": 4, "f32": 4}


def struct_fields(text):
    """{offset: (size, decl)} of the `unkN` fields of an m2c struct or a generated class body."""
    out = {}
    for m in re.finditer(r"^\s*(.+?)\s*\bunk([0-9A-F]+)(?:\[(0x[0-9A-Fa-f]+|\d+)\])?;", text, re.M):
        ty, off, n = m[1].strip(), int(m[2], 16), int(m[3], 0) if m[3] else 1
        size = 4 if ty.endswith("*") else SCALAR.get(ty)
        out[off] = (None if size is None else size * n, m[0].strip())
    return out


def dtor_body(text, label, structs):
    """m2c C of a non-trivial D2/D1 -> (body of `X::~X()`, base D2 name or None, {offset: field}) or
    None: the vptr store of `label` goes (the compiler emits it), a final `B(arg0);` is the base
    destructor, `arg0` becomes `this` (fields from m2c's struct of arg0)."""
    m = re.match(r"^void \w+\((?:struct (\w+) \*|M2C_UNK \*\*)arg0\) \{\n(.*)\n\}\n*$", text, re.S)
    if not m:
        return None
    lines = m[2].split("\n")
    vp = [i for i, l in enumerate(lines) if re.match(rf"^    (?:arg0->unk0|\*arg0) = (?:\([^)]*\) )?&{label};$", l)]
    if len(vp) != 1:
        return None
    del lines[vp[0]]
    while lines and not lines[-1].strip():
        lines.pop()
    base = None
    bm = re.match(r"^    (\w+)\((?:\([^()]*\) )?arg0\);$", lines[-1]) if lines else None
    if bm:
        base = bm[1]
        lines.pop()
    body = "\n".join(lines)
    if re.search(r"\barg0->unk0\b|\*arg0\b|_ZdlPv|\breturn\b", body) or not body.strip():
        return None
    fields = {}
    if m[1]:
        st = structs.get(m[1], {})
        for o, f in st.items():
            if re.search(rf"\barg0->unk{o:X}\b", body):
                if f[0] is None:
                    return None
                fields[o] = f
    if re.search(r"\barg0->unk", body) and not fields:
        return None
    body = re.sub(r"\barg0\b", "this", body)
    return body, base, fields


def fwnum(v):
    return int(re.match(r"\d+", v)[0])


def mangle_cls(qual):
    return "".join(f"{len(p)}{p}" for p in qual.split("::"))


def dtor_names(cls):
    return [f"_ZN{mangle_cls(cls)}D{k}Ev" for k in (2, 1, 0)]


def vtable_name(cls):
    return f"_ZTV{mangle_cls(cls)}"


def demangled_class(dname):
    dm = structify._demangle(dname)
    m = re.match(r"^(.*)::~(\w+)\(\)$", dm)
    return m[1] if m else None


def migrate_aliases(files, ents, fv):
    """Older runs put `_ZTV` aliases at the end of a unit under an explicit version list; move
    each next to the vtable label's INCLUDE_RODATA in every version it selects."""
    moved = 0
    for f in files:
        for e in list(ents[f]):
            ms = list(re.finditer(r'/\* vtable of \w+ \(data\) \*/\n(__asm__\("\.globl (\w+)\\n\w+ = (\w+) - 8\\n"\);\n)', e.text))
            if e.kind != "other" or not ms:
                continue
            ents[f].remove(e)
            for m in ms:
                asm, vt, label = m[1], m[2], m[3]
                for n in e.vers:
                    for g, es in ents.items():
                        pos = next((k + 1 for k, x in enumerate(es) if x.kind == "rodata" and x.name == label and n in x.vers), None)
                        if pos is not None:
                            es.insert(pos, FM.Entry(frozenset([n]), "alias", vt, asm))
                            break
                    else:
                        raise SystemExit(f"{vt}: no INCLUDE_RODATA of {label} for {n}")
                moved += 1
    return moved


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("module")
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--no-build", action="store_true")
    ap.add_argument("-v", action="store_true")
    ap.add_argument("--migrate", action="store_true", help="only move old version-listed vtable aliases")
    ap.add_argument("--nontrivial", action="store_true", help="also dtors with a body (from the C of D2/D1)")
    a = ap.parse_args()
    mod = a.module
    have = sorted((p.parent.name for p in ROOT.glob(f"config/*/{mod}.yaml")), key=lambda v: (fwnum(v), v))
    ver = have[0]
    vers = [ver] + [v for v in sharing_versions(ver, mod) if v != ver]
    fv = sorted({fwnum(v) for v in vers})
    sd = src_dir(ver, mod)
    files = sorted(sd.glob("*.c"))
    ents = {f: FM.parse(f.read_text(), fv) for f in files}
    if a.migrate:
        n = migrate_aliases(files, ents, fv)
        for f in files:
            f.write_text(FM.emit(FM.dedupe(ents[f]), fv))
        print(f"{mod}: {n} vtable aliases moved next to their labels")
        return
    per = {v: CG.groups(v, mod) for v in vers}
    clusters = [c for c in CG.cluster(per, vers) if c["key"][0] == "dtor"]
    # any dtor group (trivial or not) by (version, D2 name), and a class name per cluster: a base
    # class whose own dtor stays asm/C still gets its mangled names, so derived dtors can call it
    cname, group_of = {}, {}
    for ci, c in enumerate(clusters):
        nm = None
        for g in c["by"].values():
            m = MANGLED.match(g["funcs"][0][1])
            if m:
                nm = m[2]
        g0 = next(iter(c["by"].values()))
        cname[ci] = nm or ("Class_" + g0["vptr_label"].replace("D_", "") if g0["vptr_label"] else None)
        for v, g in c["by"].items():
            group_of[(v, g["funcs"][0][1])] = (ci, g)
    asm_bases = {}  # class -> {version: group}
    # vtable label names are shared across versions by different vtables now and then: a class name
    # that two clusters would get is ambiguous, neither may be converted or used as a base
    taken = Counter(n for n in cname.values() if n)
    ambiguous = {n for n, k in taken.items() if k > 1}

    def compiled(v):
        """[(file, index, entry)] of the functions version v compiles, in order (per file)."""
        n = fwnum(v)
        return {f: [(k, e) for k, e in enumerate(es) if n in e.vers and e.kind in ("asm", "cfunc")] for f, es in ents.items()}
    comp = {v: compiled(v) for v in vers}
    labels_in = {}  # (v, label) -> file where it is defined for v

    def label_unit(v, label):
        key = (v, label)
        if key in labels_in:
            return labels_in[key]
        n = fwnum(v)
        out = None
        for f, es in ents.items():
            if any(e.kind == "rodata" and e.name == label and n in e.vers for e in es):
                out = f
                break
        if out is None:  # label inside a function's migrated rodata (.s of an INCLUDE_ASM entry)
            for s in (ROOT / f"tmp/asm/{v}/{mod}/nonmatchings").glob("*/*.s"):
                if re.search(rf"^dlabel {label}$", s.read_text(), re.M):
                    for f, lst in comp[v].items():
                        if f.stem == s.parent.name and any(e.name == s.stem for _, e in lst):
                            out = f
                    break
        labels_in[key] = out
        return out

    # per cluster and version: qualification
    reasons, plans = Counter(), []
    store0 = json.loads((sd / f"{mod}_decls.json").read_text())
    structs = {}
    for t in store0.get("types", {}).values():
        for m in re.finditer(r"struct (\w+) \{\n(.*?)\n\};", t, re.S):
            structs[m[1]] = struct_fields(m[2])
    for c in clusters:
        g0 = next(iter(c["by"].values()))
        sizes = tuple(g0["sizes"])
        nt = sizes not in TRIVIAL
        if nt and not a.nontrivial:
            reasons["not trivial"] += 1
            continue
        cls = None
        for g in c["by"].values():
            m = MANGLED.match(g["funcs"][0][1])
            if m:
                cls = m[2]
        cls = cls or "Class_" + (g0["vptr_label"] or "").replace("D_", "")
        todo, why = {}, Counter()
        for v, g in c["by"].items():
            names = [n for _, n in g["funcs"]]
            if all(MANGLED.match(n) for n in names) and (not nt or any(
                    e.kind == "cfunc" and re.search(r"(\w+)::~\1\(\)", e.text) and e.name == MANGLED.match(names[0])[2]
                    for lst in comp[v].values() for _, e in lst)):
                continue  # done (a non-trivial base with mangled names may still be asm)
            if any(n.startswith("_Z") and not MANGLED.match(n) for n in names):
                why["real (exported) names"] += 1
                continue
            if tuple(g["sizes"]) != sizes or not g["vptr"] or not g["vtable_zero"] or not g["vptr_label"]:
                why["vtable"] += 1
                continue
            where = None
            for f, lst in comp[v].items():
                idx = [i for i, (_, e) in enumerate(lst) if e.name in names]
                if len(idx) == 3 and [lst[i][1].name for i in idx] == names and idx == list(range(idx[0], idx[0] + 3)):
                    where = (f, [lst[i][0] for i in idx])
                elif idx:
                    where = where or "split"
            if not isinstance(where, tuple):
                why["entries not consecutive" if where == "split" else "entries not found"] += 1
                continue
            flags = unit_flags(where[0], v)
            body = None
            if nt:
                # D0 = D1 inlined + operator delete: a third function that only calls delete
                # somewhere (a list-freeing dtor next to it) is no D0
                cl = g.get("calls") or []
                nbr = [sum(1 for w in sh if (w >> 26) in (1, 4, 5, 6, 7, 20, 21, 22, 23)) for sh in g["shapes"]]
                if len(cl) != 3 or not cl[2] or cl[2][:-1] != cl[0] or cl[2][-1] not in g["delete"] \
                        or nbr[2] != nbr[0] or g["sizes"][2] - g["sizes"][0] > 0x30:
                    why["not a D2/D1/D0 triple"] += 1
                    continue
                es = ents[where[0]]
                cs = [es[k] for k in where[1][:2] if es[k].kind == "cfunc"]
                body = next((b for b in (dtor_body(e.text, g["vptr_label"], structs) for e in cs) if b), None)
                if not flags.startswith("cc1plus") or body is None:
                    why["dtor body not in C (or not convertible)"] += 1
                    continue
            elif not flags.startswith("cc1plus") or template_shapes(flags, sizes[0]) != [list(x) for x in g["shapes"]]:
                why["code differs from the unit's compiler"] += 1
                continue
            lu = label_unit(v, g["vptr_label"])
            if lu is None:
                why["vtable label not found"] += 1
                continue
            todo[v] = {"names": names, "where": where, "label": g["vptr_label"], "label_unit": lu,
                       "base": body[1] if nt else g["base"], "funcs": g["funcs"],
                       "body": body[0] if nt else "", "fields": body[2] if nt else {}}
        if not todo:
            if why:
                reasons[max(why, key=why.get)] += 1
            continue
        if why:
            reasons["some versions skipped"] += 1
        fields = {}
        for t in todo.values():
            for o, f in t["fields"].items():
                if fields.setdefault(o, f) != f:
                    fields = None
                    break
            if fields is None:
                break
        if fields is None:
            reasons["field types differ between versions"] += 1
            continue
        plans.append({"cls": cls, "sizes": sizes, "todo": todo, "done": [v for v in c["by"] if v not in todo],
                      "nt": nt, "fields": fields})
    # unique class names; bases
    dup = Counter(p["cls"] for p in plans)
    for p in [p for p in plans if dup[p["cls"]] > 1 or p["cls"] in ambiguous]:
        plans.remove(p)
        reasons["vtable shared by groups"] += 1
    d2_of = {}  # (version, D2 name) -> plan
    for p in plans:
        for v, t in p["todo"].items():
            d2_of[(v, t["names"][0])] = p
    ok, state = [], {}

    def resolve(p, depth=0):
        if id(p) in state:
            return state[id(p)]
        state[id(p)] = None
        if p["sizes"][0] == 0x10 and not p["nt"]:
            p["base_cls"] = None
            state[id(p)] = True
            return True
        bases = set()
        for v, t in p["todo"].items():
            b = t["base"]
            if p["nt"] and b is None:
                bases.add("")
                continue
            if b and (v, b) in d2_of and depth < 20 and resolve(d2_of[(v, b)], depth + 1):
                bases.add(d2_of[(v, b)]["cls"])
            elif b and b.startswith("_Z") and demangled_class(b):
                bases.add(demangled_class(b))
            elif b and (v, b) in group_of and cname[group_of[(v, b)][0]] and group_of[(v, b)][1]["vtable_zero"] \
                    and cname[group_of[(v, b)][0]] not in ambiguous:
                ci, g = group_of[(v, b)]
                bases.add(cname[ci])
                asm_bases.setdefault(cname[ci], {})[v] = g
            else:
                bases.add(None)
        if len(bases) != 1 or None in bases:
            state[id(p)] = False
            return False
        p["base_cls"] = bases.pop() or None
        state[id(p)] = True
        return True
    # a class declared already (by an earlier run, for other versions) must keep its base
    declared = {}
    for t in json.loads((sd / f"{mod}_decls.json").read_text()).get("types", {}).values():
        for m in re.finditer(r"^class (\w+)(?: : public ([\w:]+))? \{", t, re.M):
            declared[m[1]] = m[2]
    for p in plans:
        if not resolve(p):
            reasons["base not a class"] += 1
        elif p["cls"] in declared and declared[p["cls"]] != p["base_cls"]:
            reasons["declared with another base"] += 1
        else:
            ok.append(p)
    ok.sort(key=lambda p: (p["base_cls"] or "") in {q["cls"] for q in ok})  # bases first in the decls
    if a.limit:
        ok = ok[:a.limit]
    total = len(clusters)
    trivial = total - reasons["not trivial"] if not a.nontrivial else sum(
        1 for c in clusters if tuple(next(iter(c["by"].values()))["sizes"]) in TRIVIAL)
    already = sum(1 for c in clusters if all(all(MANGLED.match(n) for _, n in g["funcs"]) for g in c["by"].values()))
    print(f"{mod}: {total} dtor groups, {trivial} trivial, {already} done, {len(ok)} to convert; skipped: "
          + ", ".join(f"{k} {n}" for k, n in sorted(reasons.items())))
    if a.v:
        for p in ok:
            print(f"  {p['cls']} : {p['base_cls'] or '-'}  versions {' '.join(sorted(p['todo'], key=fwnum))}")
    if not a.apply or not ok:
        return

    keep = {q: q.read_text() for q in sorted(sd.iterdir()) if q.is_file()}
    keepcfg = {}
    sp = sd / f"{mod}_decls.json"
    store = json.loads(sp.read_text())
    types = store.setdefault("types", {})
    pre = store.setdefault("cxx_prelude", [])
    if "#pragma interface" not in pre:
        pre.append("#pragma interface")
    paf_text = (ROOT / "include/paf.h").read_text() + (ROOT / "include/vsh.h").read_text()
    renames = {}  # version number -> {old: new}
    used_bases = {p["base_cls"] for p in ok}
    plan_cls = {p["cls"] for p in ok}
    for bcls, byv in asm_bases.items():
        if bcls not in used_bases or bcls in plan_cls:
            continue
        types.setdefault(bcls, f"#ifdef __cplusplus\n/* dtor still asm/m2c (not trivial) */\nclass {bcls} {{\npublic:\n"
                               f"    virtual ~{bcls}();\n}};\n#endif")
        new = dtor_names(bcls)
        for v, g in byv.items():
            if all(MANGLED.match(n) for _, n in g["funcs"]):
                continue
            n = fwnum(v)
            renames.setdefault(n, {}).update(dict(zip([x for _, x in g["funcs"]], new)))
            for q in (ROOT / f"config/{v}/symbol_addrs.{mod}.txt", ROOT / f"config/{v}/func_starts.{mod}.txt"):
                if q.exists() and q not in keepcfg:
                    keepcfg[q] = q.read_text()
            sa, fs = ROOT / f"config/{v}/symbol_addrs.{mod}.txt", ROOT / f"config/{v}/func_starts.{mod}.txt"
            st, ft = sa.read_text(), (fs.read_text() if fs.exists() else "")
            for (addr, old), mn in zip(g["funcs"], new):
                st = re.sub(rf"^{old}\s*=.*\n", "", st, flags=re.M)
                ft = re.sub(rf"^{old}\s*=.*\n", "", ft, flags=re.M)
                st = st.rstrip("\n") + f"\n{mn} = 0x{addr:08X}; // type:func\n"
            sa.write_text(st)
            if fs.exists():
                fs.write_text(ft)
    for p in ok:
        cls, base = p["cls"], p["base_cls"]
        if base and "::" in base and not re.search(rf"\bclass {base.split('::')[-1]}\b", paf_text):
            ns, cn = base.rsplit("::", 1)
            types.setdefault(f"0_{base}", f"#ifdef __cplusplus\nnamespace {ns} {{\nclass {cn} {{\npublic:\n    virtual ~{cn}();\n}};\n}}\n#endif")
        inh = f" : public {base}" if base else ""
        if cls not in types or "dtor still asm/m2c" in types[cls]:  # a hand-written class (more members) is kept
            old_t = types.get(cls, "")
            types[cls] = (f"#ifdef __cplusplus\n/* vtable {vtable_name(cls)} is data (vptr = label - 8 + 8) */\n"
                          f"class {cls}{inh} {{\npublic:\n    virtual ~{cls}();\n}};\n#endif")
            ctor = re.search(rf"^    {cls}\(\);$", old_t, re.M)
            if ctor:
                types[cls] = types[cls].replace("public:\n", f"public:\n    {cls}();\n", 1)
        if p["fields"]:
            have = struct_fields(types[cls])
            allf = dict(have)
            allf.update(p["fields"])
            body, pos = [], 4
            for o in sorted(allf):
                sz, d = allf[o]
                if o > pos:
                    body.append(f"    u8 pad{pos:X}[0x{o - pos:X}];")
                body.append(f"    {d}")
                pos = o + sz
            t = re.sub(r"\n    (?:u8 pad\w+\[[^\]]*\];|[^\n]*\bunk[0-9A-F]+(?:\[[^\]]*\])?;)(?=\n)", "", types[cls])
            types[cls] = t.replace("public:\n", "public:\n" + "\n".join(body) + "\n", 1)
        new = dtor_names(cls)
        for v, t in p["todo"].items():
            n = fwnum(v)
            f = t["where"][0]
            es = ents[f]
            lst = [k for k, e in enumerate(es) if n in e.vers and e.kind in ("asm", "cfunc")]
            idxs = [k for k in lst if es[k].name in t["names"]]
            assert [es[k].name for k in idxs] == t["names"], (cls, v)
            for k in idxs:
                es[k].vers = es[k].vers - {n}
            body = (t["body"] + "\n") if t["body"] else ""
            es.insert(idxs[0], FM.Entry(frozenset([n]), "cfunc", cls, f"{cls}::~{cls}() {{\n{body}}}\n"))
            lf = t["label_unit"]
            les = ents[lf]
            pos = next((k + 1 for k, e in enumerate(les) if e.kind == "rodata" and e.name == t["label"] and n in e.vers), len(les))
            vt = vtable_name(cls)
            les.insert(pos, FM.Entry(frozenset([n]), "alias", vt,
                                     f'__asm__(".globl {vt}\\n{vt} = {t["label"]} - 8\\n");\n'))
            renames.setdefault(n, {}).update(dict(zip(t["names"], new)))
            for q in (ROOT / f"config/{v}/symbol_addrs.{mod}.txt", ROOT / f"config/{v}/func_starts.{mod}.txt"):
                if q.exists() and q not in keepcfg:
                    keepcfg[q] = q.read_text()
            sa, fs = ROOT / f"config/{v}/symbol_addrs.{mod}.txt", ROOT / f"config/{v}/func_starts.{mod}.txt"
            st, ft = sa.read_text(), (fs.read_text() if fs.exists() else "")
            for (addr, old), mn in zip(t["funcs"], new):
                st = re.sub(rf"^{old}\s*=.*\n", "", st, flags=re.M)
                ft = re.sub(rf"^{old}\s*=.*\n", "", ft, flags=re.M)
                st = st.rstrip("\n") + f"\n{mn} = 0x{addr:08X}; // type:func\n"
            sa.write_text(st)
            if fs.exists():
                fs.write_text(ft)
    # references to the old names (derived dtors in C calling a base D2) in entries of those versions
    for f, es in ents.items():
        out = []
        for e in es:
            hits = {n: m for n, m in renames.items() if n in e.vers and any(re.search(rf"\b{o}\b", e.text) for o in m)}
            if not hits or e.kind == "rodata":
                out.append(e)
                continue
            groups = {}
            for n in e.vers:
                key = tuple(sorted(renames.get(n, {}).items()))
                groups.setdefault(key, set()).add(n)
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
    allnew = {nn for m in renames.values() for nn in m.values()}
    for nn in allnew:
        if nn.endswith("D2Ev") and nn not in store["funcs"] and any(re.search(rf"\b{nn}\(", f.read_text()) for f in files):
            store["funcs"][nn] = f"void {nn}(void *self);"
    structify.SRC[mod] = sd
    structify.write_decls(mod, store)
    print(f"converted {len(ok)} classes in {len({n for n in renames})} versions")
    # m2c C calling the renamed functions may lack pass-through arguments etc.: to_cxx's fixers
    r = subprocess.run([sys.executable, str(ROOT / "tools/to_cxx.py"), mod, "--ver", ver, "--keep", "--no-build"],
                       cwd=ROOT, capture_output=True, text=True)
    if r.returncode:
        print("\n".join(r.stdout.splitlines()[-6:]))
        for q, txt in list(keep.items()) + list(keepcfg.items()):
            q.write_text(txt)
        print("restored")
        sys.exit(1)
    if a.no_build:
        return
    env = dict(os.environ, REGRESS_JOBS=os.environ.get("REGRESS_JOBS", "2"), MAKE_JOBS=os.environ.get("MAKE_JOBS", "2"))
    r = subprocess.run(["tools/regress.sh", "--shared", f"{ver}:{mod}"], cwd=ROOT, capture_output=True, text=True, env=env)
    bad = [l for l in r.stdout.splitlines() if l.strip() and not l.endswith(": OK")]
    if bad:
        print("\n".join(sorted(bad)[:12]))
        for q, txt in list(keep.items()) + list(keepcfg.items()):
            q.write_text(txt)
        print("restored")
        sys.exit(1)
    print(f"{mod}: every version byte-matching")


if __name__ == "__main__":
    main()
