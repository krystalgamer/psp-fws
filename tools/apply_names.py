#!/usr/bin/env python3
"""Apply `name = 0xADDR; // type:func` lines to a module.

Appends them to config/<ver>/symbol_addrs.<mod>.txt and renames the
func_XXXXXXXX references in src/<mod>/. Names that already exist in the
module (or its imports) get a `lib_` prefix; addresses that already have a
non-generic name are skipped. Re-split and verify afterwards.

Usage: tools/apply_names.py VERSION MODULE NAMES_FILE [--comment TEXT]
"""
import argparse
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
LINE = re.compile(r"^\s*(\w+)\s*=\s*(0x[0-9A-Fa-f]+);")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("version")
    ap.add_argument("module")
    ap.add_argument("names")
    ap.add_argument("--comment", default="library functions identified by tools/libnames.py")
    a = ap.parse_args()
    cfg = ROOT / "config" / a.version / f"symbol_addrs.{a.module}.txt"
    existing = {}
    for f in [cfg, ROOT / "tmp/build" / a.version / f"prx_syms.{a.module}.txt"]:
        if f.exists():
            for line in f.read_text().splitlines():
                m = LINE.match(line)
                if m:
                    existing[m[1]] = int(m[2], 16)
    by_addr = {v: k for k, v in existing.items()}
    src_dir = __import__("srcdir").src_dir(a.version, a.module)
    src_text = "\n".join(p.read_text() for p in src_dir.glob("*") if p.is_file())
    taken = set(existing) | set(re.findall(r"\b[A-Za-z_]\w*\b", src_text))
    new, renames = [], {}
    for line in Path(a.names).read_text().splitlines():
        m = LINE.match(line)
        if not m:
            continue
        name, addr = m[1], int(m[2], 16)
        if addr in by_addr and not by_addr[addr].startswith("func_"):
            continue
        if name in taken:
            name = f"lib_{name}"
            if name in taken:
                continue
        taken.add(name)
        new.append(f"{name} = 0x{addr:08X}; // type:func")
        renames[f"func_{addr:08X}"] = name
    if not new:
        print("nothing to apply")
        return
    cfg.write_text(cfg.read_text().rstrip("\n") + f"\n// {a.comment}\n" + "\n".join(new) + "\n")
    pat = re.compile(r"\b(" + "|".join(map(re.escape, renames)) + r")\b")
    for p in src_dir.glob("*"):
        if p.is_file():
            t = p.read_text()
            t2 = pat.sub(lambda m: renames[m[1]], t)
            if t2 != t:
                p.write_text(t2)
    print(f"applied {len(new)} names")


if __name__ == "__main__":
    main()
