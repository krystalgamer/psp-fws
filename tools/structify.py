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


def structify_globals(mod):
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
            body.append(f"    {'volatile ' if vol else ''}{t} unk{off:X};")
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


def main():
    vm = sys.argv[1]
    v, mod = vm.split(":")
    if subprocess.run(["git", "diff", "--quiet", "--", f"src/{mod}"], cwd=ROOT).returncode:
        print(f"{vm}: local changes, skipping")
        return
    n, lines = structify_globals(mod)
    if not n:
        print(f"{vm}: nothing to do")
        return
    if "--no-verify" in sys.argv:
        print(f"{vm}: {n} globals, {lines} lines (unverified)")
        return
    r = subprocess.run(["tools/regress.sh", vm], cwd=ROOT, capture_output=True, text=True)
    if r.returncode:
        subprocess.run(["git", "checkout", "-q", "--", f"src/{mod}"], cwd=ROOT)
        print(f"{vm}: FAILED, reverted ({r.stdout.strip()[-150:]})")
    else:
        print(f"{vm}: OK, {n} globals as structs, {lines} lines rewritten")


if __name__ == "__main__":
    main()
