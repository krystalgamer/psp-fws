#!/usr/bin/env python3
"""Turn trivial gcc 3.3 destructor clone groups into C++ classes.

    tools/cxx_classes.py MODULE [--apply] [--limit N] [--no-build]

Uses tools/cxx_groups.py. A group qualifies when it is a virtual destructor triple
D2/D1/D0 whose D2 is only `this->vptr = &vtable` (sizes 0x10/0x10/0x28) or that plus the
base-class destructor call (0x28/0x28/0x38), and:
- the three functions carry the same names in every version of the group, each name has
  exactly one entry in the shared source (INCLUDE_ASM or C) and the three are adjacent;
- the base call is a mangled destructor (`_ZN3paf8PhWidgetD2Ev`: class from c++filt) or the D2
  of another qualifying group (converted first);
- the vptr label is INCLUDE_RODATA'd in the same unit, so `_ZTV<class> = <label> - 8` can be
  defined next to it (the vtable stays data; offset-to-top and typeinfo are 0 with -fno-rtti).
Each such group becomes `class Class_<vtable> : public Base { public: virtual ~Class_<vtable>(); };`
(decls, before C++ is compiled the key function is the dtor, `#pragma interface` keeps the vtable
from being emitted) and the three entries one `Class_X::~Class_X() {}`; the symbols are renamed to
the mangled D2/D1/D0 names per version (config symbol_addrs). Without --apply it only reports.
With --apply it rebuilds every version (tools/regress.sh --shared) and restores on failure.
"""
import argparse
import importlib.util
import json
import os
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import structify  # noqa: E402
from srcdir import sharing_versions, src_dir  # noqa: E402

spec = importlib.util.spec_from_file_location("cxx_groups", ROOT / "tools/cxx_groups.py")
CG = importlib.util.module_from_spec(spec)
spec.loader.exec_module(CG)


def mangle_cls(qual):
    return "".join(f"{len(p)}{p}" for p in qual.split("::"))


def dtor_names(qual):
    q = mangle_cls(qual)
    pre = f"_ZN{q}" if "::" in qual else f"_ZN{q}"
    return [f"{pre}D2Ev", f"{pre}D1Ev", f"{pre}D0Ev"]


def vtable_name(qual):
    return f"_ZTV{mangle_cls(qual)}" if "::" not in qual else f"_ZTVN{mangle_cls(qual)}E"


def demangled_class(dname):
    """`_ZN3paf8PhWidgetD2Ev` -> `paf::PhWidget`."""
    dm = structify._demangle(dname)
    m = re.match(r"^(.*)::~(\w+)\(\)$", dm)
    return m[1] if m else None


def entry_span(text, name):
    """(start, end) of the one source entry of `name`, or None if missing/not unique."""
    spans = [(m.start(), m.end()) for m in re.finditer(rf'^INCLUDE_ASM\("[^"]+", {name}\);\n', text, re.M)]
    for m in re.finditer(rf"^[\w][^;\n{{]*\b{name}\([^;{{]*\)\s*\{{\n.*?^\}}\n", text, re.M | re.S):
        spans.append((m.start(), m.end()))
    return spans[0] if len(spans) == 1 else None


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("module")
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--no-build", action="store_true")
    a = ap.parse_args()
    mod = a.module
    have = sorted((p.parent.name for p in ROOT.glob(f"config/*/{mod}.yaml")), key=lambda v: (int(re.match(r"\d+", v)[0]), v))
    ver = have[0]
    vers = [ver] + [v for v in sharing_versions(ver, mod) if v != ver]
    sd = src_dir(ver, mod)
    files = sorted(sd.glob("*.c"))
    texts = {f: f.read_text() for f in files}
    per = {v: CG.groups(v, mod) for v in vers}
    # same clustering as cxx_groups
    clusters = []
    for v in vers:
        for g in per[v]:
            if g["kind"] != "dtor":
                continue
            names = tuple(n for _, n in g["funcs"])
            for c in clusters:
                if c["names"] == names and v not in c["by"]:
                    c["by"][v] = g
                    break
            else:
                clusters.append({"names": names, "by": {v: g}})
    # every version that has one of the names must be in the cluster (names consistent)
    name_vers = {}
    for v in vers:
        for g in per[v]:
            for _, n in g["funcs"]:
                name_vers.setdefault(n, set()).add(v)
    plans, d2_class = [], {}
    paf_text = (ROOT / "include/paf.h").read_text() + (ROOT / "include/vsh.h").read_text()

    def qualifies(c):
        g0 = next(iter(c["by"].values()))
        sizes = tuple(g0["sizes"])
        if sizes not in ((0x10, 0x10, 0x28), (0x28, 0x28, 0x38)):
            return "not trivial"
        if any(tuple(g["sizes"]) != sizes for g in c["by"].values()):
            return "sizes differ by version"
        if any(name_vers.get(n, set()) != set(c["by"]) for n in c["names"]):
            return "names used elsewhere"
        if any(not g["vptr"] or not g["vtable_zero"] for g in c["by"].values()):
            return "no vtable header"
        labels = {g["vptr_label"] for g in c["by"].values()}
        if None in labels or len(labels) != 1:
            return "vptr label differs by version"
        bases = {g["base"] for g in c["by"].values()}
        if sizes[0] == 0x28 and (len(bases) != 1 or None in bases):
            return "base differs"
        c["label"] = labels.pop()
        c["base"] = bases.pop() if sizes[0] == 0x28 else None
        # source entries: exactly one per name, all in one unit, adjacent
        where = None
        found = {n: [(f, entry_span(texts[f], n)) for f in files if re.search(rf"\b{n}\b", texts[f])] for n in c["names"]}
        for n, lst in found.items():
            lst[:] = [(f, s) for f, s in lst if s]
            if len(lst) != 1:
                return "entries not unique"
        fs_ = {found[n][0][0] for n in c["names"]}
        if len(fs_) != 1:
            return "entries in different units"
        f = fs_.pop()
        t = texts[f]
        sp = [found[n][0][1] for n in c["names"]]
        if not (sp[0][0] < sp[1][0] < sp[2][0]) or t[sp[0][1]:sp[1][0]].strip() or t[sp[1][1]:sp[2][0]].strip():
            return "entries not adjacent"
        where = (f, sp)
        if not where:
            return "entries not found"
        if not any(re.search(rf'^INCLUDE_RODATA\("[^"]+", {c["label"]}\);$', texts[where[0]], re.M) for _ in [0]):
            return "vtable not in this unit"
        c["where"] = where
        return None

    reasons = {}
    for c in clusters:
        why = qualifies(c)
        if why:
            reasons[why] = reasons.get(why, 0) + 1
        else:
            plans.append(c)
    # names / bases (bases first)
    for c in plans:
        c["cls"] = "Class_" + c["label"].replace("D_", "")
    # one vtable label for two groups: implicit [D1, D0] pairs of classes whose inline base dtor
    # stores the base vptr (e.g. savedata_utility D_00027328), not one class: skip them
    from collections import Counter
    dup = Counter(c["cls"] for c in plans)
    for c in [c for c in plans if dup[c["cls"]] > 1]:
        plans.remove(c)
        reasons["vtable shared by groups"] = reasons.get("vtable shared by groups", 0) + 1
    for c in plans:
        d2_class[c["names"][0]] = c
    order, done = [], set()

    def visit(c, depth=0):
        if id(c) in done or depth > 20:
            return
        b = c["base"]
        if b and b in d2_class:
            visit(d2_class[b], depth + 1)
        done.add(id(c))
        order.append(c)
    for c in plans:
        visit(c)
    ok = []
    for c in order:
        b = c["base"]
        if b is None:
            c["base_cls"] = None
        elif b in d2_class and d2_class[b] in ok:
            c["base_cls"] = d2_class[b]["cls"]
        elif b.startswith("_Z") and demangled_class(b):
            c["base_cls"] = demangled_class(b)
        else:
            reasons["base not a class"] = reasons.get("base not a class", 0) + 1
            continue
        ok.append(c)
    if a.limit:
        ok = ok[:a.limit]
    print(f"{mod}: {len(clusters)} dtor groups, {len(ok)} convertible; skipped: "
          + ", ".join(f"{k} {v}" for k, v in sorted(reasons.items())))
    for c in ok:
        print(f"  {c['cls']} : {c['base_cls'] or '-'}  {' '.join(c['names'])}  ({len(c['by'])} versions)")
    if not a.apply or not ok:
        return

    keep = {p: p.read_text() for p in sorted(sd.iterdir()) if p.is_file()}
    keepcfg = {}
    sp = sd / f"{mod}_decls.json"
    store = json.loads(sp.read_text())
    types = store.setdefault("types", {})
    # the vtables stay data: keep cc1plus from emitting them (key function = the dtor defined here)
    pre = store.setdefault("cxx_prelude", [])
    if "#pragma interface" not in pre:
        pre.append("#pragma interface")
    ren = {}
    for c in ok:
        mangled = dtor_names(c["cls"])
        ren.update(dict(zip(c["names"], mangled)))
        base = c["base_cls"]
        if base and "::" in base and not re.search(rf"\bclass {base.split('::')[-1]}\b", paf_text):
            ns, cn = base.rsplit("::", 1)
            types.setdefault(f"0_{base}", f"#ifdef __cplusplus\nnamespace {ns} {{\nclass {cn} {{\npublic:\n    virtual ~{cn}();\n}};\n}}\n#endif")
        inh = f" : public {base}" if base else ""
        types[c["cls"]] = (f"#ifdef __cplusplus\n/* vtable {vtable_name(c['cls'])} (vptr {c['label']}) */\n"
                           f"class {c['cls']}{inh} {{\npublic:\n    virtual ~{c['cls']}();\n}};\n#endif")
        f, _ = c["where"]
        t = f.read_text()
        spn = [entry_span(t, n) for n in c["names"]]  # offsets of the current text
        s, e = spn[0][0], spn[2][1]
        t = t[:s] + f"{c['cls']}::~{c['cls']}() {{\n}}\n" + t[e:]
        vt = vtable_name(c["cls"])
        # one alias at the end of the unit for the group's versions (the label may be
        # INCLUDE_RODATA'd in several blocks)
        cond = " || ".join(f"FW_VERSION == {re.match(r'[0-9]+', v)[0]}" for v in sorted(c["by"]))
        t = t.rstrip("\n") + (f'\n\n#if {cond}\n/* vtable of {c["cls"]} (data) */\n'
                              f'__asm__(".globl {vt}\\n{vt} = {c["label"]} - 8\\n");\n#endif\n')
        f.write_text(t)
        for v, g in c["by"].items():
            for p in (ROOT / f"config/{v}/symbol_addrs.{mod}.txt", ROOT / f"config/{v}/func_starts.{mod}.txt"):
                if p.exists() and p not in keepcfg:
                    keepcfg[p] = p.read_text()
            sa = ROOT / f"config/{v}/symbol_addrs.{mod}.txt"
            fs = ROOT / f"config/{v}/func_starts.{mod}.txt"
            st = sa.read_text()
            ft = fs.read_text() if fs.exists() else ""
            for (addr, n), mn in zip(g["funcs"], dtor_names(c["cls"])):
                ft = re.sub(rf"^{n}\s*=.*\n", "", ft, flags=re.M)
                if re.search(rf"^{n}\s*=", st, re.M):
                    st = re.sub(rf"^{n}(\s*=)", rf"{mn}\1", st, flags=re.M)
                else:
                    st = st.rstrip("\n") + f"\n{mn} = 0x{addr:08X}; // type:func\n"
            sa.write_text(st)
            if fs.exists():
                fs.write_text(ft)
    # other references (derived dtors in C calling a base D2) and prototypes
    for f in files:
        t = f.read_text()
        u = re.sub(r"\b(\w+)\b", lambda m: ren.get(m[1], m[1]), t)
        if u != t:
            f.write_text(u)
    for n, mn in ren.items():
        store["funcs"].pop(n, None)
        if mn.endswith("D2Ev") and any(re.search(rf"\b{mn}\(", f.read_text()) for f in files):
            store["funcs"][mn] = f"void {mn}(void *self);"
    structify.SRC[mod] = sd
    structify.write_decls(mod, store)
    if a.no_build:
        return
    env = dict(os.environ, REGRESS_JOBS=os.environ.get("REGRESS_JOBS", "2"), MAKE_JOBS=os.environ.get("MAKE_JOBS", "2"))
    r = subprocess.run(["tools/regress.sh", "--shared", f"{ver}:{mod}"], cwd=ROOT, capture_output=True, text=True, env=env)
    bad = [l for l in r.stdout.splitlines() if l.strip() and not l.endswith(": OK")]
    if bad:
        print("\n".join(sorted(bad)[:12]))
        for p, t in list(keep.items()) + list(keepcfg.items()):
            p.write_text(t)
        print("restored")
        sys.exit(1)
    print(f"{mod}: {len(ok)} classes, every version byte-matching")


if __name__ == "__main__":
    main()
