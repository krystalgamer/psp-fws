#!/usr/bin/env python3
"""Guess translation-unit boundaries in a split .text asm file.

psp-1.7.1 objects have 8-byte aligned .text, so a padding `nop` after a
function's end (outside any function) precedes the next object's first
function. Prints the file offsets/vrams of likely TU starts.
Usage: tools/find_tu_boundaries.py tmp/asm/<ver>/<mod>/<mod>.s
"""
import re
import sys

LINE = re.compile(r"/\* ([0-9A-F]+) ([0-9A-F]+) ([0-9A-F]{8}) \*/")


def main():
    text = open(sys.argv[1]).read().splitlines()
    in_func = False
    pad = None
    starts = []
    for line in text:
        if line.startswith("glabel "):
            if pad is not None:
                starts.append((pad, line.split()[1]))
            in_func, pad = True, None
        elif line.startswith("endlabel "):
            in_func = False
        else:
            m = LINE.search(line)
            if m and not in_func and m[3] == "00000000":
                pad = (int(m[1], 16), int(m[2], 16))
    first = next(l.split()[1] for l in text if l.startswith("glabel "))
    print(f"TU 0: {first}")
    for i, ((rom, vram), fn) in enumerate(starts, 1):
        print(f"TU {i}: rom 0x{rom + 4:X} vram 0x{vram + 4:X} {fn}")


if __name__ == "__main__":
    main()
