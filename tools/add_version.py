#!/usr/bin/env python3
"""Make another firmware version of a module build from its shared C source.

    tools/add_version.py REF_VER NEW_VER MODULE [--dry-run]

REF_VER is a version already built from src/<module>/ (its config has the c
subsegment). NEW_VER gets the same source: its functions and rodata are aligned
with REF_VER's by normalised asm (addresses/symbol names abstracted).

- identical functions/rodata get REF_VER's names in NEW_VER
  (config/NEW_VER/symbol_addrs.<module>.txt, "shared names" block), so the C
  (or INCLUDE_ASM) in the shared file serves both;
- functions present only in one version are wrapped in `#if FW_VERSION ...`;
- shared C that does not match NEW_VER becomes
  `#if FW_VERSION == NEW` INCLUDE_ASM `#else` C `#endif`.

Both versions are rebuilt from scratch and must match; on failure everything is
restored. Single-TU modules only (one c subsegment) for now.
"""
import argparse
import os
import difflib
import hashlib
import re
import shutil
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import auto_decomp as AD  # noqa: E402
import fwmodel as FM  # noqa: E402
from srcdir import sharing_versions  # noqa: E402

SYM = re.compile(r"\b(?:func|D|jtbl|L)_[0-9A-F]{8}\b|\.L[0-9A-F]{8}\b")
# every symbol in operand position (real names too: REF's globals/helpers may be named, NEW's still auto)
OPER = re.compile(r"\b(?:func|D|jtbl|L)_[0-9A-F]{8}\b|\.L[0-9A-F]{8}\b|(?<=%hi\()[A-Za-z_]\w*|(?<=%lo\()[A-Za-z_]\w*"
                  r"|(?<=\bjal)\s+[A-Za-z_]\w*|(?<=\bj)\s+[A-Za-z_]\w*|(?<=\.word)\s+[A-Za-z_]\w*")
AUTO = re.compile(r"(?:func|D|jtbl)_[0-9A-F]{8}")
LINES = {}  # hash -> normalised lines (for similarity pairing)
BEGIN, END = "// shared names (tools/add_version.py) begin", "// shared names (tools/add_version.py) end"


def fwnum(v):
    return int(re.match(r"\d+", v)[0])


def run(*cmd, check=False):
    r = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True)
    if check and r.returncode:
        raise RuntimeError(f"{' '.join(cmd)} failed:\n{(r.stdout + r.stderr)[-2000:]}")
    return r.returncode, r.stdout + r.stderr


def cfg_path(v, mod):
    return ROOT / "config" / v / f"{mod}.yaml"


def c_subsegs(text, mod):
    return re.findall(rf"^\s+- \[(0x[0-9A-Fa-f]+), (c|asm), ({mod}\w*)\]", text, re.M)


def normalise(path, names):
    """(hash, [symbols in order], kind) of one splat asm file. Symbols that are
    named (NIDs etc.) stay literal; func_/D_ style names are abstracted."""
    syms, out, base = [], [], None
    kind = "func" if re.search(r"^(?:glabel|jlabel) ", path.read_text(), re.M) else "data"
    for line in path.read_text().splitlines():
        line = line.split("#")[0] if "/*" not in line.split("#")[0][-3:] else line
        m = re.match(r"\s*/\* ([0-9A-F]+) ([0-9A-F]+)(?: [0-9A-F]+)? \*/\s*(.*)", line)
        if m:
            addr, body = int(m[2], 16), m[3]
            base = addr if base is None else base
        elif re.match(r"\s*/\* [0-9A-F]+ \*/\s*$", line):
            continue  # raw data bytes comment
        else:
            body = line.strip()
            if body.startswith(("nonmatching", ".set", "/* Generated")) or not body:
                if body.startswith("nonmatching"):
                    body = re.sub(r"^nonmatching \S+?(,|$)", r"nonmatching @\1", body)
                    out.append(body)
                continue

        def sub(mm):
            s = mm[0]
            lead = s[:len(s) - len(s.lstrip())]
            s = s.strip()
            if s.startswith(".L"):
                return f"{lead}.L+{int(s[2:], 16) - (base or 0):X}"
            syms.append(s)
            return lead + "@"
        body = OPER.sub(sub, body)
        # named symbols (not func_/D_) must match literally; record them too
        for nm in re.findall(r"\b(?:glabel|jlabel|dlabel|endlabel|enddlabel)\s+(\w+)", line):
            if not SYM.fullmatch(nm):
                syms.append(nm)
        out.append(re.sub(r"\b(glabel|jlabel|dlabel|endlabel|enddlabel)\s+\w+", r"\1 @", body))
    h = hashlib.sha1("\n".join(out).encode()).hexdigest()
    LINES[h] = out
    return h, syms, kind


def units(ver, mod, stem, cfile, versions=None):
    """[(name, hash, syms, kind)] of the functions/rodata of one TU, in the
    order of the C file's entries compiled for `ver` (splat's placement of
    INCLUDE_RODATA). `versions`: FW numbers sharing the file (None: all entries)."""
    d = ROOT / "tmp/asm" / ver / mod / "nonmatchings" / stem
    items = []
    if versions:
        ents = [(e.kind, e.name, e.text) for e in FM.parse(cfile.read_text(), versions) if fwnum(ver) in e.vers]
    else:
        ents = entries(cfile.read_text())
    seen = set()
    for kind, name, _ in ents:
        if kind == "other" or name in seen or not (d / f"{name}.s").exists():
            continue
        seen.add(name)
        h, syms, k = normalise(d / f"{name}.s", None)
        items.append((name, h, syms, k))
    return items


def similarity(r, n):
    rn, rh, _, rk = r
    nn, nh, _, nk = n
    if rk != nk:
        return 0
    named = lambda x: not re.fullmatch(r"(?:func|D|jtbl)_[0-9A-F]{8}", x)  # noqa: E731
    if named(rn) or named(nn):
        return 2 if rn == nn else 0
    sm = difflib.SequenceMatcher(None, LINES[rh], LINES[nh], autojunk=False)
    if sm.real_quick_ratio() < 0.5 or sm.quick_ratio() < 0.5:
        return 0
    q = sm.ratio()
    return q if q >= 0.5 else 0


def pair_block(rs, ns):
    """Order-preserving pairing of two runs of units maximising similarity."""
    if len(rs) * len(ns) > 200000:
        return [(i, j) for i, r in enumerate(rs) for j, n in enumerate(ns) if similarity(r, n) == 2]
    sim = [[similarity(r, n) for n in ns] for r in rs]
    best = [[0.0] * (len(ns) + 1) for _ in range(len(rs) + 1)]
    for i in range(len(rs) - 1, -1, -1):
        for j in range(len(ns) - 1, -1, -1):
            best[i][j] = max(best[i + 1][j], best[i][j + 1], (sim[i][j] + best[i + 1][j + 1]) if sim[i][j] else 0)
    out, i, j = [], 0, 0
    while i < len(rs) and j < len(ns):
        if sim[i][j] and best[i][j] == sim[i][j] + best[i + 1][j + 1]:
            out.append((i, j))
            i, j = i + 1, j + 1
        elif best[i][j] == best[i + 1][j]:
            i += 1
        else:
            j += 1
    return out


def entries(text):
    """Split a C file into top-level entries: (kind, name, text).
    kind: asm | rodata | cfunc | other."""
    out, pos = [], 0
    pat = re.compile(r'^INCLUDE_ASM\("[^"]+", (\w+)\);\n|^INCLUDE_RODATA\("[^"]+", (\w+)\);\n|'
                     r'^(?!static)[^\n;#]*?\b(\w+)\([^;{}]*\)\s*\{\n.*?^\}\n', re.M | re.S)
    for m in pat.finditer(text):
        if m.start() > pos:
            out.append(("other", None, text[pos:m.start()]))
        kind = "asm" if m[1] else "rodata" if m[2] else "cfunc"
        out.append((kind, m[1] or m[2] or m[3], m[0]))
        pos = m.end()
    out.append(("other", None, text[pos:]))
    return out


def label_roms(d):
    """{label: (rom, vram)} of every label in the asm files under d."""
    out = {}
    lab = re.compile(r"^\s*(?:glabel|dlabel|jlabel|alabel|nonmatching)\s+(\w+)")
    com = re.compile(r"^\s*/\* ([0-9A-F]+) ([0-9A-F]{8})\b")
    for p in d.rglob("*.s"):
        pending = []
        for line in p.read_text().splitlines():
            m = lab.match(line)
            if m:
                pending.append(m[1])
                continue
            m = com.match(line)
            if m and pending:
                for n in pending:
                    out.setdefault(n, (int(m[1], 16), int(m[2], 16)))
                pending = []
    return out


def unit_rodata(d, name):
    return [int(m[1], 16) for m in re.finditer(r"(?m)^dlabel \w+\n\s*/\* ([0-9A-F]+) ", (d / f"{name}.s").read_text())]


def address_order(N, d):
    """Functions in text order; standalone rodata after the function whose
    migrated rodata precedes it (splat's stub lists unmigrated rodata first)."""
    funcs = [u for u in N if u[3] == "func"]
    data = [u for u in N if u[3] != "func"]
    out, last = [], []
    fro = [(max(unit_rodata(d, u[0]), default=-1), k) for k, u in enumerate(funcs)]
    slots = {}
    for u in data:
        r = min(unit_rodata(d, u[0]), default=-1)
        k = max((k for m, k in fro if 0 <= m < r), default=-1)
        slots.setdefault(k, []).append((r, u))
    for v in slots.values():
        v.sort(key=lambda x: x[0])
    out += [u for _, u in slots.get(-1, [])]
    for k, f in enumerate(funcs):
        out.append(f)
        out += [u for _, u in slots.get(k, [])]
    return out


def fix_boundaries(N, n_tu, nmap, stems, d):
    """Unpaired units between the last paired unit of one TU and the first of the
    next go to whichever TU keeps every TU's rodata in order."""
    ro = {nn: unit_rodata(d, nn) for nn, _, _, _ in N}
    idx = [k for k, u in enumerate(N) if u[0] in nmap]
    for a, b in zip(idx, idx[1:]):
        ta, tb = n_tu[N[a][0]], n_tu[N[b][0]]
        run = [u[0] for u in N[a + 1:b]]
        if ta == tb or not run:
            continue
        rest = lambda tu: [r for nn, t in n_tu.items() if t == tu and nn not in run for r in ro[nn]]  # noqa: E731
        maxa, minb = max(rest(ta), default=-1), min(rest(tb), default=1 << 32)
        for c in range(len(run), -1, -1):
            p1 = [r for nn in run[:c] for r in ro[nn]]
            p2 = [r for nn in run[c:] for r in ro[nn]]
            if all(x < minb for x in p1) and all(x > maxa for x in p2) and (not p1 or not p2 or max(p1) < min(p2)):
                for nn in run[c:]:
                    n_tu[nn] = tb
                break


class Unmigrate(Exception):
    pass


def split_config(ntext, mod, stems, N, n_tu, new, stem0):
    """NEW's config with one c (and .rodata) subsegment per TU."""
    d = ROOT / "tmp/asm" / new / mod / "nonmatchings" / stem0
    text_start, ro_start = {}, {}
    order = []
    for nn, _, _, k in N:
        tu = n_tu[nn]
        t = (d / f"{nn}.s").read_text()
        if k == "func":
            m = re.search(r"(?:glabel|jlabel) \w+\n\s*/\* ([0-9A-F]+) ", t)
            text_start.setdefault(tu, int(m[1], 16))
        for m in re.finditer(r"(?m)^dlabel (\w+)\n\s*/\* ([0-9A-F]+) [^\n]*\*/\s*(\S+ \S+)?", t):
            lab, r = m[1], int(m[2], 16)
            jt = bool(m[3] and m[3].startswith(".word .L"))
            ro_start[tu] = min(ro_start.get(tu, r), r)
            order.append((r, stems.index(tu), nn, lab if k == "func" else None, jt))
    order.sort()
    bad = [(a, b) for a, b in zip(order, order[1:]) if b[1] < a[1]]
    if bad:
        # longest run in TU order; migrated pieces outside it must not migrate
        seq = [o[1] for o in order]
        w = [1000 if o[4] else 1 for o in order]  # jump tables must stay with their function
        best, prev = list(w), [-1] * len(seq)
        for j in range(len(seq)):
            for i in range(j):
                if seq[i] <= seq[j] and best[i] + w[j] > best[j]:
                    best[j], prev[j] = best[i] + w[j], i
        j = max(range(len(seq)), key=lambda k: best[k])
        keep = set()
        while j >= 0:
            keep.add(j)
            j = prev[j]
        out = {order[k][3] for k in range(len(order)) if k not in keep and order[k][3] and not order[k][4]}
        if out:
            raise Unmigrate(out)
        (ra, ta, na, _, _), (rb, tb, nb, _, _) = bad[0]
        raise RuntimeError(f"rodata order of the TUs differs between versions: {na}@{ra:X} ({stems[ta]}) "
                           f"before {nb}@{rb:X} ({stems[tb]}); {len(bad)} inversions")
    cm = re.search(rf"^(\s+)- \[(0x[0-9A-Fa-f]+), c, {stem0}\]\n", ntext, re.M)
    rm = re.search(rf"^(\s+)- \[(0x[0-9A-Fa-f]+), \.rodata, {stem0}\]\n", ntext, re.M)
    tus = [st for st in stems if st in text_start]
    if text_start[tus[0]] != int(cm[2], 16):
        raise RuntimeError("first TU does not start the text")
    ntext = ntext.replace(cm[0], "".join(f"{cm[1]}- [0x{text_start[st]:X}, c, {st}]\n" for st in tus))
    if rm:
        rtus = [st for st in stems if st in ro_start]
        starts = [int(rm[2], 16)] + [ro_start[st] for st in rtus[1:]]
        ntext = ntext.replace(rm[0], "".join(f"{rm[1]}- [0x{a:X}, .rodata, {st}]\n" for a, st in zip(starts, rtus)))
    return ntext


def c_count(cfile, ver):
    """C function definitions the file has for one version."""
    r = subprocess.run(["cpp", "-P", "-undef", "-nostdinc", "-Iinclude", f"-I{cfile.parent}", f"-DFW_VERSION={fwnum(ver)}",
                        "-DM2CTX", str(cfile)], cwd=ROOT, capture_output=True, text=True)
    return len(re.findall(r"^(?!static)[^\n;#]*\b\w+\([^;{}]*\)\s*\{", r.stdout, re.M))


FBEGIN, FEND = "// not migrated (tools/add_version.py) begin", "// not migrated (tools/add_version.py) end"


class Retry(Exception):
    pass


def main():
    new, mod = sys.argv[2], sys.argv[3]
    symf = ROOT / "config" / new / f"symbol_addrs.{mod}.txt"
    orig = symf.read_text() if symf.exists() else None
    try:
        for k in range(4):
            try:
                return once(k > 0)
            except Retry:
                continue
        print("gave up after un-migrating rodata 4 times")
        sys.exit(1)
    except SystemExit as e:
        if e.code and orig is not None:
            symf.write_text(orig)
        raise


def once(retrying=False):
    ap = argparse.ArgumentParser()
    ap.add_argument("ref")
    ap.add_argument("new")
    ap.add_argument("module")
    ap.add_argument("--dry-run", action="store_true")
    ap.add_argument("--keep", action="store_true", help="leave the state on failure (debugging)")
    ap.add_argument("--extend", action="store_true",
                    help="first make NEW evaluate like REF in the sources (tools/extend_version.py): flag ranges, FW_VERSION tests")
    a = ap.parse_args()
    ref, new, mod = a.ref, a.new, a.module
    nv = fwnum(new)
    if fwnum(ref) == nv:
        sys.exit("versions with the same FW_VERSION number need FW_VARIANT handling (not supported yet)")
    rcfg, ncfg = cfg_path(ref, mod), cfg_path(new, mod)
    rtext, ntext0 = rcfg.read_text(), ncfg.read_text()
    rsub = [s for s in c_subsegs(rtext, mod) if s[1] == "c"]
    if not rsub or len(c_subsegs(ntext0, mod)) != 1:
        sys.exit(f"{mod}: {new} must be a single asm subsegment")
    if "src_path: src/" + mod + "\n" not in rtext:
        sys.exit(f"{mod}: {ref} does not build from src/{mod}")
    if "src_path: src/" + mod + "\n" in ntext0 and c_subsegs(ntext0, mod)[0][1] == "c":
        sys.exit(f"{mod}: {new} already shares the source")
    src = ROOT / "src" / mod
    if run("git", "diff", "--quiet", "--", f"src/{mod}", f"config/{new}/{mod}.yaml", f"config/{ref}/{mod}.yaml",
           *([] if retrying else [f"config/{new}/symbol_addrs.{mod}.txt"]))[0]:
        sys.exit(f"{mod}: local changes, aborting")
    if a.extend and not retrying:
        run(sys.executable, "tools/extend_version.py", mod, ref, new, check=True)
    stems = list(dict.fromkeys(x[2] for x in rsub))
    symf = ROOT / "config" / new / f"symbol_addrs.{mod}.txt"
    sym0 = symf.read_text() if symf.exists() else ""
    pinf = ROOT / "config" / new / f"func_starts.{mod}.txt"
    pin0 = pinf.read_text() if pinf.exists() else None

    def restore():
        shutil.rmtree(ROOT / "tmp/av_src" / new / mod, ignore_errors=True)
        ncfg.write_text(ntext0)
        symf.write_text(sym0) if sym0 or symf.exists() else None
        if pin0 is None:
            pinf.unlink(missing_ok=True)
        else:
            pinf.write_text(pin0)
        run("git", "checkout", "-q", "--", f"src/{mod}")

    try:
        # 1. both versions split per function (NEW as C pointing at the shared source)
        run("tools/regress.sh", f"{ref}:{mod}", check=True)
        # REF's asm for every function, also those it builds from C
        rscratch = ROOT / "tmp/av_src" / f"{ref}_ref" / mod
        shutil.rmtree(rscratch, ignore_errors=True)
        rscratch.mkdir(parents=True)
        try:
            rcfg.write_text(re.sub(r"^(\s*src_path:\s*)\S+", rf"\1{rscratch.relative_to(ROOT)}", rtext, flags=re.M))
            run("rm", "-rf", f"tmp/asm/{ref}/{mod}")
            run("make", "split", f"VERSION={ref}", f"MODULE={mod}", check=True)
        finally:
            rcfg.write_text(rtext)
            shutil.rmtree(rscratch, ignore_errors=True)
        ntext = re.sub(rf"^(\s+- \[0x[0-9A-Fa-f]+, )asm(, {mod}\])$", r"\1c\2", ntext0, flags=re.M)
        ntext = re.sub(rf"^(\s+- \[0x[0-9A-Fa-f]+, )rodata(, {mod}\])$", r"\1.rodata\2", ntext, flags=re.M)
        scratch = ROOT / "tmp/av_src" / new / mod
        shutil.rmtree(scratch, ignore_errors=True)
        scratch.mkdir(parents=True)
        # first split against an empty source dir so splat emits every function
        ncfg.write_text(re.sub(r"^(\s*src_path:\s*)\S+", rf"\1{scratch.relative_to(ROOT)}", ntext, flags=re.M))
        ntext = re.sub(r"^(\s*src_path:\s*)\S+", rf"\1src/{mod}", ntext, flags=re.M)
        rstem_new = c_subsegs(ntext, mod)[0][2]
        run("make", "extract", f"VERSION={new}", f"MODULE={mod}")
        run("rm", "-rf", f"tmp/asm/{new}/{mod}")
        run("make", "split", f"VERSION={new}", f"MODULE={mod}", check=True)
        S = sorted({fwnum(v) for v in sharing_versions(ref, mod)})
        R, r_tu = [], {}
        for st in stems:
            for u in units(ref, mod, st, src / f"{st}.c", S):
                R.append(u)
                r_tu[u[0]] = st
        N = units(new, mod, rstem_new, scratch / f"{rstem_new}.c")
        # 2. align
        sm = difflib.SequenceMatcher(None, [h for _, h, _, _ in R], [h for _, h, _, _ in N], autojunk=False)
        pair, mapping, rev = {}, {}, {}
        status = {}  # ref name -> shared | modified
        nmap = {}    # new name -> ref name (paired)

        def consistent(rs, ns):
            loc = {}
            for x, y in zip(rs, ns):
                # NEW's auto names may take REF's names (incl. real names of globals); real NEW names must agree
                if not AUTO.fullmatch(y) and x != y:
                    return None
                if mapping.get(y, x) != x or rev.get(x, y) != y or loc.get(y, x) != x:
                    return None
                loc[y] = x
            return loc
        for op, i1, i2, j1, j2 in sm.get_opcodes():
            if op == "equal":
                for k in range(i2 - i1):
                    rn, _, rs, _ = R[i1 + k]
                    nn, _, ns, _ = N[j1 + k]
                    loc = consistent(rs, ns)
                    if loc is not None and len(rs) == len(ns):
                        for y, x in loc.items():
                            mapping[y], rev[x] = x, y
                        status[rn] = "shared"
                    else:
                        status[rn] = "modified"
                    nmap[nn] = rn
            elif op == "replace":
                for i, j in pair_block(R[i1:i2], N[j1:j2]):
                    status[R[i1 + i][0]] = "modified"
                    nmap[N[j1 + j][0]] = R[i1 + i][0]
        for nn, rn in nmap.items():
            if status[rn] == "modified" and (not AUTO.fullmatch(nn) or not AUTO.fullmatch(rn)) and nn != rn:
                del status[rn]
            elif status[rn] == "modified" and mapping.get(nn, rn) == rn and rev.get(rn, nn) == nn:
                mapping[nn], rev[rn] = rn, nn
            elif status[rn] == "modified":
                del status[rn]
        nmap = {nn: rn for nn, rn in nmap.items() if rn in status and mapping.get(nn) == rn}
        # 3. canonical names for NEW (only renamed symbols)
        addr_of = {}
        for line in (ROOT / "tmp/build" / new / f"{mod}.map").read_text().splitlines() if False else []:
            pass
        nsyms = {}
        for p in (ROOT / "tmp/asm" / new / mod).rglob("*.s"):
            for m in re.finditer(r"/\* [0-9A-F]+ ([0-9A-F]{8})[^\n]*\*/[^\n]*\n?", p.read_text()[:400]):
                nsyms[p.stem] = int(m[1], 16)
                break
        roms = label_roms(ROOT / "tmp/asm" / new / mod)
        segs = []  # (name, vram start, vram end) of the code segments
        for m in re.finditer(r"- name: (\w+)\n\s+type: code\n\s+start: (0x[0-9A-Fa-f]+)\n\s+vram: (0x[0-9A-Fa-f]+)\n(?:\s+bss_size: (0x[0-9A-Fa-f]+)\n)?", ntext):
            segs.append([m[1], int(m[2], 16), int(m[3], 16), int(m[4] or "0", 16)])
        starts = sorted(x[1] for x in segs) + [1 << 32]
        seg_range = [(nm, vr, vr + (min(t for t in starts if t > st) - st if any(t > st for t in starts) else 0) + bss)
                     for nm, st, vr, bss in segs]

        def where(y, addr):
            if y in roms and roms[y][1] == addr:
                return f" rom:0x{roms[y][0]:X}"
            inside = [nm for nm, lo, hi in seg_range if lo <= addr < hi]
            return f" segment:{inside[-1]}" if len(inside) > 1 else ""
        force = {}
        if FBEGIN in sym0:
            for ln in sym0[sym0.index(FBEGIN):sym0.index(FEND)].splitlines()[1:]:
                force[ln.split(" =")[0]] = ln
        lines = []
        canon_taken = set(mapping.values())
        for y, x in sorted(mapping.items()):
            if x == y:
                continue
            m = re.fullmatch(r"(?:func|D|jtbl)_([0-9A-F]{8})", y)
            addr = int(m[1], 16) if m else nsyms.get(y)
            if addr is None:
                raise RuntimeError(f"no address for {y}")
            t = " type:func" if x.startswith("func_") or y.startswith("func_") else ""
            attrs = (t + where(y, addr)).strip()
            if y in force:
                attrs = (attrs + " force_not_migration:True").strip()
                del force[y]
            lines.append(f"{x} = 0x{addr:08X};" + (f" // {attrs}" if attrs else ""))
        # auto names of NEW that collide with a canonical name used for another address
        vlabels = set()
        for p in (ROOT / "tmp/asm" / new / mod).rglob("*.s"):
            vlabels.update(AUTO.findall(p.read_text()))
        for nn in sorted(vlabels | {n for n, _, _, _ in N}):
            if nn in canon_taken and mapping.get(nn) != nn and nn not in rev.values():
                m = re.fullmatch(r"(func|D|jtbl)_([0-9A-F]{8})", nn)
                if m:
                    attrs = ((" type:func" if m[1] == "func" else "") + where(nn, int(m[2], 16))).strip()
                    lines.append(f"{nn}_v{nv} = 0x{m[2]};" + (f" // {attrs}" if attrs else ""))
        body = sym0
        for b, e in ((BEGIN, END), (FBEGIN, FEND)):
            if b in body:
                body = body[:body.index(b)] + body[body.index(e) + len(e) + 1:]
        fblock = "\n".join([FBEGIN] + list(force.values()) + [FEND]) + "\n" if force else ""
        symf.write_text(body.rstrip("\n") + ("\n" if body.strip() else "") + fblock + "\n".join([BEGIN] + lines + [END]) + "\n")
        renamed = lambda n: (mapping.get(n) if mapping.get(n) else (f"{n}_v{nv}" if n in canon_taken and n not in rev.values() else n))  # noqa: E731
        dbg = os.environ.get("AVDEBUG")
        if dbg:
            print("DEBUG", dbg, "status", status.get(dbg), "mapping", mapping.get(dbg), "rev", rev.get(dbg),
                  "nmap", nmap.get(dbg), [k for k, v in nmap.items() if v == dbg], "renamed", renamed(dbg), "canon", dbg in canon_taken, "roms", roms.get(dbg), "inN", [u[3] for u in N if u[0] == dbg])
        # 4. TU of every NEW unit: that of the REF unit it is paired with or follows
        n_tu, cur = {}, stems[0]
        for nn, _, _, _ in N:
            if nn in nmap:
                if stems.index(r_tu[nmap[nn]]) < stems.index(cur):
                    raise RuntimeError(f"{nn}: TU order differs between versions")
                cur = r_tu[nmap[nn]]
            n_tu[nn] = cur
        place_after = {}
        if len(stems) > 1:
            dn = ROOT / "tmp/asm" / new / mod / "nonmatchings" / rstem_new
            fix_boundaries(N, n_tu, nmap, stems, dn)
            # unpaired rodata goes right after the unit whose rodata precedes it
            ro = {u[0]: unit_rodata(dn, u[0]) for u in N}
            anchors = sorted((r, nn) for nn, _, _, k in N if k == "func" or nn in nmap for r in ro[nn])
            moved = {}
            for nn, _, _, k in N:
                if nn in nmap or k == "func" or not ro[nn]:
                    continue
                below = [x for x in anchors if x[0] < min(ro[nn])]
                if below:
                    moved[nn] = below[-1][1]
            if moved:
                rest = [u for u in N if u[0] not in moved]
                out_n = []
                for u in rest:
                    out_n.append(u)
                    out_n += sorted((v for v in N if moved.get(v[0]) == u[0]), key=lambda v: min(ro[v[0]]))
                N[:] = out_n
                for nn, anc in moved.items():
                    n_tu[nn] = n_tu[anc]
            ntext = split_config(ntext, mod, stems, N, n_tu, new, rstem_new)
            pins = [f"{nn} = 0x{roms[nn][1]:08X}; // type:func" for nn, _, _, k in N
                    if k == "func" and AUTO.fullmatch(nn) and renamed(nn) == nn and nn in roms]
            pinf.write_text("// function starts pinned by tools/add_version.py\n" + "\n".join(pins) + "\n")
            rel = f"config/{new}/func_starts.{mod}.txt"
            if rel not in ntext:
                ntext = ntext.replace(f"    - config/{new}/symbol_addrs.{mod}.txt\n",
                                      f"    - config/{new}/symbol_addrs.{mod}.txt\n    - {rel}\n", 1)
        # 5. shared C files
        after = {}
        last_ref = None
        for nn, _, _, nk in N:
            if nn in nmap:
                last_ref = nmap[nn]
            elif nn in place_after:
                after.setdefault(place_after[nn], []).append((nn, nk))
            else:
                after.setdefault(last_ref, []).append((nn, nk))
        rv = fwnum(ref)
        S2 = sorted(set(S) | {nv})
        NV = frozenset([nv])

        def asm_entry(nn, nk, folder):
            macro = "INCLUDE_ASM" if nk == "func" else "INCLUDE_RODATA"
            return FM.Entry(NV, "asm" if nk == "func" else "rodata", renamed(nn), f'{macro}("{folder}", {renamed(nn)});\n')
        # names referenced by the C of REF functions that NEW gets as asm (modified / not shared)
        asm_users = set()
        for st in stems:
            for e2 in FM.parse((src / f"{st}.c").read_text(), S):
                if e2.kind == "cfunc" and rv in e2.vers and status.get(e2.name) != "shared":
                    asm_users.update(re.findall(r"\b\w+\b", e2.text))
        new_labels = set()
        for p in (ROOT / "tmp/asm" / new / mod).rglob("*.s"):
            new_labels.update(re.findall(r"^\s*(?:dlabel|glabel)\s+(\w+)", p.read_text(), re.M))
        lead = after.pop(None, [])
        stats = {"shared": 0, "modified": 0, "ref_only": 0, "new_only": sum(len(v) for v in after.values()) + len(lead)}
        done = set()
        for st in stems:
            cfile = src / f"{st}.c"
            folder = f"nonmatchings/{st}"
            out = []
            placed_lead = st != stems[0]
            for e in FM.parse(cfile.read_text(), S):
                if e.kind == "other":
                    # C data definitions (e.g. `const char D_X[] = "...";`) whose label NEW's asm defines
                    # itself stay with REF; NEW includes that data from its asm
                    defs = set(re.findall(r"^[^\n;#(]*?\b(D_[0-9A-F]{8}|\w+)\s*(?:\[[^\]]*\])*\s*=", e.text, re.M))
                    # ... or that a function NEW keeps as asm uses (that asm migrates its own copy)
                    if rv in e.vers and not (defs & new_labels) and not (defs & asm_users):
                        e.vers = e.vers | NV
                    out.append(e)
                    continue
                if not placed_lead and lead:
                    out += [asm_entry(nn, nk, folder) for nn, nk in lead]
                    placed_lead = True
                if rv not in e.vers or e.name in done:
                    out.append(e)
                    continue
                done.add(e.name)
                stt = status.get(e.name)
                if stt == "shared":
                    e.vers = e.vers | NV
                    stats["shared"] += 1
                    out.append(e)
                elif stt == "modified":
                    stats["modified"] += 1
                    if e.kind == "cfunc":
                        out.append(FM.Entry(NV, "asm", e.name, f'INCLUDE_ASM("{folder}", {e.name});\n'))
                    else:
                        e.vers = e.vers | NV
                    out.append(e)
                else:
                    stats["ref_only"] += 1
                    out.append(e)
                if e.name in after:
                    out += [asm_entry(nn, nk, folder) for nn, nk in after.pop(e.name)]
            if st == stems[-1] and after:
                out += [asm_entry(nn, nk, folder) for v in after.values() for nn, nk in v]
            cfile.write_text(FM.emit(FM.dedupe(out), S2))
        cfiles = [src / f"{st}.c" for st in stems]
        ncfg.write_text(ntext)
        nf = sum(1 for n, _, _, k in N if k == "func")
        shared_f = sum(1 for n, _, _, k in R if k == "func" and status.get(n) == "shared")
        print(f"{mod}: {stats} new funcs {nf}, identical {shared_f}")
        if a.dry_run:
            restore()
            return
        # 5. verify NEW; demote shared C functions that differ, then REF
        mods = AD.Module.__new__(AD.Module)
        demoted = set()
        for rnd in range(60):
            run("rm", "-rf", f"tmp/asm/{new}/{mod}", f"tmp/build/{new}/src/{mod}")
            run("make", "split", f"VERSION={new}", f"MODULE={mod}", check=True)
            rc, outp = run("make", f"VERSION={new}", f"MODULE={mod}")
            if ": OK" in outp:
                break
            mods = AD.Module(new, mod)
            built = (ROOT / "tmp/build" / new / f"{mod}.prx").read_bytes() if (ROOT / "tmp/build" / new / f"{mod}.prx").exists() else b""
            text = "".join(f.read_text() for f in cfiles)
            live = [n for n in mods.funcs if status.get(n) == "shared" and re.search(rf"^(?!static)[^\n;#]*\b{n}\([^;{{}}]*\)\s*\{{", text, re.M)]
            cls = argparse.Namespace(version=new, module=mod)
            moved = AD.first_displaced(mods, cls) if built else None
            if moved is not None:
                before = [(mods.funcs[n][0] - mods.text_off, n) for n in live if mods.funcs[n][0] - mods.text_off < moved]
                bad = [max(before)[1]] if before else []
            else:
                bad = [n for n in live if built[mods.funcs[n][0]:mods.funcs[n][1]] != mods.base[mods.funcs[n][0]:mods.funcs[n][1]]]
            bad = [n for n in bad if n not in demoted]
            demoted.update(bad)
            if not bad:
                raise RuntimeError(f"{new} mismatch outside shared C functions:\n{outp[-800:]}")
            for n in bad:
                for cf in cfiles:
                    ents = FM.parse(cf.read_text(), S2)
                    hit = next((k for k, e in enumerate(ents) if e.kind == "cfunc" and e.name == n and nv in e.vers), None)
                    if hit is not None:
                        ents[hit].vers = ents[hit].vers - NV
                        ents.insert(hit, FM.Entry(NV, "asm", n, f'INCLUDE_ASM("nonmatchings/{cf.stem}", {n});\n'))
                        cf.write_text(FM.emit(FM.dedupe(ents), S2))
                        break
                print(f"  {n}: C differs in {new}, asm there")
        else:
            raise RuntimeError("verification gave up")
        rc, outp = run("tools/regress.sh", f"{ref}:{mod}")
        if ": OK" not in outp:
            raise RuntimeError(f"{ref} broke:\n{outp[-800:]}")
        rc, outp = run("tools/regress.sh", f"{new}:{mod}")
        if ": OK" not in outp:
            raise RuntimeError(f"{new} from scratch failed:\n{outp[-800:]}")
        print(f"{mod}: OK, {new} shares src/{mod} (C functions: {ref} {sum(c_count(f, ref) for f in cfiles)}, {new} {sum(c_count(f, new) for f in cfiles)})")
    except Unmigrate as u:
        restore()
        old = sym0
        fl = []
        if FBEGIN in old:
            fl = old[old.index(FBEGIN):old.index(FEND)].splitlines()[1:]
            old = old[:old.index(FBEGIN)] + old[old.index(FEND) + len(FEND) + 1:]
        have = {ln.split(" =")[0] for ln in fl}
        for lab in sorted(set(u.args[0]) - have):
            rv = roms.get(lab)
            m = re.search(rf"^{lab} = [^\n]*", old, re.M)
            if m:
                if "force_not_migration" not in m[0]:
                    old = old.replace(m[0], m[0] + (" force_not_migration:True" if "//" in m[0] else " // force_not_migration:True"), 1)
                continue
            if rv:
                fl.append(f"{lab} = 0x{rv[1]:08X}; // rom:0x{rv[0]:X} force_not_migration:True")
        symf.write_text(old.rstrip("\n") + ("\n" if old.strip() else "") + "\n".join([FBEGIN] + fl + [FEND]) + "\n")
        print(f"{mod}: {len(u.args[0])} rodata pieces will not migrate; retrying")
        raise Retry()
    except Exception as e:  # noqa: BLE001
        if not a.keep:
            restore()
        print(f"{mod}: FAILED ({e})")
        sys.exit(1)


if __name__ == "__main__":
    main()
