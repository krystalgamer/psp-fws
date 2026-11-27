#!/usr/bin/env python3
"""Merge m2c's per-function structs (struct Unk_func_XXXX_N ...) that describe one object.

    tools/merge_structs.py MODULE [--ver V] [--no-build]

m2c invents one struct per function parameter/temporary. In C, pointers to them convert
silently; C++ units needed explicit casts (tools/to_cxx.py inserts `(Unk_x*) expr`). This
tool removes those casts, compiles every unit for every version, and for each reported
conversion `Unk_A* -> Unk_B*` merges A and B when their layouts agree:
- every field is `unkXX` (offset in the name) with a known size;
- fields at the same offset have the same size and the same type (pointers to two Unk structs
  merge those too); no field changes type, since gcc 3.3 alias sets follow the pointed-to type
  and a retyped pointer field reorders stores;
- integer fields that differ in type or signedness (lb vs lbu), int vs pointer, or partial
  overlaps block the merge (the cast stays).
The merged struct keeps the first name (sorted); every other name is renamed in the
module's source and decls. Then tools/to_cxx.py re-adds casts that are still needed and
rebuilds every version; on any failure the source directory is restored.
"""
import argparse
import importlib.util
import json
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import structify  # noqa: E402
from srcdir import sharing_versions, src_dir  # noqa: E402

spec = importlib.util.spec_from_file_location("to_cxx", ROOT / "tools/to_cxx.py")
TC = importlib.util.module_from_spec(spec)
spec.loader.exec_module(TC)

SIZES = {"s8": 1, "u8": 1, "char": 1, "M2C_UNK8": 1, "s16": 2, "u16": 2, "M2C_UNK16": 2, "s32": 4, "u32": 4,
         "M2C_UNK": 4, "f32": 4, "float": 4, "int": 4, "s64": 8, "u64": 8, "f64": 8}
GENERIC_PTR = {"M2C_UNK*", "void*", "s32*", "u32*", "u8*", "s8*", "void**", "M2C_UNK**"}
CAST = re.compile(r"\((Unk_\w+)\*\) ")  # exactly the form to_cxx inserts (m2c writes `(struct Unk_x *)`)


def parse(text):
    """{offset: (size, typekey, decl-without-name)} for an m2c struct, or None if not mergeable."""
    m = re.match(r"^struct (\w+) \{\n(.*)\n\};$", text.strip(), re.S)
    if not m:
        return None
    fields = {}
    for line in m[2].split("\n"):
        line = line.strip()
        if not line:
            continue
        if re.fullmatch(r"u8 pad[0-9A-F]+\[0x[0-9A-F]+\];", line):
            continue
        fm = re.fullmatch(r"(.*?)\b(unk([0-9A-F]+))(\[(0x[0-9A-F]+|\d+)\])?;", line)
        fp = re.fullmatch(r"(.*)\(\*\s*(unk([0-9A-F]+))\)\s*\((.*)\);", line)
        if fp:
            off, size, key, decl = int(fp[3], 16), 4, "fnptr", line
        elif fm:
            typ = fm[1].strip()
            off = int(fm[3], 16)
            n = int(fm[5], 0) if fm[5] else 1
            if "*" in typ:
                size, key = 4 * n, typ.replace(" ", "") + (f"[{n}]" if fm[4] else "")
            elif typ in SIZES:
                size, key = SIZES[typ] * n, typ + (f"[{n}]" if fm[4] else "")
            else:
                return None  # struct by value / unknown type
            decl = line
        else:
            return None
        fields[off] = (size, key, decl)
    return fields


def ptr_target(key):
    m = re.fullmatch(r"(?:struct)?(Unk_\w+)\*", key)
    return m[1] if m else None


def merge_fields(a, b, pairs):
    """Merged field dict or None on conflict; pointer-to-Unk pairs to merge go into pairs."""
    out = dict(a)
    for off, (size, key, decl) in b.items():
        if off in out:
            s2, k2, d2 = out[off]
            if s2 != size:
                return None
            if k2 == key:
                continue
            p1, p2 = k2.endswith("*") or k2 == "fnptr", key.endswith("*") or key == "fnptr"
            if not (p1 and p2):
                return None
            # pointer fields keep their type: gcc 3.3 gives each pointed-to type its own alias set,
            # so retyping a field reorders stores (photo_plugin func_00029D94); only two struct
            # pointers whose structs merge as well end up identical
            t1, t2 = ptr_target(k2), ptr_target(key)
            if t1 and t2:
                pairs.add((t1, t2))
                continue
            return None
        out[off] = (size, key, decl)
    spans = sorted((o, o + s) for o, (s, _, _) in out.items())
    for (a0, a1), (b0, b1) in zip(spans, spans[1:]):
        if b0 < a1:
            return None
    return out


def render(name, fields):
    lines, pos = [], 0
    for off in sorted(fields):
        size, _, decl = fields[off]
        if off > pos:
            lines.append(f"    u8 pad{pos:X}[0x{off - pos:X}];")
        lines.append(f"    {decl}")
        pos = off + size
    return f"struct {name} {{\n" + "\n".join(lines) + "\n};"


def var_struct(lines, idx, name):
    """Struct type of a local/parameter `name` in the function containing line idx."""
    for j in range(idx, -1, -1):
        m = re.search(rf"struct (Unk_\w+) \*{name}\b", lines[j])
        if m:
            return m[1]
        if re.match(r"^[\w][^;{]*\(.*\)\s*\{\s*$", lines[j]):
            return None
    return None


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("module")
    ap.add_argument("--ver", default=None)
    ap.add_argument("--no-build", action="store_true")
    a = ap.parse_args()
    mod = a.module
    ver = a.ver or sorted((p.parent.name for p in ROOT.glob(f"config/*/{mod}.yaml")),
                          key=lambda v: (int(re.match(r"\d+", v)[0]), v))[0]
    sd = src_dir(ver, mod)
    vers = [ver] + [v for v in sharing_versions(ver, mod) if v != ver]
    keep = {p: p.read_text() for p in sorted(sd.iterdir()) if p.is_file()}
    files = sorted(sd.glob("*.c"))
    sp = sd / f"{mod}_decls.json"
    store = json.loads(sp.read_text())
    types = store["types"]
    structify.SRC[mod] = sd

    # 1. drop the inserted casts and collect the conversions cc1plus reports
    ncast = 0
    for f in files:
        t, n = CAST.subn("", f.read_text())
        ncast += n
        f.write_text(t)
    pairs, retype = set(), {}
    from concurrent.futures import ThreadPoolExecutor
    jobs = [(f, v) for f in files for v in vers]
    with ThreadPoolExecutor(4) as ex:
        for (f, _), es in zip(jobs, ex.map(lambda fv: TC.compile_errors(*fv), jobs)):
            lines = f.read_text().split("\n")
            for l, msg in es:
                for m in re.finditer(r"`\s*(?:struct )?(Unk_\w+)\*\s*' to `\s*(?:struct )?(Unk_\w+)\*\s*'", msg):
                    pairs.add((m[1], m[2]))
                # `x = s->unkNN;` with a generic pointer field: give the field the target type
                m = re.search(r"cannot convert `\s*M2C_UNK\*\s*' to `\s*(Unk_\w+)\*\s*' in assignment", msg)
                if m and 0 < l <= len(lines):
                    fm = re.search(r"=\s*(\w+)->(unk[0-9A-F]+)\s*;", lines[l - 1])
                    if fm:
                        st = var_struct(lines, l - 1, fm[1])
                        if st:
                            retype.setdefault((st, fm[2]), m[1])
    print(f"{mod}: {ncast} casts removed, {len(pairs)} struct conversions, {len(retype)} generic pointer fields")
    retype = {}  # retyping generic pointer fields changes alias sets (store order): disabled
    for (st, field), target in sorted(retype.items()):
        tt = types.get(st)
        if tt:
            types[st] = re.sub(rf"^(\s*)(?:M2C_UNK|void) \*\s*{field};$", rf"\1struct {target} *{field};", tt, flags=re.M)

    # 2. union the pairs whose layouts agree (iterating: pointer fields can pull in more pairs)
    parent = {}

    def find(x):
        while parent.get(x, x) != x:
            x = parent[x]
        return x
    layout = {k: parse(v) for k, v in types.items() if k.startswith("Unk_")}
    todo, rejected = sorted(pairs), []
    while todo:
        x, y = todo.pop(0)
        rx, ry = find(x), find(y)
        if rx == ry:
            continue
        if layout.get(rx) is None or layout.get(ry) is None:
            rejected.append((x, y, "layout unknown"))
            continue
        more = set()
        merged = merge_fields(layout[rx], layout[ry], more)
        if merged is None:
            rejected.append((x, y, "conflict"))
            continue
        keep_name, drop = sorted([rx, ry])
        parent[drop] = keep_name
        layout[keep_name] = merged
        todo += sorted(more)
    groups = {}
    for k in list(parent):
        groups.setdefault(find(k), []).append(k)
    for r, (x, y, why) in enumerate(rejected[:20]):
        print(f"  kept apart: {x} / {y} ({why})")
    if not groups:
        print("nothing to merge")
    # 3. rewrite: merged struct text, renames everywhere
    ren = {k: find(k) for k in parent}
    for root, members in groups.items():
        types[root] = render(root, layout[root])
        for m in members:
            types.pop(m, None)

    def rename(text):
        return re.sub(r"\b(Unk_\w+)\b", lambda m: ren.get(m[1], m[1]), text)
    for k in list(types):
        types[k] = rename(types[k])
    for sec in ("funcs", "vars"):
        for k in store.get(sec, {}):
            store[sec][k] = rename(store[sec][k])
    for f in files:
        f.write_text(rename(f.read_text()))
    structify.write_decls(mod, store)
    print(f"merged {len(ren)} structs into {len(groups)}")

    # 4. to_cxx re-adds the casts still needed and rebuilds every version
    cmd = [sys.executable, str(ROOT / "tools/to_cxx.py"), mod, "--ver", ver, "--keep"] + (["--no-build"] if a.no_build else [])
    r = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True)
    out = [l for l in r.stdout.splitlines() if not l.endswith(": OK")]
    print("\n".join(out[-12:]))
    if r.returncode:
        for p, t in keep.items():
            p.write_text(t)
        print("restored")
        sys.exit(1)
    left = sum(len(CAST.findall(f.read_text())) for f in files)
    print(f"{mod}: casts {ncast} -> {left}")


if __name__ == "__main__":
    main()
