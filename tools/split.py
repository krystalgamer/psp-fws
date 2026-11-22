#!/usr/bin/env python3
"""Run splat with PSP-specific tweaks.

- Allegrex GCC/GAS emit `j` for intra-function jumps (they carry R_MIPS_26
  relocs), but splat's psp platform forces rabbitizer to treat `j` as a tail
  call, which produces bogus function symbols. Keep `j` as a branch instead.
- Some modules embed data (e.g. keys) inside functions. rabbitizer may decode
  those words as 64-bit/R4000 instructions that GAS rejects for allegrex, so
  rewrite such lines as raw `.word`s.
- PRX segment 1 (.bss) is relocated independently of segment 0, so the
  original HI16/LO16 immediates are relative to the segment start. Link the
  bss output section at VMA 0 to reproduce them.
"""
import re
import sys
from pathlib import Path

import rabbitizer
import spimdisasm
import splat.platforms.psp
from splat.__main__ import splat_main
from splat.util import options

UNSUPPORTED = {
    "ld", "sd", "ldl", "ldr", "sdl", "sdr", "lwu", "lld", "scd", "pref",
    "ldc1", "sdc1", "ldc2", "sdc2", "lwc2", "swc2", "daddi", "daddiu",
    "lwl", "lwr", "swl", "swr",
    # Allegrex system/debug instructions modern GAS doesn't know
    "mfie", "mtie", "sleep", "halt", "mfic", "mtic", "mfdr", "mtdr", "dbreak", "dret",
    "tgei", "tgeiu", "tlti", "tltiu", "teqi", "tnei",
    # VFPU loads/stores, moves and branches (other VFPU ops start with "v")
    "lv.s", "lv.q", "sv.s", "sv.q", "lvl.q", "lvr.q", "svl.q", "svr.q",
    "mfv", "mtv", "mfvc", "mtvc", "bvf", "bvt", "bvfl", "bvtl",
}


def unsupported(op):
    # Every remaining VFPU mnemonic starts with "v"; base MIPS has none.
    return op in UNSUPPORTED or op.startswith("v")
DATA_WORD_RE = re.compile(
    r"^(?P<pre>\s*/\* (?P<rom>[0-9A-F]+) [0-9A-F]+ (?P<raw>[0-9A-F]{8}) \*/ )\.word (?P<val>[A-Za-z_][\w.+\- ]*)$"
)
INSN_RE = re.compile(
    r"^(?P<pre>\s*/\* [0-9A-F]+ [0-9A-F]+ (?P<raw>[0-9A-F]{8}) \*/\s+)(?P<op>[a-z0-9.]+)\s"
)


def _psp_init(target_bytes: bytes):
    rabbitizer.config.toolchainTweaks_treatJAsUnconditionalBranch = True
    # Only emit .align when it can't move anything (PRX sections are 4-aligned
    # and jump tables/doubles there aren't necessarily 8-aligned).
    spimdisasm.common.GlobalConfig.SYMBOL_ALIGNMENT_REQUIRES_ALIGNED_SECTION = True
    # Data words only reference symbols through real relocations.
    spimdisasm.common.GlobalConfig.ALLOW_ALL_ADDENDS_ON_DATA = False
    spimdisasm.common.GlobalConfig.ALLOW_ALL_CONSTANTS_ON_DATA = False


def fix_unsupported(asm_dir: Path, reloc_roms=frozenset()):
    """Rewrite lines GAS can't take (or that would mis-assemble) as raw words.

    Besides opcodes modern GAS rejects for Allegrex, this covers %hi/%lo
    operands spimdisasm inferred at offsets without a PRX relocation: those
    are plain constants (e.g. handwritten code using $gp as a register).
    """
    for path in asm_dir.rglob("*.s"):
        lines = path.read_text().splitlines(keepends=True)
        changed = False
        for i, line in enumerate(lines):
            m = INSN_RE.match(line)
            bogus_reloc = (
                m is not None and reloc_roms is not None
                and ("%hi(" in line or "%lo(" in line or "%gp_rel(" in line)
                and int(line.split("/*", 1)[1].split()[0], 16) not in reloc_roms
            )
            dm = DATA_WORD_RE.match(line.rstrip("\n"))
            if dm and reloc_roms and int(dm["rom"], 16) not in reloc_roms:
                word = int.from_bytes(bytes.fromhex(dm["raw"]), "little")
                lines[i] = f"{dm['pre']}.word 0x{word:08X} # {dm['val']}\n"
                changed = True
                continue
            if m and (unsupported(m["op"]) or bogus_reloc):
                word = int.from_bytes(bytes.fromhex(m["raw"]), "little")
                lines[i] = f"{m['pre']}.word      0x{word:08X} # {line[m.start('op'):].strip()}\n"
                changed = True
        if changed:
            path.write_text("".join(lines))


def fix_ld_script(ld_path: Path, config_path: Path):
    """Link PRX segment 1 relative to its own base.

    `<name>_seg1` segments start at VMA 0 and their bss at its offset within
    the segment. Older configs with only a bss subsegment get bss at VMA 0.
    """
    import yaml

    cfg = yaml.safe_load(config_path.read_text())
    text = ld_path.read_text()
    for seg in cfg["segments"]:
        if not isinstance(seg, dict) or not str(seg.get("name", "")).endswith("_seg1"):
            continue
        name, base = seg["name"], seg["vram"]
        text = re.sub(rf"^(\s*\.{name}) 0x[0-9A-Fa-f]+ :", r"\1 0x0 :", text, flags=re.M)
        for sub in seg.get("subsegments", []):
            if isinstance(sub, dict) and sub.get("type") == "bss":
                off = sub["vram"] - base
                text = re.sub(rf"^(\s*\.{name}_bss)( 0x[0-9A-Fa-f]+)? \(NOLOAD\)", rf"\1 0x{off:X} (NOLOAD)", text, flags=re.M)
    text = re.sub(r"^(\s*\.\w+_bss) \(NOLOAD\)", r"\1 0x0 (NOLOAD)", text, flags=re.M)
    # PRX parts are packed at their real file offsets (gaps are prxpad).
    text = re.sub(r"^\s*__romPos = ALIGN\(__romPos, \d+\);\n", "", text, flags=re.M)
    ld_path.write_text(text)


def prune_undefined_syms(asm_dir: Path, undef_path: Path):
    """Drop auto 'undefined' symbols that the asm defines.

    Linker-script assignments override object symbols, so a stale entry
    (seen when segment 1 starts right where segment 0 ends) would pin the
    symbol to its absolute vram instead of its segment-relative address.
    """
    if not undef_path.exists():
        return
    defined = set()
    for f in asm_dir.rglob("*.s"):
        defined.update(re.findall(r"^\s*(?:glabel|dlabel|alabel|jlabel)\s+(\w+)", f.read_text(), re.M))
    lines = undef_path.read_text().splitlines()
    kept = [l for l in lines if l.split("=")[0].strip() not in defined]
    undef_path.write_text("\n".join(kept) + ("\n" if kept else ""))


def _no_pointer_guessing(self, word: int) -> bool:
    # PRX relocations identify every real pointer (fed in via reloc_addrs);
    # value-based guessing turns plain data that happens to look like an
    # address into bogus symbol references.
    return False


spimdisasm.mips.sections.MipsSectionBase.SectionBase.checkWordIsASymbolReference = _no_pointer_guessing

splat.platforms.psp.init = _psp_init

if __name__ == "__main__":
    sys.argv[1:1] = ["split"]
    try:
        splat_main()
    finally:
        if options.opts is not None and getattr(options.opts, "asm_path", None):
            relocs = set()
            for rp in options.opts.reloc_addrs_paths:
                for rl in Path(rp).read_text().splitlines():
                    if rl.startswith("rom:"):
                        relocs.add(int(rl.split()[0][4:], 16))
            fix_unsupported(options.opts.asm_path, relocs)
            fix_ld_script(options.opts.ld_script_path, Path(sys.argv[-1]))
            prune_undefined_syms(options.opts.asm_path, options.opts.undefined_syms_auto_path)
