#!/usr/bin/env python3
"""Split a module's C file into several translation units.

Each new TU starts at the given function and gets its own C file
(src/<mod>/<mod>_<VRAM>.c), `c` and `.rodata` subsegments in the config and,
optionally, its own cflags. Text and rodata stay in the same order, so the
link layout is unchanged; the module is re-split and must still match.

Usage: tools/split_tu.py VERSION MODULE FUNC[:CFLAGS] [FUNC[:CFLAGS] ...]
  e.g. tools/split_tu.py 303 lftv_middleware func_00000300:-O0 func_00015FC0
Needs a current build (tmp/build/<ver>/<mod>.elf) and split asm.
"""
import re
import subprocess
import sys
from pathlib import Path

from elftools.elf.elffile import ELFFile

ROOT = Path(__file__).resolve().parent.parent


def run(*cmd):
    r = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True)
    return r.returncode, r.stdout + r.stderr


def main():
    ver, mod, specs = sys.argv[1], sys.argv[2], sys.argv[3:]
    cfg = ROOT / "config" / ver / f"{mod}.yaml"
    src_dir = ROOT / "src" / mod
    elf = ELFFile(open(ROOT / "tmp/build" / ver / f"{mod}.elf", "rb"))
    addr = {s.name: s["st_value"] for s in elf.get_section_by_name(".symtab").iter_symbols() if s.name}
    text_off = ELFFile(open(ROOT / "tmp/baserom" / ver / f"{mod}.prx", "rb")).get_segment(0)["p_offset"]
    asm_dir = ROOT / "tmp/asm" / ver / mod / "nonmatchings"

    # The file that currently holds each boundary function.
    files = sorted(src_dir.glob("*.c"))
    cuts = {}
    for spec in specs:
        name, _, cflags = spec.partition(":")
        owner = next(f for f in files if re.search(rf"(, {name}\);|^[^\n;]*\b{name}\([^;{{]*\)\s*\{{$)", f.read_text(), re.M))
        cuts.setdefault(owner, []).append((name, cflags))

    cfg_text = cfg.read_text()
    # Function boundaries found through calls from other segments must survive
    # the split: pin every current function start as a symbol.
    starts_file = ROOT / "config" / ver / f"func_starts.{mod}.txt"
    shndx = next(i for i, s in enumerate(elf.iter_sections()) if s.name == f".{mod}")
    known = set(re.findall(r"^\s*(\w+)\s*=", (ROOT / "config" / ver / f"symbol_addrs.{mod}.txt").read_text(), re.M))
    lines_ = sorted({(s["st_value"], s.name) for s in elf.get_section_by_name(".symtab").iter_symbols()
                     if s["st_shndx"] == shndx and s["st_info"]["type"] == "STT_FUNC" and "." not in s.name
                     and s.name not in known})
    starts_file.write_text("// function starts pinned by tools/split_tu.py\n" + "".join(
        f"{n} = 0x{a:08X}; // type:func\n" for a, n in lines_))
    rel = f"config/{ver}/func_starts.{mod}.txt"
    if rel not in cfg_text:
        cfg_text = cfg_text.replace(f"    - config/{ver}/symbol_addrs.{mod}.txt\n",
                                    f"    - config/{ver}/symbol_addrs.{mod}.txt\n    - {rel}\n", 1)
    for owner, cut_list in cuts.items():
        lines = owner.read_text().splitlines(keepends=True)
        first = next(i for i, l in enumerate(lines) if l.startswith(("INCLUDE_ASM", "INCLUDE_RODATA")) or re.match(r"^\w[\w \*]*\b\w+\(.*\)\s*\{$", l))
        header = lines[:first]
        starts = []
        for name, cflags in cut_list:
            idx = next(i for i, l in enumerate(lines) if f", {name});" in l or re.match(rf"^[^;]*\b{name}\([^;{{]*\)\s*\{{$", l))
            starts.append((idx, name, cflags))
        starts.sort()
        pieces = []
        bounds = [s[0] for s in starts] + [len(lines)]
        pieces.append((owner.stem, None, lines[first:bounds[0]]))
        for k, (idx, name, cflags) in enumerate(starts):
            pieces.append((f"{mod}_{addr[name]:06X}", (name, cflags), lines[idx:bounds[k + 1]]))

        def rodata_start(body, stem):
            lo = None
            for l in body:
                m = re.search(r"INCLUDE_RODATA\(\"[^\"]+\", (\w+)\)", l)
                cands = [m[1]] if m else []
                m = re.search(r"INCLUDE_ASM\(\"([^\"]+)\", (\w+)\)", l)
                if m:
                    s = ROOT / m[1] / f"{m[2]}.s"
                    if s.exists():
                        for sec in re.split(r"^\s*\.section\s+", s.read_text(), flags=re.M)[1:]:
                            if sec.startswith((".rodata", ".late_rodata")):
                                cands += re.findall(r"^\s*(?:glabel|dlabel|jlabel)\s+(\w+)", sec, re.M)
                for c in cands:
                    if c in addr and (lo is None or addr[c] < lo):
                        lo = addr[c]
            return lo

        new_c, new_ro = [], []
        prev_ro = None
        for stem, cut, body in pieces:
            ro = rodata_start(body, stem)
            if ro is not None and prev_ro is not None and ro < prev_ro:
                sys.exit(f"{stem}: rodata at 0x{ro:X} precedes the previous piece's (0x{prev_ro:X})")
            if ro is not None:
                prev_ro = ro
            if cut is None:
                owner.write_text("".join(header + body))
                continue
            name, cflags = cut
            h = "".join(header)
            if cflags:
                if "cflags:" in h:
                    h = re.sub(r"/\* cflags: [^*]*\*/", f"/* cflags: {cflags} */", h)
                else:
                    h = f"/* cflags: {cflags} */\n" + h
            text = h + "".join(body).replace(f'/nonmatchings/{owner.stem}"', f'/nonmatchings/{stem}"')
            (src_dir / f"{stem}.c").write_text(text)
            new_c.append(f"      - [0x{addr[name] + text_off:X}, c, {stem}]")
            if ro is not None:
                new_ro.append(f"      - [0x{ro + text_off:X}, .rodata, {stem}]")

        def insert(text, kind, entries):
            lines_ = text.splitlines()
            out = []
            pat = re.compile(rf"^\s+- \[(0x[0-9A-Fa-f]+), {re.escape(kind)}, (\w+)\]$")
            existing = [(int(m[1], 16), i) for i, l in enumerate(lines_) if (m := pat.match(l))]
            if not existing:
                sys.exit(f"no {kind} subsegment in config")
            last = max(i for _, i in existing)
            allc = sorted([(int(re.search(r"0x[0-9A-Fa-f]+", l)[0], 16), l) for _, i in existing for l in [lines_[i]]]
                          + [(int(re.search(r"0x[0-9A-Fa-f]+", e)[0], 16), e) for e in entries])
            first_i = min(i for _, i in existing)
            out = lines_[:first_i] + [l for _, l in allc] + lines_[last + 1:]
            return "\n".join(out) + "\n"

        cfg_text = insert(cfg_text, "c", new_c)
        if new_ro:
            cfg_text = insert(cfg_text, ".rodata", new_ro)
    cfg.write_text(cfg_text)
    rc, out = run("tools/regress.sh", f"{ver}:{mod}")
    print(out.strip())
    sys.exit(rc)


if __name__ == "__main__":
    main()
