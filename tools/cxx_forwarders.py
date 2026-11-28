#!/usr/bin/env python3
"""Decompile 'forwarder' virtuals: `return m_obj ? m_obj->vfunc(args...) : DEFAULT;`.

    tools/cxx_forwarders.py VER MODULE [--apply]

paf's widgets forward many calls to a member object (PhWidget::SetStyle -> m_1E8->SetStyle):

    addiu sp,-16; sw ra; li v0,DEFAULT; lw v1,OFF(a0); bnez v1,L; move a0,v1; <return>
    L: lw v1,0(v1); lw v0,SLOT(v1); jalr v0; nop; j <return>; lw ra

The call is placed out of line, which cc1 does only when the guard is no pointer compare (gcc's
pointer heuristic predicts `p != NULL`; for an int the call heuristic wins), so the member is
read as s32:

    s32 r = DEFAULT; s32 p = M2C_FIELD(self, s32 *, OFF);
    if (p != 0) { r = M2C_FIELD(*(void **) p, s32 (**)(s32, ...), SLOT)(p, a1, ...); }
    return r;

The parameters are the function's prototype in the decls (all passed through). Every candidate is
checked with tools/hand_try.py; --apply inserts the matches with tools/hand.py.
"""
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import auto_decomp as AD  # noqa: E402
import fwblocks as FB  # noqa: E402
import structify  # noqa: E402

INS = re.compile(r"^\s*/\*[^*]*\*/\s+(\S+)\s*(.*?)\s*$")


def pattern(asm):
    ins = [(m[1], m[2].replace(" ", "")) for m in (INS.match(l) for l in asm.splitlines()) if m]
    ops = [o for o, _ in ins]
    want = ["addiu", "sw", None, "lw", "bnez", "addu", "lw", "jr", "addiu", "lw", "lw", "jalr", "nop", "j", "lw"]
    if len(ops) != len(want) or any(w and o != w for o, w in zip(ops, want)):
        return None
    a = [x for _, x in ins]
    dm = re.match(r"^\$2,\$0,(-?0x[0-9A-Fa-f]+|-?\d+)$", a[2]) if ops[2] == "addiu" else None
    if ops[2] == "addu" and a[2] == "$2,$0,$0":
        default = 0
    elif dm:
        default = int(dm[1], 0)
    else:
        return None
    om = re.match(r"^\$3,(0x[0-9A-Fa-f]+|\d+)\(\$4\)$", a[3])
    sm = re.match(r"^\$2,(0x[0-9A-Fa-f]+|\d+)\(\$3\)$", a[10])
    if not om or not sm or a[5] != "$4,$3,$0" or a[9] != "$3,0x0($3)" and a[9] != "$3,0($3)":
        return None
    return default, int(om[1], 0), int(sm[1], 0)


def main():
    ver, mod = sys.argv[1], sys.argv[2]
    apply = "--apply" in sys.argv
    m = AD.Module(ver, mod)
    statics = structify.static_members(mod, m.store)
    names = set()
    for f in m.files:
        names |= set(FB.asm_names(f.read_text(), ver, m.fwvers)) if m.shared else {x[2] for x in AD.INC.finditer(f.read_text())}
    out_dir = ROOT / "tmp/cxx_fwd" / mod
    out_dir.mkdir(parents=True, exist_ok=True)
    ok, decls = [], []
    for nm in sorted(names & set(m.funcs)):
        p = pattern(m.funcs[nm][2].read_text())
        if not p or (nm not in m.store["funcs"] and not nm.startswith("_Z")):
            continue
        default, off, slot = p
        line = m.store["funcs"].get(nm, f"M2C_UNK {nm}();")
        proto = structify.cxx_proto(line, nm in statics) if nm.startswith("_Z") else line
        if nm not in m.store["funcs"]:
            decls.append(proto)
        pm = re.match(r"^(.*?)\b" + nm + r"\((.*)\);$", proto.strip())
        if not pm:
            continue
        ps = [x.strip() for x in pm[2].split(",")] if pm[2].strip() not in ("", "void") else []
        if not ps:
            continue
        types = [re.sub(r"\s*\b(arg\d+|self)$", "", x).strip() for x in ps]
        params = ", ".join([f"{types[0]} self"] + [f"{t} a{i}" for i, t in enumerate(types[1:], 1)])
        args = ", ".join(["p"] + [f"a{i}" for i in range(1, len(types))])
        ftypes = ", ".join(["s32"] + types[1:])
        ret = pm[1].strip()
        body = (f"{ret} {nm}({params}) {{\n    s32 r = {default};\n    s32 p = M2C_FIELD(self, s32 *, 0x{off:X});\n\n"
                f"    if (p != 0) {{\n        r = M2C_FIELD(*(void **) p, s32 (**)({ftypes}), 0x{slot:X})({args});\n    }}\n"
                f"    return r;\n}}\n")
        f = out_dir / f"{nm}.c"
        f.write_text(body)
        d = out_dir / f"{nm}.h"
        d.write_text(proto + "\n")
        r = subprocess.run([sys.executable, str(ROOT / "tools/hand_try.py"), ver, mod, str(f), "--decls", str(d)], cwd=ROOT,
                           capture_output=True, text=True)
        res = (r.stdout.strip().splitlines() or ["?"])[-1]
        print(f"{nm:50} {res}")
        if res == "RESULT: MATCH":
            ok.append(f)
    print(f"{mod} {ver}: {len(ok)} forwarders match")
    if apply and ok:
        dh = out_dir / "_all.h"
        dh.write_text("".join(d + "\n" for d in decls if any(f.stem in d for f in ok)))
        r = subprocess.run([sys.executable, str(ROOT / "tools/hand.py"), ver, mod, *map(str, ok), "--decls", str(dh)], cwd=ROOT,
                           capture_output=True, text=True)
        print("\n".join((r.stdout + r.stderr).splitlines()[-12:]))


if __name__ == "__main__":
    main()
