#!/usr/bin/env python3
"""Dump DWARF (functions, prototypes, locals, types) of devkit objects/archives.

    tools/dwarf_dump.py LIB.a|OBJ.o [...] > out.json

Per compile unit: source file, functions (name, external, return type,
parameters, locals, low_pc/size, the object's code words with relocation
positions masked) and C declarations of the structs/unions/enums/typedefs it
uses. Used to carry real names and types from the pre-1.00 devkit libraries
over to firmware modules (they were built from the same sources).
"""
import io
import json
import struct
import sys
from pathlib import Path

from elftools.elf.elffile import ELFFile


def ar_members(data):
    assert data[:8] == b"!<arch>\n"
    i, names, out = 8, b"", []
    while i < len(data):
        h = data[i:i + 60]
        name, size = h[:16].decode().strip(), int(h[48:58])
        body = data[i + 60:i + 60 + size]
        if name == "//":
            names = body
        elif name.startswith("/") and name[1:].isdigit():
            o = int(name[1:])
            out.append((names[o:names.index(b"/\n", o)].decode(), body))
        elif not name.startswith("/"):
            out.append((name.rstrip("/"), body))
        i += 60 + size + (size & 1)
    return out


class Types:
    def __init__(self):
        self.decls = {}  # tag name -> C definition

    def name(self, die, depth=0):
        """C type spelling (with a %s placeholder for the declarator)."""
        if die is None:
            return "void %s"
        t = die.tag
        nm = die.attributes.get("DW_AT_name")
        nm = nm.value.decode() if nm else None
        sub = die.get_DIE_from_attribute("DW_AT_type") if "DW_AT_type" in die.attributes else None
        if t == "DW_TAG_base_type":
            return f"{nm} %s"
        if t == "DW_TAG_typedef":
            if depth < 8:
                self.define(die)
            return f"{nm} %s"
        if t in ("DW_TAG_structure_type", "DW_TAG_union_type", "DW_TAG_enumeration_type"):
            kw = {"DW_TAG_structure_type": "struct", "DW_TAG_union_type": "union",
                  "DW_TAG_enumeration_type": "enum"}[t]
            if nm is None:
                return self.body(die, kw, None, depth) + " %s"
            if depth < 8:
                self.define(die)
            return f"{kw} {nm} %s"
        if t == "DW_TAG_pointer_type":
            inner = self.name(sub, depth + 1)
            return inner.replace("%s", "*%s" if not inner.startswith(("%", "(")) and "(*" not in inner else "(*%s)")
        if t == "DW_TAG_const_type":
            return "const " + self.name(sub, depth + 1)
        if t == "DW_TAG_volatile_type":
            return "volatile " + self.name(sub, depth + 1)
        if t == "DW_TAG_array_type":
            dims = ""
            for c in die.iter_children():
                if c.tag == "DW_TAG_subrange_type":
                    ub = c.attributes.get("DW_AT_upper_bound")
                    dims += f"[{ub.value + 1}]" if ub else "[]"
            return self.name(sub, depth + 1).replace("%s", f"%s{dims}")
        if t == "DW_TAG_subroutine_type":
            ps = [self.name(c.get_DIE_from_attribute("DW_AT_type"), depth + 1).replace(" %s", "").replace("%s", "")
                  for c in die.iter_children() if c.tag == "DW_TAG_formal_parameter"]
            if any(c.tag == "DW_TAG_unspecified_parameters" for c in die.iter_children()):
                ps.append("...")
            return self.name(sub, depth + 1).replace("%s", f"(%s)({', '.join(ps) or 'void'})")
        return "M2C_UNK %s"

    def body(self, die, kw, nm, depth):
        lines = []
        if kw == "enum":
            for c in die.iter_children():
                if c.tag == "DW_TAG_enumerator":
                    lines.append(f"    {c.attributes['DW_AT_name'].value.decode()} = {c.attributes['DW_AT_const_value'].value},")
        else:
            for c in die.iter_children():
                if c.tag != "DW_TAG_member":
                    continue
                mn = c.attributes.get("DW_AT_name")
                mn = mn.value.decode() if mn else ""
                loc = c.attributes.get("DW_AT_data_member_location")
                off = ""
                if loc is not None:
                    v = loc.value
                    if isinstance(v, list) and len(v) >= 2 and v[0] == 0x23:  # DW_OP_plus_uconst
                        o, sh = 0, 0
                        for b in v[1:]:
                            o |= (b & 0x7F) << sh
                            sh += 7
                            if not b & 0x80:
                                break
                        off = f" /* 0x{o:X} */"
                    elif isinstance(v, int):
                        off = f" /* 0x{v:X} */"
                bits = c.attributes.get("DW_AT_bit_size")
                decl = self.name(c.get_DIE_from_attribute("DW_AT_type"), depth + 1).replace("%s", mn).rstrip()
                lines.append(f"    {decl}{f' : {bits.value}' if bits else ''};{off}")
        size = die.attributes.get("DW_AT_byte_size")
        tail = f" /* size 0x{size.value:X} */" if size else ""
        head = f"{kw} {nm} " if nm else f"{kw} "
        return head + "{\n" + "\n".join(lines) + "\n}" + tail

    def define(self, die):
        nm = die.attributes["DW_AT_name"].value.decode()
        if die.tag == "DW_TAG_typedef":
            key = f"typedef {nm}"
            if key in self.decls:
                return
            self.decls[key] = None
            sub = die.get_DIE_from_attribute("DW_AT_type") if "DW_AT_type" in die.attributes else None
            self.decls[key] = "typedef " + self.name(sub, 1).replace("%s", nm).rstrip() + ";"
            return
        kw = {"DW_TAG_structure_type": "struct", "DW_TAG_union_type": "union", "DW_TAG_enumeration_type": "enum"}[die.tag]
        key = f"{kw} {nm}"
        if key in self.decls or "DW_AT_declaration" in die.attributes:
            return
        self.decls[key] = None
        self.decls[key] = self.body(die, kw, nm, 1) + ";"


def dump_obj(name, data):
    e = ELFFile(io.BytesIO(data))
    if not e.has_dwarf_info():
        return []
    text = e.get_section_by_name(".text")
    tdata = text.data() if text else b""
    rel = e.get_section_by_name(".rel.text")
    relpos = {r["r_offset"] for r in rel.iter_relocations()} if rel else set()
    syms = {}
    st = e.get_section_by_name(".symtab")
    if st and text is not None:
        tidx = next(i for i, sec in enumerate(e.iter_sections()) if sec.name == ".text")
        for sy in st.iter_symbols():
            if sy["st_info"]["type"] == "STT_FUNC" and sy["st_shndx"] == tidx and sy["st_size"]:
                syms[sy.name] = (sy["st_value"], sy["st_size"])
    out = []
    for cu in e.get_dwarf_info().iter_CUs():
        top = cu.get_top_DIE()
        T = Types()
        funcs = []
        for d in top.iter_children():
            if d.tag != "DW_TAG_subprogram" or "DW_AT_name" not in d.attributes:
                continue
            fn = d.attributes["DW_AT_name"].value.decode()
            ret = d.get_DIE_from_attribute("DW_AT_type") if "DW_AT_type" in d.attributes else None
            params, locals_ = [], []

            def walk(x):
                for c in x.iter_children():
                    if c.tag == "DW_TAG_formal_parameter" and x is d:
                        params.append(T.name(c.get_DIE_from_attribute("DW_AT_type")).replace(
                            "%s", c.attributes["DW_AT_name"].value.decode() if "DW_AT_name" in c.attributes else "").rstrip())
                    elif c.tag == "DW_TAG_variable" and "DW_AT_name" in c.attributes and "DW_AT_type" in c.attributes:
                        locals_.append(T.name(c.get_DIE_from_attribute("DW_AT_type")).replace(
                            "%s", c.attributes["DW_AT_name"].value.decode()).rstrip())
                    elif c.tag == "DW_TAG_lexical_block":
                        walk(c)
            walk(d)
            f = {"name": fn, "external": bool(d.attributes.get("DW_AT_external", None) and d.attributes["DW_AT_external"].value),
                 "proto": T.name(ret).replace("%s", f"{fn}({', '.join(params) or 'void'})").rstrip(),
                 "locals": locals_}
            if fn in syms:
                lo, sz = syms[fn]
                hi = lo + sz
                f["size"] = sz
                f["offset"] = lo
                f["words"] = [None if lo + i in relpos else struct.unpack_from("<I", tdata, lo + i)[0]
                              for i in range(0, hi - lo, 4)]
            funcs.append(f)
        out.append({"object": name, "file": top.attributes["DW_AT_name"].value.decode(),
                    "funcs": funcs, "types": {k: v for k, v in T.decls.items() if v}})
    return out


def main():
    res = []
    for p in sys.argv[1:]:
        data = Path(p).read_bytes()
        members = ar_members(data) if data[:8] == b"!<arch>\n" else [(Path(p).name, data)]
        for name, body in members:
            for cu in dump_obj(name, body):
                cu["library"] = Path(p).name
                res.append(cu)
    json.dump(res, sys.stdout, indent=1)


if __name__ == "__main__":
    main()
