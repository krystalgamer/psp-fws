"""Shared sources as a flat list of entries, each compiled by a set of versions.

    parse(text, versions) -> [Entry]   (versions: the FW numbers built from the file)
    emit(entries, versions) -> text

Conditions are written as version ranges over the versions that share the file
(`#if FW_VERSION < 150`, `#if FW_VERSION >= 150 && FW_VERSION <= 201`), so they
stay readable as versions are added. Only conditions on FW_VERSION are
understood; any other `#if` block is kept verbatim as one entry (compiled by all).
"""
import re
from dataclasses import dataclass, field

FWCOND = re.compile(r"^#(if|elif)\s+(.*FW_VERSION.*)$")
ITEM = re.compile(r'^INCLUDE_ASM\("[^"]+", (\w+)\);\n|^INCLUDE_RODATA\("[^"]+", (\w+)\);\n|'
                  r'^(?!static\s+inline)(?=[A-Za-z_])[^\n;#]*?\b(\w+)\([^;{}]*\)\s*\{\n.*?^\}\n', re.M | re.S)


def evaluate(cond, v):
    """Value of a #if expression on FW_VERSION for version number v."""
    e = cond.replace("FW_VERSION", str(v)).replace("&&", " and ").replace("||", " or ")
    e = re.sub(r"!(?!=)", " not ", e)
    if not re.fullmatch(r"[\d\s()<>=!andortn]*", e):
        raise ValueError(f"unsupported condition: {cond}")
    return bool(eval(e, {"__builtins__": {}}, {}))


@dataclass
class Entry:
    vers: frozenset
    kind: str            # asm | rodata | cfunc | other
    name: str = None
    text: str = ""
    extra: dict = field(default_factory=dict)


def _items(text, vers, out):
    pos = 0
    for m in ITEM.finditer(text):
        if text[pos:m.start()].strip():
            out.append(Entry(vers, "other", None, text[pos:m.start()].strip("\n") + "\n"))
        kind = "asm" if m[1] else "rodata" if m[2] else "cfunc"
        out.append(Entry(vers, kind, m[1] or m[2] or m[3], m[0]))
        pos = m.end()
    if text[pos:].strip():
        out.append(Entry(vers, "other", None, text[pos:].strip("\n") + "\n"))


def parse(text, versions):
    allv = frozenset(versions)
    out = []
    lines = text.splitlines(keepends=True)
    i, buf = 0, []

    def flush(vs):
        if buf:
            _items("".join(buf), vs, out)
            buf.clear()
    while i < len(lines):
        m = FWCOND.match(lines[i].rstrip("\n"))
        if m and m[1] == "if":
            flush(allv)
            # collect the whole #if ... #endif (no nesting of FW conditions inside)
            branches, cur, cond, depth = [], [], m[2], 0
            i += 1
            while i < len(lines):
                ln = lines[i]
                if re.match(r"^#\s*if", ln):
                    depth += 1
                elif re.match(r"^#\s*endif", ln):
                    if depth == 0:
                        break
                    depth -= 1
                elif depth == 0 and (ln.startswith("#else") or FWCOND.match(ln.rstrip("\n"))):
                    branches.append((cond, cur))
                    cur = []
                    cond = FWCOND.match(ln.rstrip("\n"))[2] if ln.startswith("#elif") else None
                    i += 1
                    continue
                cur.append(ln)
                i += 1
            branches.append((cond, cur))
            taken = set()
            for cond, body in branches:
                vs = frozenset(v for v in allv - taken if cond is None or evaluate(cond, v))
                taken |= vs
                _items("".join(body), vs, out)
            i += 1
            continue
        if re.match(r"^#\s*if", lines[i]):
            # a non-FW conditional: keep the whole block as one opaque entry
            flush(allv)
            depth, blk = 0, []
            while i < len(lines):
                blk.append(lines[i])
                if re.match(r"^#\s*if", lines[i]):
                    depth += 1
                elif re.match(r"^#\s*endif", lines[i]):
                    depth -= 1
                    if depth == 0:
                        i += 1
                        break
                i += 1
            # `#ifdef NON_MATCHING / C / #else / INCLUDE_ASM / #endif`: one function
            inc = re.findall(r'^INCLUDE_ASM\("[^"]+", (\w+)\);', "".join(blk), re.M)
            if len(set(inc)) == 1:
                out.append(Entry(allv, "asm", inc[0], "".join(blk)))
            else:
                out.append(Entry(allv, "other", None, "".join(blk)))
            continue
        buf.append(lines[i])
        i += 1
    flush(allv)
    return [e for e in out if e.vers]


_CACHE = {}


def parse_ro(text, versions):
    """parse() for read-only use, cached by content (shared sources are re-read
    for every function during verification)."""
    key = (hash(text), len(text), tuple(versions))
    if key not in _CACHE:
        if len(_CACHE) > 64:
            _CACHE.clear()
        _CACHE[key] = parse(text, versions)
    return _CACHE[key]


def condition(vs, versions):
    """Readable #if expression selecting exactly vs among versions."""
    order = sorted(versions)
    runs, cur = [], []
    for v in order:
        if v in vs:
            cur.append(v)
        elif cur:
            runs.append(cur)
            cur = []
    if cur:
        runs.append(cur)
    parts = []
    for r in runs:
        lo, hi = r[0], r[-1]
        first, last = lo == order[0], hi == order[-1]
        nxt = order[order.index(hi) + 1] if not last else None
        if len(r) == 1 and not (first and last):
            parts.append(f"FW_VERSION == {lo}")
        elif first and last:
            parts.append("1")
        elif first:
            parts.append(f"FW_VERSION < {nxt}")
        elif last:
            parts.append(f"FW_VERSION >= {lo}")
        else:
            parts.append(f"FW_VERSION >= {lo} && FW_VERSION < {nxt}")
    if len(parts) > 1:
        parts = [f"({p})" if "&&" in p else p for p in parts]
    # complement may read better ("!= 100")
    rest = [v for v in order if v not in vs]
    if len(rest) == 1 and len(parts) > 1:
        return f"FW_VERSION != {rest[0]}"
    return " || ".join(parts)


def merge(entries):
    """Drop empty entries; join neighbours that are the same item."""
    out = []
    for e in entries:
        if not e.vers:
            continue
        if out and out[-1].kind == e.kind and out[-1].text == e.text and e.kind != "other":
            out[-1].vers = out[-1].vers | e.vers
            continue
        out.append(e)
    return out


def emit(entries, versions):
    allv = frozenset(versions)
    entries = merge(entries)
    out, i = [], 0
    while i < len(entries):
        e = entries[i]
        if e.vers == allv:
            out.append(e.text)
            out.append("\n")
            i += 1
            continue
        j = i
        while j < len(entries) and entries[j].vers == e.vers:
            j += 1
        block = "\n".join(x.text for x in entries[i:j])
        # `#if A / x / #else / y / #endif` when the next group is the complement
        k = j
        while k < len(entries) and entries[k].vers == allv - e.vers:
            k += 1
        if k > j and len(versions) > 1:
            other = "\n".join(x.text for x in entries[j:k])
            out.append(f"#if {condition(e.vers, versions)}\n{block}#else\n{other}#endif\n\n")
            i = k
            continue
        out.append(f"#if {condition(e.vers, versions)}\n{block}#endif\n\n")
        i = j
    return "".join(out).rstrip("\n") + "\n"


def dedupe(entries):
    """Merge identical items compiled by disjoint version sets when no version
    of one compiles anything between them (each version's code is unchanged)."""
    ents = merge(entries)
    changed = True
    while changed:
        changed = False
        seen = {}
        for j, e in enumerate(ents):
            if e.kind == "other":
                continue
            key = (e.kind, e.name, e.text)
            for i in seen.get(key, []):
                a, b = ents[i], e
                if a.vers & b.vers:
                    continue
                between = ents[i + 1:j]
                if not any(x.vers & b.vers for x in between):
                    a.vers = a.vers | b.vers
                    del ents[j]
                elif not any(x.vers & a.vers for x in between):
                    b.vers = b.vers | a.vers
                    del ents[i]
                else:
                    continue
                changed = True
                break
            if changed:
                break
            seen.setdefault(key, []).append(j)
        ents = merge(ents)
    return ents
