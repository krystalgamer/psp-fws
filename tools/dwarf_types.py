#!/usr/bin/env python3
"""Real prototypes and types from devkit DWARF for a module's asm functions.

    tools/dwarf_types.py VER MODULE DWARF.json [--apply]

Functions of VER's binary that are byte-identical to a devkit library function
(tools/dwarf_dump.py output) and are still asm in every version of the shared
source get the DWARF prototype; the struct/union/enum/typedef definitions of
their compile units go into the module's decls as one block (forward
declarations first, then definitions in dependency order), minus names the
project headers already define. auto_decomp/m2c then see the original types.
"""
import json
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import fwmodel as FM  # noqa: E402
from dwarf_names import built_funcs, find  # noqa: E402
from srcdir import sharing_versions, src_dir  # noqa: E402

KEY = "000_dwarf"


def header_names():
    names = set()
    for h in (ROOT / "include").rglob("*.h"):
        t = h.read_text(errors="replace")
        names |= set(re.findall(r"\btypedef\b[^;]*?\b(\w+)\s*(?:\[[^\]]*\])?;", t))
        names |= {f"{k} {n}" for k, n in re.findall(r"\b(struct|union|enum)\s+(\w+)\s*\{", t)}
    return names


def order(defs):
    """Definitions in an order that compiles: by-value dependencies first."""
    def deps(text):
        body = text.split("{", 1)[1] if "{" in text else text
        d = set(re.findall(r"\b((?:struct|union|enum) \w+)\s+(?!\*)\w", body))
        d |= {f"typedef {w}" for w in re.findall(r"\b(\w+)\b", body)}
        return d
    out, done, todo = [], set(), dict(defs)
    while todo:
        ready = [k for k, v in todo.items() if not (deps(v) - done - {k}) & set(defs)]
        if not ready:
            ready = list(todo)[:1]
        for k in ready:
            out.append(todo.pop(k))
            done.add(k)
    return out


def main():
    ver, mod, dj = sys.argv[1], sys.argv[2], sys.argv[3]
    apply = "--apply" in sys.argv
    names, text = built_funcs(ver, mod)
    dwarf = json.loads(Path(dj).read_text())
    sd = src_dir(ver, mod)
    fv = sorted({int(re.match(r"\d+", v)[0]) for v in sharing_versions(ver, mod)})
    in_c = {e.name for f in sd.glob("*.c") for e in FM.parse(f.read_text(), fv) if e.kind == "cfunc"}
    have = header_names()
    protos, types = {}, {}
    for cu in dwarf:
        used = False
        for f in cu["funcs"]:
            if "words" not in f or len(f["words"]) < 3:
                continue
            hits = [h for h in find(f["words"], text) if h in names]
            if len(hits) != 1 or names[hits[0]] != f["name"] or f["name"] in in_c:
                continue
            protos[f["name"]] = f["proto"] + ";"
            used = True
        if used:
            for k, v in cu["types"].items():
                bare = k.split()[-1] if k.startswith("typedef ") else k
                if bare not in have and k not in have and k not in types and v:
                    types[k] = v
    print(f"{mod}: {len(protos)} prototypes, {len(types)} types")
    if not apply or not protos:
        return
    fwd = sorted({f"{k};" for k in types if k.split()[0] in ("struct", "union")})
    block = "/* devkit 0.6.0 DWARF (tools/dwarf_types.py) */\n" + "\n".join(fwd) + "\n\n" + "\n\n".join(order(types))
    store_path = sd / f"{mod}_decls.json"
    store = json.loads(store_path.read_text())
    store.setdefault("types", {})[KEY] = block
    store["funcs"].update(protos)
    store["dwarf"] = sorted(set(store.get("dwarf", [])) | set(protos))
    import structify
    structify.SRC[mod] = sd
    structify.write_decls(mod, store)
    r = subprocess.run(["tools/regress.sh", "--shared", f"{ver}:{mod}"], cwd=ROOT, capture_output=True, text=True)
    print(r.stdout.strip())
    if r.returncode:
        subprocess.run(["git", "checkout", "-q", "--", str(sd.relative_to(ROOT))], cwd=ROOT)
        sys.exit("verification failed, reverted")


if __name__ == "__main__":
    main()
