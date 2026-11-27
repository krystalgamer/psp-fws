#!/usr/bin/env python3
"""Split a module's C file into several translation units.

Each new TU starts at the given function and gets its own C file
(src/<mod>/<mod>_<VRAM>.c), `c` and `.rodata` subsegments in the config and,
optionally, its own cflags. Text and rodata stay in the same order, so the
link layout is unchanged; the module is re-split and must still match.

Usage: tools/split_tu.py VERSION MODULE FUNC[:CFLAGS] [FUNC[:CFLAGS] ...] [--config-only] [--stem=NAME]
  --config-only: only the config of VERSION (shared sources: tools/split_shared_tail.py)
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
    args = sys.argv[1:]
    config_only = "--config-only" in args
    stem_opt = next((a.split("=", 1)[1] for a in args if a.startswith("--stem=")), None)
    args = [a for a in args if a != "--config-only" and not a.startswith("--stem=")]
    ver, mod, specs = args[0], args[1], args[2:]
    cfg = ROOT / "config" / ver / f"{mod}.yaml"
    from srcdir import src_dir as _sd
    src_dir = _sd(ver, mod)
    elf = ELFFile(open(ROOT / "tmp/build" / ver / f"{mod}.elf", "rb"))
    addr = {s.name: s["st_value"] for s in elf.get_section_by_name(".symtab").iter_symbols() if s.name}
    text_off = ELFFile(open(ROOT / "tmp/baserom" / ver / f"{mod}.prx", "rb")).get_segment(0)["p_offset"]
    asm_dir = ROOT / "tmp/asm" / ver / mod / "nonmatchings"

    # Functions branching to labels of other functions share their object:
    # drop cuts that would separate them.
    label_owner, branches = {}, {}
    for s in asm_dir.glob("*/*.s"):
        text = s.read_text()
        for lab in re.findall(r"^\s*(\.L[0-9A-Fa-f_]+):", text, re.M):
            label_owner[lab] = s.stem
        branches[s.stem] = set(re.findall(r"^\s*/\*[^*]*\*/\s+(?:b\w*|j)\s+[^\n]*?(\.L[0-9A-Fa-f_]+)\s*$", text, re.M))
    cut_addrs = sorted(addr[spec.partition(":")[0]] for spec in specs)

    def piece(a):
        return sum(1 for c in cut_addrs if c <= a)

    bad = set()
    for f, labs in branches.items():
        for lab in labs:
            g = label_owner.get(lab)
            if g and g != f and f in addr and g in addr and piece(addr[f]) != piece(addr[g]):
                lo, hi = sorted((addr[f], addr[g]))
                bad |= {c for c in cut_addrs if lo < c <= hi}
    if bad:
        specs = [s for s in specs if addr[s.partition(":")[0]] not in bad]
        print(f"dropped {len(bad)} cuts separating functions that share labels", file=sys.stderr)

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
    # alternate entry labels inside functions are not function starts
    known |= {n for s in asm_dir.glob("*/*.s") for n in re.findall(r"^\s*alabel\s+(\w+)", s.read_text(), re.M)}
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
        if config_only:
            # shared source: only this version's entries, without conditions
            import fwmodel as FM
            from srcdir import sharing_versions
            fv = sorted({int(re.match(r"\d+", x)[0]) for x in sharing_versions(ver, mod)})
            vn = int(re.match(r"\d+", ver)[0])
            lines = "".join(e.text if e.text.endswith("\n") else e.text + "\n"
                            for e in FM.parse(owner.read_text(), fv) if vn in e.vers).splitlines(keepends=True)
            lines = [l for l in lines if not re.match(r"^#\s*(if|else|elif|endif)", l)]
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
            pieces.append((stem_opt or f"{mod}_{addr[name]:06X}", (name, cflags), lines[idx:bounds[k + 1]]))

        def rodata_start(body, stem):
            lo = None
            for l in body:
                m = re.search(r"INCLUDE_RODATA\(\"[^\"]+\", (\w+)\)", l)
                cands = [m[1]] if m else []
                m = re.search(r"INCLUDE_ASM\(\"([^\"]+)\", (\w+)\)", l)
                if m:
                    s = ROOT / "tmp/asm" / ver / mod / m[1] / f"{m[2]}.s"
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
                if not config_only:
                    owner.write_text("".join(header + body))
                continue
            name, cflags = cut
            h = "".join(header)
            if cflags:
                # a per-version `cflags[...]` line covering this version overrides the plain one: rewrite that
                vnum = int(re.match(r"\d+", str(ver))[0])

                def covers(spec):
                    for part in spec.replace(" ", "").split(","):
                        lo, _, hi = part.partition("-")
                        if int(lo) <= vnum <= int(hi or lo):
                            return True
                    return False
                done_v = False
                for m in list(re.finditer(r"/\* cflags\[([0-9,\- ]+)\]: [^*]*\*/", h)):
                    if covers(m[1]):
                        h = h.replace(m[0], f"/* cflags[{m[1]}]: {cflags} */", 1)
                        done_v = True
                if not done_v:
                    if re.search(r"/\* cflags: [^*]*\*/", h):
                        h = re.sub(r"/\* cflags: [^*]*\*/", f"/* cflags: {cflags} */", h)
                    else:
                        h = f"/* cflags: {cflags} */\n" + h
            text = h + "".join(body).replace(f'nonmatchings/{owner.stem}"', f'nonmatchings/{stem}"')
            if not config_only:
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
            new_at = {int(re.search(r"0x[0-9A-Fa-f]+", e)[0], 16) for e in entries}
            # an existing piece starting where a new one starts is empty in this version: replaced
            allc = sorted([(int(re.search(r"0x[0-9A-Fa-f]+", l)[0], 16), l) for _, i in existing for l in [lines_[i]]
                           if int(re.search(r"0x[0-9A-Fa-f]+", l)[0], 16) not in new_at]
                          + [(int(re.search(r"0x[0-9A-Fa-f]+", e)[0], 16), e) for e in entries])
            first_i = min(i for _, i in existing)
            out = lines_[:first_i] + [l for _, l in allc] + lines_[last + 1:]
            return "\n".join(out) + "\n"

        cfg_text = insert(cfg_text, "c", new_c)
        if new_ro:
            cfg_text = insert(cfg_text, ".rodata", new_ro)
    cfg.write_text(cfg_text)
    if config_only:
        return
    rc, out = run("tools/regress.sh", "--shared", f"{ver}:{mod}")
    print(out.strip())
    sys.exit(rc)


if __name__ == "__main__":
    main()
