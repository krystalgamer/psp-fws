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
is rebuilt; everything is restored on a mismatch.
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
    vname = {v: (name if v == a.ver or not re.fullmatch(r"func_[0-9A-F]{8}", name) else f"func_{x:08X}")
             for v, (_, x) in found.items()}
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
                sys.exit(f"{cfg}: cannot find symbol_addrs_path to extend")
            write(cfg, ct2)
    # source: INCLUDE_ASM for the new entry after each parent entry that covers versions having it
    sd = src_dir(a.ver, a.module)
    for f in sd.glob("*.c"):
        t = f.read_text()
        parents = {n for n, _ in found.values()}
        out, changed = [], False
        for line in t.splitlines(keepends=True):
            out.append(line)
            m = re.match(r'^INCLUDE_ASM\("([^"]+)", (\w+)\);\s*$', line)
            if m and m[2] in parents:
                vs = [v for v, (n, _) in found.items() if n == m[2]]
                names = {vname[v] for v in vs}
                if len(names) == 1:
                    out.append(f'INCLUDE_ASM("{m[1]}", {names.pop()});\n')
                    changed = True
        if changed:
            write(f, "".join(out))
    r = subprocess.run(["tools/regress.sh", "--shared", f"{a.ver}:{a.module}"], cwd=ROOT, capture_output=True, text=True)
    bad = [l for l in r.stdout.splitlines() if ": OK" not in l]
    if bad:
        for p, t in backup.items():
            p.unlink() if t is None else p.write_text(t)
        subprocess.run(["tools/regress.sh", "--shared", f"{a.ver}:{a.module}"], cwd=ROOT, capture_output=True)
        sys.exit(f"{name}: FAILED, restored: {bad[:3]}")
    print(f"{name}: OK, split in {sorted(found)}")


if __name__ == "__main__":
    main()
