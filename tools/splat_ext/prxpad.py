"""Alignment padding between PRX output sections.

splat's builtin `pad` linker entry has no real section order, so it gets
attached to whichever block was emitted last. This variant is pinned to the
block named by the `order` yaml key (default `.text`), so it only advances the
location counter where the original linker aligned.
"""
from pathlib import Path

from splat.segtypes.common.pad import CommonSegPad
from splat.segtypes.linker_entry import LinkerEntry, LinkerWriter


class LinkerEntryPrxPad(LinkerEntry):
    def __init__(self, segment, order):
        super().__init__(segment, [], Path(), order, order, False)
        self.object_path = None

    def emit_entry(self, linker_writer: LinkerWriter):
        linker_writer._writeln(f". += 0x{self.segment.size:X};")


class PSPSegPrxpad(CommonSegPad):
    def _order(self) -> str:
        return self.yaml.get("order", ".text") if isinstance(self.yaml, dict) else ".text"

    def get_linker_section_order(self) -> str:
        return self._order()

    def get_linker_entries(self):
        return [LinkerEntryPrxPad(self, self._order())]
