"""Editing sources shared by several firmware versions (one version at a time).

Built on tools/fwmodel.py: a file is a list of entries compiled by version sets.
"""
import re

import fwmodel as FM

INC = re.compile(r'^INCLUDE_ASM\("([^"]+)", (\w+)\);\n', re.M)
DEF = r"^(?!static)[^\n;#]*\b{name}\([^;{{}}]*\)\s*\{{\n.*?^\}}\n"


def fwnum(v):
    return int(re.match(r"\d+", str(v))[0])


def asm_names(text, ver, versions):
    """Names whose INCLUDE_ASM is compiled for `ver`."""
    v = fwnum(ver)
    return [e.name for e in FM.parse_ro(text, versions) if e.kind == "asm" and v in e.vers]


def has_c(text, ver, versions, name):
    v = fwnum(ver)
    return name in _c_names(text, tuple(versions), v)


def _c_names(text, versions, v):
    key = (hash(text), len(text), versions, v)
    if key not in _CN:
        if len(_CN) > 256:
            _CN.clear()
        _CN[key] = {e.name for e in FM.parse_ro(text, versions) if e.kind == "cfunc" and v in e.vers}
    return _CN[key]


_CN = {}


def put_c(text, ver, versions, name, body):
    """Use C `body` for `name` in `ver` only."""
    v = fwnum(ver)
    ents = FM.parse(text, versions)
    for k, e in enumerate(ents):
        if e.kind == "asm" and e.name == name and v in e.vers:
            e.vers = e.vers - {v}
            ents.insert(k + 1, FM.Entry(frozenset([v]), "cfunc", name, body))
            break
    return FM.emit(FM.dedupe(ents), versions)


def put_asm(text, ver, versions, name, folder):
    """Back to INCLUDE_ASM for `name` in `ver`."""
    v = fwnum(ver)
    ents = FM.parse(text, versions)
    for k, e in enumerate(ents):
        if e.kind == "cfunc" and e.name == name and v in e.vers:
            e.vers = e.vers - {v}
            ents.insert(k, FM.Entry(frozenset([v]), "asm", name, f'INCLUDE_ASM("{folder}", {name});\n'))
            break
    return FM.emit(FM.dedupe(ents), versions)


def put_asm_many(text, ver, versions, names, folder):
    """put_asm for several functions with one parse."""
    v = fwnum(ver)
    names = set(names)
    ents = FM.parse(text, versions)
    out = []
    for e in ents:
        if e.kind == "cfunc" and e.name in names and v in e.vers:
            out.append(FM.Entry(frozenset([v]), "asm", e.name, f'INCLUDE_ASM("{folder}", {e.name});\n'))
            e.vers = e.vers - {v}
        out.append(e)
    return FM.emit(FM.dedupe(out), versions)
