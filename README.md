# psp-fws

Matching decompilation of PSP firmware modules (PRX), split with
[splat](https://github.com/ethteck/splat).

## Layout

- `config/<fw>/` – splat configs, sha1s and hand-written symbols per firmware version
- `src/`, `include/` – decompiled sources and headers
- `tools/` – helper scripts (extraction, PRX relocation parsing, splat wrapper/extensions)
- `inputs/` – firmware archive (`fws.zip`) and SDK; **not committed**
- `tmp/` – everything generated (baseroms, asm, build output, toolchains); **not committed**

## Setup

```sh
python3 -m venv --without-pip .venv
curl -sS https://bootstrap.pypa.io/get-pip.py | .venv/bin/python -
.venv/bin/pip install pyelftools "splat64[mips]"
make toolchain   # fetches Allegrex GCC 1.3.1/1.7.1, i386 glibc and MIPS binutils into tmp/
```

## Building

```sh
make extract     # pull the module out of inputs/fws.zip
make split       # generate relocs/symbols and run splat
make             # build and verify sha1
```

`VERSION` (default `360`) and `MODULE` (default `mcctrl`) select the target.
`make EXTRA_CPPFLAGS=-DNON_MATCHING` builds the non-matching C drafts instead of their asm.

## Decompiling

```sh
.venv/bin/python tools/progress.py            # per-function status
.venv/bin/python tools/diff.py <function>     # side-by-side vs the original
.venv/bin/python tools/m2c.py <function>      # m2c draft with project headers as context
```

Install m2c from GitHub (`pip install git+https://github.com/matt-kempster/m2c.git`);
the `m2c` package on PyPI is an unrelated project.

## Notes

- PRX relocations are parsed by `tools/prx_relocs.py` and fed to splat as
  `reloc_addrs`, so only genuinely relocated values become symbols.
- Segment 1 (`.bss`) is relocated independently in a PRX, so its immediates are
  segment-relative; the generated linker script links it at VMA 0.
- C is compiled with `cc1` from psp-gcc 1.7.1 and assembled with `psp-as` from
  1.3.1 (the 1.7.1 assembler is unavailable). splat asm uses modern GAS with
  `--no-pad-sections`.
- The `.comment` section has one `GCC: ...` entry per linked object file, which
  hints at the number of translation units (mcctrl: 4).
- psp-1.7.1 objects had 8-byte aligned `.text`; padding `nop`s before an
  8-aligned function mark a translation-unit boundary (e.g. mcctrl 0xE78).
  `tools/fix_old_gas.py --text-align 8` emulates this for psp-as 1.3.1 output.
- Sony code here uses small inline helpers (memclr/memcpy/memcmp taking
  `void *` and casting to local byte pointers) and `goto end` error chains;
  reproducing those is usually what makes register allocation match.
