#!/usr/bin/env python3
"""Generate a splat config for a PRX from its ELF section table.

Usage: tools/gen_config.py <version> <module path under F0> [--name NAME] [--force]

Segment 0 (code + rodata) is one splat segment at vram 0; segment 1 (.data,
.bss) becomes a `<name>_seg1` segment, which tools/split.py links at VMA 0
because PRX segment 1 is relocated independently (immediates are relative).
Gaps between sections become `prxpad` subsegments.
"""
import argparse
import sys
import struct
import hashlib
import zipfile
from pathlib import Path

from elftools.elf.elffile import ELFFile

sys.path.insert(0, str(Path(__file__).resolve().parent))
import prxinfo  # noqa: E402

ROOT = Path(__file__).resolve().parent.parent
SPECIAL = {
    ".sceStub.text": ("asm", "sceStub"),
    ".lib.ent.top": ("rodata", "lib_ent_top"),
    ".lib.ent": ("rodata", "lib_ent"),
    ".lib.ent.btm": ("rodata", "lib_ent_btm"),
    ".lib.stub.top": ("rodata", "lib_stub_top"),
    ".lib.stub": ("rodata", "lib_stub"),
    ".lib.stub.btm": ("rodata", "lib_stub_btm"),
    ".rodata.sceModuleInfo": ("rodata", "module_info"),
    ".rodata.sceResident": ("rodata", "resident"),
    ".rodata.sceNid": ("rodata", "nid"),
}

OPTIONS = """  find_file_boundaries: true
  section_order: [".text", ".data", ".rodata", ".bss"]
  migrate_rodata_to_functions: true
  use_legacy_include_asm: false
  asm_function_macro: glabel
  asm_jtbl_label_macro: jlabel
  asm_data_macro: dlabel
  asm_end_label: endlabel
  string_encoding: ASCII
  data_string_encoding: ASCII
  rodata_string_guesser_level: 2
  data_string_guesser_level: 2
  gp_value: 0x7FF0
  add_set_gp_64: false
  named_regs_for_c_funcs: false
  ld_bss_is_noload: true
  emit_subalign: false
  ld_align_segment_vram_end: false
  ld_align_section_vram_end: false
  disasm_unknown: true
"""


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("version")
    ap.add_argument("module", help="e.g. kd/mcctrl.prx or vsh/module/mcore.prx")
    ap.add_argument("--name")
    ap.add_argument("--force", action="store_true")
    ap.add_argument("--stdout", action="store_true")
    ap.add_argument("--asm", action="store_true", help="emit .text as asm (no C file), e.g. for extra versions")
    args = ap.parse_args()

    name = args.name or Path(args.module).stem
    data = zipfile.ZipFile(ROOT / "inputs/fws.zip").read(f"fws/{args.version}/F0/{args.module}")
    sha1 = hashlib.sha1(data).hexdigest()
    import io
    elf = ELFFile(io.BytesIO(data))
    segs = [p for p in elf.iter_segments() if p["p_type"] == "PT_LOAD"]
    secs = prxinfo.sections(elf, data)
    seg1 = segs[1] if len(segs) > 1 else None

    def in_seg1(s):
        return seg1 is not None and s.addr >= seg1["p_vaddr"]

    out = []
    v = args.version
    out.append(f"name: {name} ({v})\nsha1: {sha1}\noptions:\n  basename: {name}\n"
               f"  target_path: tmp/baserom/{v}/{name}.prx\n  elf_path: tmp/build/{v}/{name}.elf\n"
               f"  base_path: ../..\n  platform: psp\n  compiler: GCC\n\n"
               f"  asm_path: tmp/asm/{v}/{name}\n  src_path: src/{name}\n  build_path: tmp/build/{v}\n"
               f"  ld_script_path: tmp/build/{v}/{name}.ld\n  cache_path: tmp/build/{v}/.splat_cache.{name}\n"
               f"  symbol_addrs_path:\n    - config/{v}/symbol_addrs.{name}.txt\n    - tmp/build/{v}/prx_syms.{name}.txt\n"
               f"  reloc_addrs_path: [tmp/build/{v}/reloc_addrs.{name}.txt]\n  asset_path: tmp/assets/{v}/{name}\n"
               f"  extensions_path: tools/splat_ext\n"
               f"  undefined_funcs_auto_path: tmp/build/{v}/undefined_funcs_auto.{name}.txt\n"
               f"  undefined_syms_auto_path: tmp/build/{v}/undefined_syms_auto.{name}.txt\n\n")
    # gp is the (segment-relative) word at sceModuleInfo+0x20
    mi = prxinfo.module_info_addr(elf, data)
    gp_value = struct.unpack_from("<I", data, segs[0]["p_offset"] + mi + 0x20)[0] if mi is not None else 0x7FF0
    out.append(OPTIONS.replace("gp_value: 0x7FF0", f"gp_value: 0x{gp_value:X}"))
    end_vram = max(s.addr + s.size for s in secs)
    out.append(f"  global_vram_start: 0x0\n  global_vram_end: 0x{end_vram + 0x10:X}\n\n")

    out.append("segments:\n  - [0x0, bin, elf_header]\n")
    seg0_bss = [s for s in secs if not in_seg1(s) and s.nobits and s.size]
    out.append(f"  - name: {name}\n    type: code\n    start: 0x{segs[0]['p_offset']:X}\n    vram: 0x0\n    subsegments:\n")
    file_end = segs[0]["p_offset"] + segs[0]["p_filesz"]
    prev_end, prev_kind = None, ".text"
    rodata_seen = 0
    for s in secs:
        if in_seg1(s) or s.nobits:
            continue
        if not s.size:
            continue
        off = s.offset
        if prev_end is not None and off > prev_end:
            out.append(f"      - {{ start: 0x{prev_end:X}, type: prxpad, order: {prev_kind} }}\n")
        if s.name == ".text":
            out.append(f"      - [0x{off:X}, {'asm' if args.asm else 'c'}, {name}]\n")
            prev_kind = ".text"
        elif s.name in SPECIAL:
            typ, nm = SPECIAL[s.name]
            out.append(f"      - {{ start: 0x{off:X}, type: {typ}, name: {nm}, linker_section: {s.name} }}\n")
            prev_kind = ".text" if typ == "asm" else ".rodata"
        elif s.name == ".rodata":
            nm = name if not rodata_seen else f"{name}_{s.addr:X}"
            rodata_seen += 1
            out.append(f"      - [0x{off:X}, {'rodata' if args.asm else '.rodata'}, {nm}]\n")
            prev_kind = ".rodata"
        elif s.name == ".data":
            out.append(f"      - [0x{off:X}, data, {name}]\n")
            prev_kind = ".data"
        else:
            # Other named sections (.init/.fini/.ctors/.dtors/.jcr/.eh_frame...)
            nm = s.name.strip(".").replace(".", "_")
            typ = "asm" if s.executable else "rodata"
            out.append(f"      - {{ start: 0x{off:X}, type: {typ}, name: {nm}, linker_section: {s.name} }}\n")
            prev_kind = ".text" if typ == "asm" else ".rodata"
        prev_end = off + s.size
    if seg1 is None:
        raise SystemExit("PRX without segment 1 not handled")
    if prev_end < seg1["p_offset"]:
        out.append(f"      - {{ start: 0x{prev_end:X}, type: prxpad, order: {prev_kind} }}\n")
    assert not seg0_bss, "bss in segment 0 not handled"

    base = seg1["p_vaddr"]
    s1 = [s for s in secs if in_seg1(s) and s.size]
    fpos = seg1["p_offset"]
    if s1:
        out.append(f"  - name: {name}_seg1\n    type: code\n    start: 0x{seg1['p_offset']:X}\n    vram: 0x{base:X}\n")
        bss = [s for s in s1 if s.nobits]
        if bss:
            out.append(f"    bss_size: 0x{seg1['p_memsz'] - seg1['p_filesz']:X}\n")
        out.append("    subsegments:\n")
        for s in s1:
            if s.nobits:
                out.append(f"      - {{ start: 0x{fpos:X}, type: bss, vram: 0x{s.addr:X} }}\n")
            else:
                out.append(f"      - [0x{s.offset:X}, data, {name}_data]\n")
                fpos = s.offset + s.size
    out.append(f"  - [0x{fpos:X}, bin, elf_trailer]\n  - [0x{len(data):X}]\n")

    text = "".join(out)
    if args.stdout:
        print(text)
        return
    cfg = ROOT / "config" / v / f"{name}.yaml"
    if cfg.exists() and not args.force:
        raise SystemExit(f"{cfg} exists (use --force)")
    cfg.parent.mkdir(parents=True, exist_ok=True)
    cfg.write_text(text)
    (ROOT / "config" / v / f"{name}.sha1").write_text(f"{sha1}  tmp/baserom/{v}/{name}.prx\n")
    sym = ROOT / "config" / v / f"symbol_addrs.{name}.txt"
    if not sym.exists():
        sym.write_text("")
    print(cfg)


if __name__ == "__main__":
    main()
