#!/usr/bin/env python3
"""Split a hidden function out of an asm entry, in every version that has it.

    tools/split_func.py MODULE VER ADDR [NAME] [--dry-run]

splat merges a function nobody calls into the function before it. ADDR is the
hidden function's start in VER (its code must sit inside an existing asm
entry of VER). The same code is located in every other version of the module
by its masked instruction words (address/relocation fields ignored); each
version that has it gets a `NAME = 0xADDR; // type:func` line in
config/V/func_starts.MODULE.txt (created and added to the yaml's
symbol_addrs_path if needed), and the shared source gets an INCLUDE_ASM entry
for it right after its parent's entry (same version condition). Every version
is rebuilt; everything is restored on a mismatch or error. An explicit NAME is
used in every version; without one, the versions sharing a source entry share
the lowest (or VER's) func_<addr> name. Versions not split yet are split first.
"""
import argparse
import re
import struct
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import auto_decomp as AD  # noqa: E402
from srcdir import sharing_versions, src_dir  # noqa: E402


def masked_words(mod, start, end):
    out = []
    for r in range(start, end, 4):
        w = struct.unpack_from("<I", mod.base, r)[0]
        k = mod.relocs.get(r)
        if k is None and w >> 26 in (2, 3):
            k = "26"
        out.append(AD.mask(w, k))
    return out


def containing(mod, vaddr):
    """(name, rom, end) of the asm entry containing vaddr in this version."""
    rom = mod.text_off + vaddr
    for n, (r, e, _) in mod.funcs.items():
        if r <= rom < e:
            return n, r, e
    return None


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("module")
    ap.add_argument("ver")
    ap.add_argument("addr")
    ap.add_argument("name", nargs="?")
    ap.add_argument("--dry-run", action="store_true")
    a = ap.parse_args()
    addr = int(a.addr, 16)
    ref = AD.Module(a.ver, a.module)
    c = containing(ref, addr)
    if not c:
        sys.exit(f"0x{addr:X} is not inside an asm function of {a.ver}:{a.module}")
    parent, prom, pend = c
    if prom == ref.text_off + addr:
        sys.exit(f"0x{addr:X} already starts {parent}")
    hid = masked_words(ref, ref.text_off + addr, pend)
    head = masked_words(ref, prom, ref.text_off + addr)
    name = a.name or f"func_{addr:08X}"
    found = {}
    for v in sharing_versions(a.ver, a.module):
        if v != a.ver and not (ROOT / "tmp/build" / v / f"reloc_addrs.{a.module}.txt").exists():
            print(f"{v}: not split yet, splitting")
            subprocess.run(["make", "split", f"VERSION={v}", f"MODULE={a.module}"], cwd=ROOT, capture_output=True)
        mod = AD.Module(v, a.module) if v != a.ver else ref
        for n, (r, e, _) in mod.funcs.items():
            n_words = (e - r) // 4
            if n_words <= len(hid):
                continue
            w = masked_words(mod, r, e)
            # the hidden code at the end of an entry whose head is the parent's
            if w[-len(hid):] == hid and w[:min(len(head), n_words - len(hid))] == head[:n_words - len(hid)]:
                found[v] = (n, r - mod.text_off + (n_words - len(hid)) * 4)
                break
    print(f"{name}: " + ", ".join(f"{v}@0x{x:X} (in {n})" for v, (n, x) in sorted(found.items())))
    if a.dry_run:
        return
    backup = {}

    def write(p, t):
        if p not in backup:
            backup[p] = p.read_text() if p.exists() else None
        p.write_text(t)

    def restore():
        for p, t in backup.items():
            p.unlink() if t is None else p.write_text(t)

    # an explicit NAME is used in every version; otherwise each version gets func_<its address>, except
    # that the versions sharing one source entry must share its name (the lowest version's)
    vname = {v: (name if a.name or v == a.ver else f"func_{x:08X}") for v, (_, x) in found.items()}
    import fwmodel as FM
    sd = src_dir(a.ver, a.module)
    fv = sorted({int(re.match(r"\d+", v)[0]) for v in sharing_versions(a.ver, a.module)})
    have = {int(re.match(r"\d+", v)[0]): v for v in found}
    parsed = {f: FM.parse(f.read_text(), fv) for f in sorted(sd.glob("*.c"))}
    groups = []  # (file, entry, versions)
    for f, ents in parsed.items():
        for e in ents:
            if e.kind != "asm":
                continue
            vs = [n for n in e.vers if n in have and found[have[n]][0] == e.name]
            if vs:
                groups.append((f, e, vs))
                names = {vname[have[n]] for n in vs}
                if len(names) != 1:
                    nm = vname[a.ver] if a.ver in (have[n] for n in vs) else vname[have[min(vs)]]
                    print(f"{e.name}: one entry for {sorted(have[n] for n in vs)}: naming it {nm} in all of them")
                    for n in vs:
                        vname[have[n]] = nm
    try:
        for v, (n, x) in found.items():
            fs = ROOT / "config" / v / f"func_starts.{a.module}.txt"
            t = fs.read_text() if fs.exists() else "// hidden functions split out of their predecessors (tools/split_func.py)\n"
            if f"0x{x:08X};" not in t:
                write(fs, t.rstrip("\n") + f"\n{vname[v]} = 0x{x:08X}; // type:func\n")
            cfg = ROOT / "config" / v / f"{a.module}.yaml"
            ct = cfg.read_text()
            rel = f"config/{v}/func_starts.{a.module}.txt"
            if rel not in ct:
                ct2 = re.sub(rf"(\n\s*- config/{v}/symbol_addrs\.{a.module}\.txt\n)", rf"\1    - {rel}\n", ct, count=1)
                if ct2 == ct:
                    raise RuntimeError(f"{cfg}: cannot find symbol_addrs_path to extend")
                write(cfg, ct2)
        # source: an INCLUDE_ASM entry for the new function right after each parent entry, guarded by exactly
        # the versions (of those the parent entry covers) that have the hidden code
        for f, ents in parsed.items():
            out, changed = [], False
            for e in ents:
                out.append(e)
                g = next((g for g in groups if g[0] == f and g[1] is e), None)
                if g is None:
                    continue
                nm = vname[have[g[2][0]]]
                folder = re.match(r'INCLUDE_ASM\("([^"]+)"', e.text)[1]
                out.append(FM.Entry(frozenset(g[2]), "asm", nm, f'INCLUDE_ASM("{folder}", {nm});\n'))
                changed = True
            if changed:
                write(f, FM.emit(out, fv))
    except BaseException as ex:
        restore()
        sys.exit(f"{name}: FAILED ({ex}), restored")
    try:
        r = subprocess.run(["tools/regress.sh", "--shared", f"{a.ver}:{a.module}"], cwd=ROOT, capture_output=True, text=True)
    except KeyboardInterrupt:
        restore()
        sys.exit(f"{name}: interrupted, restored (re-run the shared regress)")
    bad = [l for l in r.stdout.splitlines() if ": OK" not in l]
    if bad:
        restore()
        subprocess.run(["tools/regress.sh", "--shared", f"{a.ver}:{a.module}"], cwd=ROOT, capture_output=True)
        sys.exit(f"{name}: FAILED, restored: {bad[:3]}")
    print(f"{name}: OK, split in {sorted(found)}")


if __name__ == "__main__":
    main()
