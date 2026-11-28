#!/usr/bin/env python3
"""Turn C functions with mangled member-function names into C++ member function definitions.

    tools/cxx_methods.py MODULE [--apply] [--no-build] [--exclude NAME,...] [-v]

A C entry `s32 _ZN3paf8PhWidget13UpdateCamerasEv(struct Unk_X_0 *arg0) {...}` becomes

    s32 paf::PhWidget::UpdateCameras() {
        struct Unk_X_0 *arg0 = (struct Unk_X_0 *) this;
        ...unchanged m2c body...
    }

so cc1plus emits the same symbol from the real class/method name and the body keeps m2c's types
(the copies are free: same registers, same alias sets). Parameters get their demangled types
(`cxxpN`) and are copied into m2c's `argN` the same way (references by address). Qualifies when
- the demangled signature has only int/unsigned/long/float by value (a bool/char/short parameter
  would be extended in the callee: not m2c's s32 code) and pointers/references to builtins or to
  classes at namespace scope (forward-declared), no templates or function pointers;
- the C parameters are `this` + the demangled ones (m2c drops trailing unused ones), or none
  (a static member or a member not using this; static if the store says so), and float-ness agrees;
- the return type is builtin (for classes declared in include/paf.h or vsh.h, which are shared).
The member is declared in its class: in include/paf.h / vsh.h if the class is there, else in the
module's class declaration (store types), else in a generated `class X { ... };` (store types).
--apply rebuilds every version and restores on failure; members whose symbol went missing or that
mismatched first are printed (`--exclude` them).
"""
import argparse
import json
import os
import re
import subprocess
import sys
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

BUILTIN = {"int", "unsigned", "char", "short", "long", "float", "bool", "void", "const", "signed", "double"}
SHARED = [ROOT / "include/paf.h", ROOT / "include/vsh.h"]
HEADER = re.compile(r"^(?P<ret>(?:const )?[\w ]+?\s*\**)\s*\b(?P<name>_ZN\w+)\((?P<params>[^)]*)\) \{\n")


def split_top(s):
    out, depth, cur = [], 0, ""
    for ch in s:
        if ch in "(<":
            depth += 1
        elif ch in ")>":
            depth -= 1
        if ch == "," and depth == 0:
            out.append(cur.strip())
            cur = ""
        else:
            cur += ch
    if cur.strip():
        out.append(cur.strip())
    return out


def parse_demangled(dm):
    """'paf::PhWidget::Set(int, paf::PhEvent*) const' -> (qual, name, [params], const) or None."""
    if "<" in dm or "operator" in dm:
        return None
    m = re.match(r"^((?:\w+::)*\w+)::(\w+)\((.*)\)( const)?$", dm)
    if not m or "(" in m[3]:
        return None
    qual, name = m[1], m[2]
    if name == qual.split("::")[-1]:
        return None  # ctor
    params = [] if m[3] in ("", "void") else split_top(m[3])
    return qual, name, params, bool(m[4])


def param_ok(t, namespaces):
    """builtins (by value or pointer/reference), or pointers/references to namespace-scope classes."""
    words = re.findall(r"[A-Za-z_][\w:]*", t)
    indirect = "*" in t or "&" in t
    classes = [w for w in words if w not in BUILTIN]
    if not classes:
        # by value only full-word types: a bool/char/short parameter gets extended in the callee
        if not indirect and t.replace("unsigned ", "").strip() not in ("int", "long", "float"):
            return None
        return []
    if not indirect or len(classes) != 1:
        return None
    c = classes[0]
    parts = c.split("::")
    if len(parts) > 2 or (len(parts) == 2 and parts[0] not in namespaces):
        return None
    return [c]


def class_block(text, qual):
    """(start, end) of the body of `class Name ... { ... };` for qual in text (namespace-aware enough
    for paf.h: `namespace paf {` ... `class X`)."""
    name = qual.split("::")[-1]
    for m in re.finditer(rf"^(\s*)(?:class|struct) {name}\b[^;{{]*\{{", text, re.M):
        if "::" in qual:
            ns = qual.rsplit("::", 1)[0]
            before = text[:m.start()]
            opened = [x.start() for x in re.finditer(rf"^namespace {ns} \{{", before, re.M)]
            closed = [x.start() for x in re.finditer(rf"^\}} // namespace {ns}", before, re.M)]
            if not opened or (closed and closed[-1] > opened[-1]):
                continue
        depth, i = 0, m.end() - 1
        while i < len(text):
            if text[i] == "{":
                depth += 1
            elif text[i] == "}":
                depth -= 1
                if depth == 0:
                    return m.end(), i
            i += 1
    return None


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("module")
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--no-build", action="store_true")
    ap.add_argument("--exclude", default="")
    ap.add_argument("-v", action="store_true")
    ap.add_argument("--keep", action="store_true", help="keep the changes on failure")
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
    statics = structify.static_members(mod, store)
    shared_text = {p: p.read_text() for p in SHARED}
    namespaces = {"paf"} | {m[1] for t in shared_text.values() for m in re.finditer(r"^namespace (\w+) \{", t, re.M)}
    exclude = set(a.exclude.split(",")) - {""}

    plans, why = [], {}
    sigs = {}  # mangled name -> member declaration (one per name across versions)
    for f, es in ents.items():
        for k, e in enumerate(es):
            if e.kind != "cfunc":
                continue
            hm = HEADER.match(e.text)
            if not hm or hm["name"] in exclude or re.search(r"[CD][0-3]E", hm["name"]):
                continue
            pd = parse_demangled(structify._demangle(hm["name"]))
            if not pd:
                why["demangled form"] = why.get("demangled form", 0) + 1
                continue
            qual, name, params, const = pd
            if qual.count("::") > 1 or ("::" in qual and qual.split("::")[0] not in namespaces):
                why["nested class"] = why.get("nested class", 0) + 1
                continue
            fwd = []
            for t in params:
                r = param_ok(t, namespaces)
                if r is None:
                    break
                fwd += r
            else:
                r = 0
            if r is None:
                why["parameter types"] = why.get("parameter types", 0) + 1
                continue
            cps = [] if hm["params"].strip() in ("", "void") else [x.strip() for x in hm["params"].split(",")]
            static = hm["name"] in statics
            nsfunc = qual in namespaces  # vsh::BusyIcon_Inc(): a function in a namespace
            if nsfunc:
                if len(cps) > len(params):
                    why["parameter count"] = why.get("parameter count", 0) + 1
                    continue
                this, rest = None, cps
            elif cps and len(cps) == len(params) + 1 and not static:
                this, rest = cps[0], cps[1:]
            elif not cps:
                this, rest = None, []
            elif static and len(cps) <= len(params):
                this, rest = None, cps
            else:
                why["parameter count"] = why.get("parameter count", 0) + 1
                continue
            ret = hm["ret"].strip()
            in_shared = None if nsfunc else next((p for p, t in shared_text.items() if class_block(t, qual)), None)
            if in_shared and not re.match(r"^(?:void|s8|u8|s16|u16|s32|u32|f32|int|M2C_UNK)$", ret):
                why["return type"] = why.get("return type", 0) + 1
                continue
            pro = []
            if this:
                cty = re.sub(r"\barg0$", "", this).strip()
                pro.append(f"    {this} = ({cty}) this;")
            bad = False
            for i, c in enumerate(rest):
                mm = re.match(r"^(.*?)\s*\b(arg\d+)$", c)
                if not mm:
                    bad = True
                    break
                t = params[i]
                if ("float" in t) != (mm[1] == "f32"):
                    bad = True
                    break
                amp = "&" if "&" in t else ""
                pro.append(f"    {c} = ({mm[1]}) {amp}cxxp{i + 1};")
            if bad:
                why["parameter types"] = why.get("parameter types", 0) + 1
                continue
            cq = " const" if const else ""
            decl_params = ", ".join(f"{t} cxxp{i + 1}" for i, t in enumerate(params))
            head = f"{ret} {qual}::{name}({decl_params}){cq} {{\n"
            body = e.text[hm.end():]
            new = head + "".join(p + "\n" for p in pro) + body
            member = f"    {'static ' if static and not this and not nsfunc else ''}{ret} {name}({', '.join(params)}){cq};"
            if sigs.setdefault(hm["name"], member) != member:
                why["differs between versions"] = why.get("differs between versions", 0) + 1
                continue
            plans.append((f, e, new, qual, member, fwd, in_shared, hm["name"]))
    print(f"{mod}: {len(plans)} member functions to define; skipped: "
          + ", ".join(f"{k} {n}" for k, n in sorted(why.items())))
    if a.v:
        for p in plans:
            print(f"  {p[3]}::{p[4].strip()}")
    if not a.apply or not plans:
        return

    keep = {q: q.read_text() for q in sorted(sd.iterdir()) if q.is_file()}
    keep.update(shared_text)
    # declarations
    members = {}  # qual -> [member]
    fwds = set()
    for f, e, new, qual, member, fwd, in_shared, mname in plans:
        if member not in members.setdefault(qual, []):
            members[qual].append(member)
        fwds.update(fwd)
    declared = {}
    for kk, t in types.items():
        for m in re.finditer(r"^class (\w+)\b", t, re.M):
            declared[m[1]] = kk
    gen = []
    shared_fwd = {}
    for f, e, new, qual, member, fwd, in_shared, mname in plans:
        if in_shared:
            shared_fwd.setdefault(in_shared, set()).update(fwd)
    for sh, cs in shared_fwd.items():
        t = sh.read_text()
        cs = sorted(c for c in cs if not class_block(t, c) and not re.search(
            rf"\bclass {c.split('::')[-1]};", t))
        if cs:
            fl = "".join(f"namespace {c.rsplit('::', 1)[0]} {{ class {c.split('::')[-1]}; }}\n" if "::" in c
                         else f"class {c};\n" for c in cs)
            t = t.replace("#ifdef __cplusplus\n", "#ifdef __cplusplus\n\n/* forward declarations (tools/cxx_methods.py) */\n"
                          + fl, 1)
            sh.write_text(t)
    def missing(text, se, ms):
        have = {l.strip() for l in text[se[0]:se[1]].split("\n")}
        return "".join(m + "\n" for m in ms if m.strip() not in have)
    for qual, ms in sorted(members.items()):
        block = "".join(m + "\n" for m in ms)
        if qual in namespaces:
            gen.append(f"namespace {qual} {{\n{block}}}\n")
            continue
        sh = next((p for p, t in shared_text.items() if class_block(t, qual)), None)
        if sh:
            t = sh.read_text()
            s0, e0 = class_block(t, qual)
            sh.write_text(t[:e0] + missing(t, (s0, e0), ms) + t[e0:])
        elif "::" not in qual and qual in declared:
            kk = declared[qual]
            s0, e0 = class_block(types[kk], qual)
            types[kk] = types[kk][:e0] + missing(types[kk], (s0, e0), ms) + types[kk][e0:]
        else:
            ns, _, cn = qual.rpartition("::")
            if ns and ns not in namespaces:
                continue
            cls = f"class {cn} {{\npublic:\n{block}}};\n"
            gen.append(f"namespace {ns} {{\n{cls}}}\n" if ns else cls)
    for c in sorted(fwds):
        if any(class_block(t, c) for t in shared_text.values()):
            continue
        ns, _, cn = c.rpartition("::")
        gen.insert(0, f"namespace {ns} {{ class {cn}; }}\n" if ns else f"class {cn};\n")
    if gen:
        types["0_cxx_methods"] = "#ifdef __cplusplus\n" + "".join(gen) + "#endif"
    for f, e, new, *_ in plans:
        e.text = new
    for f in files:
        f.write_text(FM.emit(FM.dedupe(ents[f]), fv))
    structify.SRC[mod] = sd
    structify.write_decls(mod, store)
    print(f"defined {len(plans)} member functions ({len(members)} classes)")

    def restore():
        if a.keep:
            sys.exit(1)
        for q, txt in keep.items():
            q.write_text(txt)
        print("restored")
        sys.exit(1)
    r = subprocess.run([sys.executable, str(ROOT / "tools/to_cxx.py"), mod, "--ver", ver, "--keep", "--no-build"],
                       cwd=ROOT, capture_output=True, text=True)
    if r.returncode:
        print("\n".join(r.stdout.splitlines()[-8:]))
        restore()
    if a.no_build:
        return
    env = dict(os.environ, REGRESS_JOBS=os.environ.get("REGRESS_JOBS", "2"), MAKE_JOBS=os.environ.get("MAKE_JOBS", "2"))
    r = subprocess.run(["tools/regress.sh", "--shared", f"{ver}:{mod}"], cwd=ROOT, capture_output=True, text=True, env=env)
    bad = [l for l in r.stdout.splitlines() if l.strip() and not l.endswith(": OK")]
    if bad:
        print("\n".join(sorted(bad)[:12]))
        by_dm = {structify._demangle(p[7]): p[7] for p in plans}
        culprits = set()
        for l in bad:
            m = re.match(r"^(\w+):\S+: FAIL (.*)", l)
            if not m:
                continue
            if "MISMATCH" in m[2]:
                n = CC.first_mismatch(m[1], mod) or ""
                if n in by_dm:
                    culprits.add(by_dm[n])
            else:
                mk = subprocess.run(["make", "-k", f"VERSION={m[1]}", f"MODULE={mod}"], cwd=ROOT, capture_output=True, text=True)
                for u in re.findall(r"undefined reference to `([^']+)'", mk.stdout + mk.stderr):
                    if u in by_dm:
                        culprits.add(by_dm[u])
        if culprits:
            print("mismatching members: " + ",".join(sorted(culprits)))
        restore()
    print(f"{mod}: every version byte-matching")


if __name__ == "__main__":
    main()
