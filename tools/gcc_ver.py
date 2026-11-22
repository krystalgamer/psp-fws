import sys
import glob
from elftools.elf.elffile import ELFFile
from enum import Enum, auto
from functools import total_ordering


@total_ordering
class PrxDecompilable(Enum):
    Yes = auto()
    Maybe = auto()
    Nope = auto()

    def __lt__(self, other):
        assert isinstance(other, PrxDecompilable)
        return self.value < other.value


class PrxEntry:

    def __init__(self, name, compilers):
        self.name = name

        full = True
        partial = False

        for entry in compilers:

            if 'psp-1.3.1' in entry:
                partial = True
            elif 'psp-1.7.1' in entry:
                partial = True
            else:
                full = False

        if full:
            self.decompilable = PrxDecompilable.Yes
        elif partial:
            self.decompilable = PrxDecompilable.Maybe
        else:
            self.decompilable = PrxDecompilable.Nope


    def __lt__(self, other):
        assert isinstance(other, PrxEntry)

        return (self.decompilable, self.name) < (other.decompilable, other.name)


    def __str__(self):
        return f'{self.name} {self.decompilable}'

    def __repr__(self):
        return str(self)

def print_gcc(filename, valid):

    object_compilers = set()
    with open(filename, "rb") as f:
        elf = ELFFile(f)

        section = elf.get_section_by_name(".comment")

        if section is not None:
            data = section.data()

            for entry in data.split(b"\x00"):
                if not entry:
                    continue

                parsed = entry.decode("utf-8", errors="replace")
                object_compilers.add(parsed)


    if not object_compilers:
        return

    valid.add(PrxEntry(filename, object_compilers))

def main():

    vers = set()
    for entry in glob.iglob('**/*.prx', recursive=True):
        print_gcc(entry, vers)

    for entry in sorted(vers):
        if entry.decompilable != PrxDecompilable.Nope:
            print(entry)


if __name__ == '__main__':
    sys.exit(main())
