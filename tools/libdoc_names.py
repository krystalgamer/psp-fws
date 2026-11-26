#!/usr/bin/env python3
"""Real names for NID-named symbols from libdoc (PSP PRX Libraries Documentation).

    tools/libdoc_names.py MODULE [--apply]

libdoc XML (tmp/libdoc: github.com/mathieulh/PSP-PRX-Libraries-Documentation-Project;
tmp/psplibdoc: github.com/pspdev/psplibdoc)
lists NID -> name per firmware. A name is used only if SHA-1(name)[:4] is the NID
(salted NIDs of later firmware can't be verified and are skipped). Symbols named
<library>_<NID> in every version's symbol_addrs.MODULE.txt and in the module's
shared source are renamed; all versions are rebuilt and must match.
"""
import glob
import hashlib
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
from srcdir import sharing_versions, src_dir  # noqa: E402


def nid_of(name):
    return hashlib.sha1(name.encode()).digest()[:4][::-1].hex().upper()


def libdoc():
    out = {}
    for p in glob.glob(str(ROOT / "tmp/libdoc/**/*.xml"), recursive=True) + glob.glob(str(ROOT / "tmp/psplibdoc/**/*.xml"), recursive=True):
        t = open(p, errors="replace").read()
        for m in re.finditer(r"<NID>0x([0-9A-Fa-f]{8})</NID>\s*<NAME>([^<]+)</NAME>", t):
            n = m[2].strip()
            if re.fullmatch(r"[A-Za-z_]\w*", n) and nid_of(n) == m[1].upper():
                out[m[1].upper()] = n
    # names already in the repo's symbol files (any version/module), if their hash is the NID
    for p in glob.glob(str(ROOT / "config/*/symbol_addrs.*.txt")):
        for n in re.findall(r"^\s*([A-Za-z_]\w*)\s*=", open(p).read(), re.M):
            if not re.search(r"_[0-9A-F]{8}$", n) and not n.startswith(("func_", "D_", "jtbl_")):
                out.setdefault(nid_of(n), n)
    return out


def main():
    mod = sys.argv[1]
    apply = "--apply" in sys.argv
    names = libdoc()
    cfgs = sorted(c.parent.name for c in (ROOT / "config").glob(f"*/{mod}.yaml"))
    symfiles = [ROOT / "config" / v / f"symbol_addrs.{mod}.txt" for v in cfgs]
    srcs = set()
    for v in cfgs:
        if v in sharing_versions(v, mod):
            srcs.add(src_dir(v, mod))
    texts = {p: p.read_text() for p in symfiles if p.exists()}
    for d in srcs:
        for p in d.iterdir():
            if p.suffix in (".c", ".h", ".json"):
                texts[p] = p.read_text()
    allt = "\n".join(texts.values())
    used = set(re.findall(r"\b[A-Za-z_]\w*\b", allt))
    pairs = {}
    for old in set(re.findall(r"\b([A-Za-z_]\w*?_([0-9A-F]{8}))\b", allt)):
        full, n = old
        new = names.get(n)
        if new and new != full and not full.startswith(("func_", "D_", "jtbl_")) and new not in used:
            pairs[full] = new
    # one new name per old one, no two olds to the same new
    seen = {}
    for o, n in sorted(pairs.items()):
        seen.setdefault(n, []).append(o)
    pairs = {o: n for n, os_ in seen.items() if len(os_) == 1 for o in os_}
    print(f"{mod}: {len(pairs)} names")
    if not apply or not pairs:
        return
    pat = re.compile(r"\b(" + "|".join(map(re.escape, sorted(pairs, key=len, reverse=True))) + r")\b")
    for p, t in texts.items():
        n = pat.sub(lambda m: pairs[m[1]], t)
        if n != t:
            p.write_text(n)
    vms = [f"{v}:{mod}" for v in cfgs]
    r = subprocess.run(["tools/regress.sh"] + vms, cwd=ROOT, capture_output=True, text=True)
    bad = [l for l in r.stdout.splitlines() if ": OK" not in l]
    if bad:
        for p, t in texts.items():
            p.write_text(t)
        subprocess.run(["tools/regress.sh"] + vms, cwd=ROOT, capture_output=True, text=True)
        print(f"{mod}: verification failed, reverted: {bad[:3]}")
        sys.exit(1)
    print(f"{mod}: OK ({len(vms)} binaries)")


if __name__ == "__main__":
    main()
