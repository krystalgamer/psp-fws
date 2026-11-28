#!/usr/bin/env python3
"""Propose the field layout of a class from every access of `this` in its methods.

    tools/cxx_layout.py MODULE CLASS [--ver V ...] [--json]
    tools/cxx_layout.py MODULE --list [--ver V]
    tools/cxx_layout.py MODULE CLASS...|all --apply [--no-build]

CLASS is a class with a C++ destructor or mangled names (`Class_0009E528`, `paf::PhWidget`). Per
version, the class's vptr comes from its D2 (tools/cxx_groups.py); its methods are the vtable's
entries, the functions that load the vptr (ctors/dtors, inlined or not) and functions with
mangled `CLASS::` names. Each method is disassembled from the baserom with `this` = $a0 on entry,
followed through moves/addiu (sub-objects) and dropped on calls (caller-saved registers) or when
overwritten; loads/stores through it give (offset, size, signedness/float). For methods in C,
m2c's struct for the first parameter (`struct Unk_func_X_0 *arg0`, store types) and
`M2C_FIELD(arg0, T *, off)` add the C types. Output: one line per offset with the observed
sizes/types, read/write counts and the number of methods; conflicts (several sizes at one offset,
an access overlapping another field) are flagged with `!`. The scan is linear (no control flow),
so a register reused on another path can add a stray access: check the flagged lines.

--apply (module classes `Class_*` declared in the decls store): the C methods (not ctors/dtors) whose
first parameter is an m2c struct (`struct Unk_func_X_0 *arg0`) get `CLASS *arg0`, and the class
gets the m2c fields (`unkN`, same types and names, padding between) so the bodies are unchanged.
A field keeps the exact type text of the m2c struct (pointer fields too: the pointed-to type is
the alias set), the most common one per offset; methods whose struct disagrees with the chosen
fields, uses offset 0 (the vptr), a field below the base class's fields or a type of unknown size
are left alone. Every version is rebuilt (tools/regress.sh --shared); restored on failure.
"""
import argparse
import importlib.util
import json
import re
import struct
import sys
from collections import Counter, defaultdict
from pathlib import Path

import rabbitizer as R

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import fwmodel as FM  # noqa: E402
from srcdir import sharing_versions, src_dir  # noqa: E402

_spec = importlib.util.spec_from_file_location("cxx_groups", ROOT / "tools/cxx_groups.py")
CG = importlib.util.module_from_spec(_spec)
_spec.loader.exec_module(CG)

SIZES = {"lb": (1, "s8"), "lbu": (1, "u8"), "sb": (1, "8"), "lh": (2, "s16"), "lhu": (2, "u16"), "sh": (2, "16"),
         "lw": (4, "32"), "sw": (4, "32"), "lwc1": (4, "f32"), "swc1": (4, "f32"),
         "lv.s": (4, "f32"), "sv.s": (4, "f32"), "lv.q": (16, "vec4"), "sv.q": (16, "vec4")}
CALLER_SAVED = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 24, 25}


def fwnum(v):
    return int(re.match(r"\d+", v)[0])


def mangle_cls(qual):
    return "".join(f"{len(p)}{p}" for p in qual.split("::"))


class Version:
    def __init__(self, ver, mod):
        self.ver, self.mod = ver, mod
        self.names, self.starts, self.raw, self.segs = CG.load(ver, mod)
        self.text_end = self.segs[0]["p_vaddr"] + self.segs[0]["p_filesz"]
        self.addrs = sorted(a for a in self.starts if a < self.text_end)
        self.end = dict(zip(self.addrs, self.addrs[1:] + [self.text_end]))

    def groups(self):
        if not hasattr(self, "_groups"):
            self._groups = CG.groups(self.ver, self.mod)
            self._d2 = {g["funcs"][0][1]: g for g in self._groups if g["kind"] == "dtor"}
        return self._groups

    def word(self, a):
        return CG.word(self.raw, self.segs, a)

    def vptr_loaders(self):
        """vptr value -> functions that build it with lui/addiu."""
        out = defaultdict(set)
        for a in self.addrs:
            hi = {}
            for x in range(a, self.end[a], 4):
                w = self.word(x)
                op, rs, rt, imm = w >> 26, (w >> 21) & 31, (w >> 16) & 31, w & 0xFFFF
                if op == 15:
                    hi[rt] = imm << 16
                elif op == 9 and rs in hi:
                    out[(hi[rs] + (imm - 0x10000 if imm & 0x8000 else imm)) & 0xFFFFFFFF].add(a)
        return out


def accesses(V, a):
    """[(offset, size, kind, op, read)] through `this` ($a0 on entry) in function a."""
    track = {4: 0}  # register -> offset from this
    out, pending_call = [], False
    for x in range(a, V.end[a], 4):
        ins = R.Instruction(V.word(x), x, R.InstrCategory.R4000ALLEGREX)
        name = ins.getOpcodeName()
        call = ins.isFunctionCall()
        if ins.doesLoad() or ins.doesStore():
            base = ins.rs.value
            if base in track and name in SIZES:
                size, kind = SIZES[name]
                out.append((track[base] + ins.getProcessedImmediate(), size, kind, name, ins.doesLoad()))
            if ins.doesLoad() and ins.modifiesRt():
                track.pop(ins.rt.value, None)
        elif name in ("move", "addu", "or") and ins.modifiesRd():
            src = [r for r in (ins.rs.value, ins.rt.value) if r != 0]
            if len(src) == 1 and src[0] in track:
                track[ins.rd.value] = track[src[0]]
            else:
                track.pop(ins.rd.value, None)
        elif name == "addiu" and ins.rs.value in track:
            track[ins.rt.value] = track[ins.rs.value] + ins.getProcessedImmediate()
            out.append((track[ins.rt.value], 0, "&", name, True))
        else:
            for f, g in (("modifiesRd", "rd"), ("modifiesRt", "rt"), ("modifiesRs", "rs")):
                if getattr(ins, f)():
                    track.pop(getattr(ins, g).value, None)
        if pending_call:
            for r in CALLER_SAVED:
                track.pop(r, None)
            pending_call = False
        if call:
            pending_call = True  # after the delay slot
    return out


def c_types(mod, ver, fnames):
    """name -> {offset: C type} from the C source of methods compiled by ver (m2c structs/M2C_FIELD)."""
    sd = src_dir(ver, mod)
    store = json.loads((sd / f"{mod}_decls.json").read_text())
    structs = {}
    for t in store.get("types", {}).values():
        for m in re.finditer(r"struct (\w+) \{\n(.*?)\n\};", t, re.S):
            fl = {}
            for fm in re.finditer(r"^\s*(?:/\*[^*]*\*/\s*)?([\w ]+?\*?)\s*\**unk([0-9A-F]+)(\[[^\]]*\])?;", m[2], re.M):
                star = "*" if re.search(rf"\*\s*unk{fm[2]}\b", m[2]) else ""
                fl[int(fm[2], 16)] = fm[1].strip() + (" " + star if star else "") + (fm[3] or "")
            structs[m[1]] = fl
    n = fwnum(ver)
    fv = sorted({fwnum(v) for v in sharing_versions(ver, mod)} | {n})
    out = {}
    for f in sorted(sd.glob("*.c")):
        for e in FM.parse(f.read_text(), fv):
            if e.kind != "cfunc" or n not in e.vers or e.name not in fnames:
                continue
            m = re.match(r"[^(]*\(\s*(?:struct (\w+)|[\w ]+?) \*(\w+)", e.text)
            if not m:
                continue
            ty, p = {}, m[2]
            if m[1] in structs:
                for off in structs[m[1]]:
                    if re.search(rf"\b{p}->unk{off:X}\b", e.text):
                        ty[off] = structs[m[1]][off]
            for fm in re.finditer(rf"M2C_FIELD\({p}, ([\w ]+?) \*, (0x[0-9A-Fa-f]+|\d+)\)", e.text):
                ty[int(fm[2], 0)] = fm[1]
            out[e.name] = ty
    return out


def methods(V, cls, loaders=None):
    d2 = f"_ZN{mangle_cls(cls)}D2Ev"
    V.groups()
    vptr = V._d2[d2]["vptr"] if d2 in V._d2 else None
    out = {}
    if vptr is not None:
        x = vptr
        while True:
            w = V.word(x)
            if w == 0 and V.word(x + 4) != 0:  # a null slot; two zeros start the next vtable
                x += 4
                continue
            if w == 0 or w not in V.starts or w >= V.text_end:
                break
            out[w] = "virtual"
            x += 4
        for a in (loaders or V.vptr_loaders()).get(vptr, ()):
            out.setdefault(a, "stores vptr")
    pre = f"_ZN{mangle_cls(cls)}"
    if not hasattr(V, "_starts_named"):
        V._starts_named = sorted((n, a) for a, n in V.starts.items() if n.startswith("_ZN") and a < V.text_end)
    for n, a in V._starts_named:
        if n.startswith(pre):
            out.setdefault(a, "named")
    return vptr, out


def layout(mod, cls, vers):
    obs = defaultdict(lambda: {"sizes": Counter(), "types": Counter(), "r": 0, "w": 0, "funcs": set()})
    nm = 0
    for v in vers:
        V = Version(v, mod)
        vptr, ms = methods(V, cls)
        if not ms:
            continue
        names = {V.starts[a] for a in ms}
        cty = c_types(mod, v, names)
        for a in ms:
            nm += 1
            fn = V.starts[a]
            for off, size, kind, op, rd in accesses(V, a):
                o = obs[off]
                o["sizes"][size] += 1
                o["types"][kind] += 1
                o["r" if rd else "w"] += 1
                o["funcs"].add(fn)
            for off, t in cty.get(fn, {}).items():
                obs[off]["types"]["C:" + t] += 1
                obs[off]["funcs"].add(fn)
    return obs, nm


def guess(o):
    cts = [t[2:] for t in o["types"] if t.startswith("C:") and "M2C_UNK" not in t]
    if cts:
        return Counter(cts).most_common(1)[0][0]
    ks = [k for k in o["types"] if k not in ("&",) and not k.startswith("C:")]
    if "f32" in ks:
        return "f32"
    for s, sg, us in ((1, "s8", "u8"), (2, "s16", "u16")):
        if s in o["sizes"]:
            return us if us in ks and sg not in ks else sg
    if 4 in o["sizes"]:
        return "s32"
    if 16 in o["sizes"]:
        return "ScePspFVector4"
    return "u8 /* address taken */"


def report(obs):
    rows, prev_end = [], 0
    for off in sorted(obs):
        o = obs[off]
        sizes = sorted(s for s in o["sizes"] if s)
        flag = ""
        if len(sizes) > 1:
            flag += "! sizes "
        if sizes and off < prev_end:
            flag += "! overlaps "
        if sizes:
            prev_end = max(prev_end, off + max(sizes))
        if any(s and off % s for s in sizes if s <= 4):
            flag += "! misaligned "
        rows.append({"off": off, "sizes": sizes, "type": guess(o), "reads": o["r"], "writes": o["w"],
                     "methods": len(o["funcs"]), "kinds": dict(o["types"]), "flag": flag.strip()})
    return rows


SCALAR = {"s8": 1, "u8": 1, "s16": 2, "u16": 2, "s32": 4, "u32": 4, "f32": 4, "char": 1, "short": 2, "int": 4}


def struct_fields(text):
    """{offset: (type, size, decl)} of an m2c struct body; None for a field of unknown size."""
    out = {}
    for m in re.finditer(r"^\s*(.+?)\s*\bunk([0-9A-F]+)(?:\[(0x[0-9A-Fa-f]+|\d+)\])?;", text, re.M):
        ty, off, n = m[1].strip(), int(m[2], 16), int(m[3], 0) if m[3] else 1
        if ty.endswith("*"):
            size = 4
        elif ty in SCALAR:
            size = SCALAR[ty]
        else:
            size = None
        out[off] = (ty, None if size is None else size * n, m[0].strip())
    return out


def apply(mod, classes, vers, no_build):
    import os
    import subprocess
    import structify
    ver = vers[0]
    sd = src_dir(ver, mod)
    fv = sorted({fwnum(v) for v in vers})
    files = sorted(sd.glob("*.c"))
    ents = {f: FM.parse(f.read_text(), fv) for f in files}
    sp = sd / f"{mod}_decls.json"
    store = json.loads(sp.read_text())
    types = store["types"]
    structs = {}
    for t in types.values():
        for m in re.finditer(r"struct (\w+) \{\n(.*?)\n\};", t, re.S):
            structs[m[1]] = struct_fields(m[2])
    declared = {}
    for k, t in types.items():
        for m in re.finditer(r"^class (\w+)(?: : public ([\w:]+))? \{", t, re.M):
            declared[m[1]] = (k, m[2])
    Vs = {v: Version(v, mod) for v in vers}
    loaders = {v: Vs[v].vptr_loaders() for v in vers}
    keep = {q: q.read_text() for q in sorted(sd.iterdir()) if q.is_file()}
    total = 0
    if classes == ["all"]:
        def depth(c):
            d = 0
            while c in declared and declared[c][1] and d < 30:
                c, d = declared[c][1], d + 1
            return d
        classes = sorted((c for c in declared if c.startswith("Class_")), key=lambda c: (depth(c), c))
    for cls in classes:
        if cls not in declared:
            print(f"{cls}: not a class of the decls store")
            continue
        key, base = declared[cls]
        # generated declarations only (hand-written classes have members of their own), bases too;
        # a base's fields end where this class's may start
        chain, c, ok = [], cls, True
        while c:
            if c not in declared:
                ok = False  # e.g. a paf.h class
                break
            t = types[declared[c][0]]
            if "is data (vptr = label" not in t and "dtor still asm/m2c" not in t:
                ok = False
                break
            chain.append(c)
            c = declared[c][1]
        if not ok:
            print(f"{cls}: hand-written class or base, left alone")
            continue
        base_end = 4
        for b in chain[1:]:
            for o, (ty, sz, d) in struct_fields(types[declared[b][0]]).items():
                if sz:
                    base_end = max(base_end, o + sz)
        # candidate C methods: (file, entry index, struct name, fields used)
        cands = []
        for v in vers:
            n = fwnum(v)
            _, ms = methods(Vs[v], cls, loaders[v])
            names = {Vs[v].starts[a] for a, k in ms.items() if k != "stores vptr" and not re.search(r"[CD][012]Ev$", Vs[v].starts[a])}
            for f, es in ents.items():
                for k, e in enumerate(es):
                    if e.kind != "cfunc" or n not in e.vers or e.name not in names:
                        continue
                    m = re.match(r"[^(]*\(struct (\w+) \*arg0\b", e.text)
                    if not m or m[1] not in structs:
                        continue
                    used = {o: structs[m[1]][o] for o in structs[m[1]] if re.search(rf"\barg0->unk{o:X}\b", e.text)}
                    if not used or 0 in used or any(sz is None for _, sz, _ in used.values()) or min(used) < base_end:
                        continue
                    if any(c[1] is e for c in cands):
                        continue
                    cands.append((f, e, m[1], used))
        # choose fields: most common type per offset, then drop methods that disagree or overlap
        while True:
            votes = defaultdict(Counter)
            for _, _, _, used in cands:
                for o, (ty, sz, d) in used.items():
                    votes[o][(ty, sz, d)] += 1
            chosen, end = {}, base_end
            for o in sorted(votes):
                t = votes[o].most_common(1)[0][0]
                if o >= end:
                    chosen[o] = t
                    end = o + t[1]
            bad = [c for c in cands if any(chosen.get(o) != t for o, t in c[3].items())]
            if not bad:
                break
            for c in bad:
                cands.remove(c)
        if not cands:
            print(f"{cls}: no C method to convert")
            continue
        body, pos = [], base_end
        for o in sorted(chosen):
            ty, sz, d = chosen[o]
            if o > pos:
                body.append(f"    u8 pad{pos:X}[0x{o - pos:X}];")
            body.append(f"    {d}")
            pos = o + sz
        t = types[key]
        t = re.sub(r"\n    (?:u8 pad\w+\[[^\]]*\];|[^\n]*\bunk[0-9A-F]+(?:\[[^\]]*\])?;)(?=\n)", "", t)  # earlier fields
        t = re.sub(rf"(class {cls}\b[^{{]*\{{\npublic:\n)", lambda m: m[1] + "\n".join(body) + "\n", t, count=1)
        types[key] = t
        for f, e, sname, used in cands:
            e.text = re.sub(rf"\(struct {sname} \*arg0\b", f"({cls} *arg0", e.text, count=1)
            fn = e.name
            if fn in store["funcs"]:
                store["funcs"][fn] = re.sub(rf"\(struct {sname} \*arg0\b", f"({cls} *arg0", store["funcs"][fn], count=1)
        total += len(cands)
        print(f"{cls}: {len(cands)} method copies, {len(chosen)} fields")
    if not total:
        return
    for f in files:
        f.write_text(FM.emit(FM.dedupe(ents[f]), fv))
    structify.SRC[mod] = sd
    structify.write_decls(mod, store)

    def restore():
        for q, txt in keep.items():
            q.write_text(txt)
        print("restored")
        sys.exit(1)
    r = subprocess.run([sys.executable, str(ROOT / "tools/to_cxx.py"), mod, "--ver", ver, "--keep", "--no-build"],
                       cwd=ROOT, capture_output=True, text=True)
    if r.returncode:
        print("\n".join(r.stdout.splitlines()[-6:]))
        restore()
    if no_build:
        return
    env = dict(os.environ, REGRESS_JOBS=os.environ.get("REGRESS_JOBS", "2"), MAKE_JOBS=os.environ.get("MAKE_JOBS", "2"))
    r = subprocess.run(["tools/regress.sh", "--shared", f"{ver}:{mod}"], cwd=ROOT, capture_output=True, text=True, env=env)
    bad = [l for l in r.stdout.splitlines() if l.strip() and not l.endswith(": OK")]
    if bad:
        print("\n".join(sorted(bad)[:12]))
        restore()
    print(f"{mod}: every version byte-matching")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("module")
    ap.add_argument("cls", nargs="*")
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--no-build", action="store_true")
    ap.add_argument("--ver", action="append")
    ap.add_argument("--list", action="store_true", help="classes by number of methods")
    ap.add_argument("--json", action="store_true")
    a = ap.parse_args()
    mod = a.module
    have = sorted((p.parent.name for p in ROOT.glob(f"config/*/{mod}.yaml")), key=lambda v: (fwnum(v), v))
    vers = a.ver or [v for v in have if v in sharing_versions(have[0], mod)] or have
    if a.list:
        V = Version(vers[-1], mod)
        loaders = V.vptr_loaders()
        rows = []
        n = fwnum(V.ver)
        fv = sorted({fwnum(v) for v in sharing_versions(V.ver, mod)} | {n})
        cnames = {e.name for f in sorted(src_dir(V.ver, mod).glob("*.c")) for e in FM.parse(f.read_text(), fv)
                  if e.kind == "cfunc" and n in e.vers}
        for g in CG.groups(V.ver, mod):
            m = re.match(r"^_ZN((?:\d+\w+?)+)D2Ev$", g["funcs"][0][1])
            if g["kind"] != "dtor" or not m:
                continue
            parts, s = [], m[1]
            while s:
                k = re.match(r"(\d+)", s)
                n = int(k[1])
                parts.append(s[len(k[1]):len(k[1]) + n])
                s = s[len(k[1]) + n:]
            cls = "::".join(parts)
            _, ms = methods(V, cls, loaders)
            nc = sum(1 for x in ms if V.starts[x] in cnames and not V.starts[x].startswith("_Z"))
            rows.append((nc, len(ms), cls))
        print(f"methods in C (not ctor/dtor), methods, class ({V.ver})")
        for nc, n, cls in sorted(rows, reverse=True)[:40]:
            print(f"{nc:4d} {n:4d} {cls}")
        return
    if a.apply:
        apply(mod, a.cls, vers, a.no_build)
        return
    a.cls = a.cls[0]
    obs, nm = layout(mod, a.cls, vers)
    rows = report(obs)
    if a.json:
        print(json.dumps(rows, indent=1))
        return
    print(f"{a.cls}: {nm} method copies in {len(vers)} versions")
    for r in rows:
        kinds = " ".join(f"{k}x{n}" for k, n in sorted(r["kinds"].items()))
        print(f"  0x{r['off']:04X} {r['type']:<24} size {','.join(map(str, r['sizes'])) or '-':<5} "
              f"r{r['reads']} w{r['writes']} in {r['methods']} methods  {kinds}  {r['flag']}")


if __name__ == "__main__":
    main()
