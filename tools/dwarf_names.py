#!/usr/bin/env python3
"""Real function names from devkit DWARF (tools/dwarf_dump.py output).

    tools/dwarf_names.py VER MODULE DWARF.json [--apply]

Every DWARF function whose code is byte-identical (relocated words and jump
targets masked) to exactly one function of VER's built module gives that
function its real name. The rename covers the module's shared source (C, decls)
and the symbol_addrs of every version built from it, so all versions keep
matching. Without --apply only the pairs are printed.
"""
import json
import re
import struct
import subprocess
import sys
from pathlib import Path

from elftools.elf.elffile import ELFFile

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
from srcdir import sharing_versions, src_dir  # noqa: E402

AUTO = re.compile(r"func_[0-9A-F]{8}")


def built_funcs(ver, mod):
    elf = ELFFile(open(ROOT / "tmp/build" / ver / f"{mod}.elf", "rb"))
    out = {}
    for s in elf.get_section_by_name(".symtab").iter_symbols():
        if s["st_info"]["type"] == "STT_FUNC" and s.name and not s.name.endswith(".NON_MATCHING"):
            out.setdefault(s["st_value"], s.name)
    base = ELFFile(open(ROOT / "tmp/baserom" / ver / f"{mod}.prx", "rb"))
    seg = base.get_segment(0)
    text = seg.data()
    return {a - seg["p_vaddr"]: n for a, n in out.items()}, text


def find(words, text):
    n = len(words)
    first = next((k for k, w in enumerate(words) if w is not None and w >> 26 not in (2, 3)), None)
    if first is None:
        return []
    hits = []
    for p in range(0, len(text) - 4 * n + 1, 4):
        if struct.unpack_from("<I", text, p + 4 * first)[0] != words[first]:
            continue
        ok = True
        for k, w in enumerate(words):
            if w is None:
                continue
            t = struct.unpack_from("<I", text, p + 4 * k)[0]
            if t != w and not (w >> 26 in (2, 3) and t >> 26 == w >> 26):
                ok = False
                break
        if ok:
            hits.append(p)
    return hits


def main():
    ver, mod, dj = sys.argv[1], sys.argv[2], sys.argv[3]
    apply = "--apply" in sys.argv
    names, text = built_funcs(ver, mod)
    dwarf = json.loads(Path(dj).read_text())
    pairs = {}
    taken = set(names.values())
    for cu in dwarf:
        for f in cu["funcs"]:
            if "words" not in f or len(f["words"]) < 3:
                continue
            hits = [h for h in find(f["words"], text) if h in names]
            if len(hits) != 1:
                continue
            old, new = names[hits[0]], f["name"]
            if old == new or new in taken or old in pairs:
                continue
            pairs[old] = new
            taken.add(new)
    for o, n in sorted(pairs.items()):
        print(f"{o} -> {n}")
    print(f"{len(pairs)} names")
    if not apply or not pairs:
        return
    pat = re.compile(r"\b(" + "|".join(map(re.escape, pairs)) + r")\b")
    sd = src_dir(ver, mod)
    for p in sd.iterdir():
        if p.suffix in (".c", ".h", ".json"):
            t = p.read_text()
            n = pat.sub(lambda m: pairs[m[1]], t)
            if n != t:
                p.write_text(n)
    for v in sharing_versions(ver, mod):
        symf = ROOT / "config" / v / f"symbol_addrs.{mod}.txt"
        t = symf.read_text() if symf.exists() else ""
        defined = set(re.findall(r"^(\w+) =", t, re.M))
        t = re.sub(r"^(\w+)( =)", lambda m: (pairs.get(m[1], m[1])) + m[2], t, flags=re.M)
        # auto names of this version (func_<its own address>) need an explicit entry
        extra = []
        elf = ELFFile(open(ROOT / "tmp/build" / v / f"{mod}.elf", "rb"))
        vaddr = {sy.name: sy["st_value"] for sy in elf.get_section_by_name(".symtab").iter_symbols()
                 if sy["st_info"]["type"] == "STT_FUNC"}
        for o, n in pairs.items():
            if o not in defined and AUTO.fullmatch(o) and vaddr.get(o) == int(o[5:], 16):
                extra.append(f"{n} = 0x{o[5:]}; // type:func")
        if extra:
            t = t.rstrip("\n") + "\n// real names (devkit DWARF, tools/dwarf_names.py)\n" + "\n".join(extra) + "\n"
        symf.write_text(t)
    r = subprocess.run(["tools/regress.sh", "--shared", f"{ver}:{mod}"], cwd=ROOT, capture_output=True, text=True)
    print(r.stdout.strip())
    if r.returncode:
        subprocess.run(["git", "checkout", "-q", "--", str(sd.relative_to(ROOT))] +
                       [f"config/{v}/symbol_addrs.{mod}.txt" for v in sharing_versions(ver, mod)], cwd=ROOT)
        sys.exit("verification failed, reverted")


if __name__ == "__main__":
    main()
