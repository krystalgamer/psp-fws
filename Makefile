VERSION ?= 360
MODULE  ?= mcctrl

BUILD   := tmp/build/$(VERSION)
TOOLS   := tmp/toolchains/bin
PYTHON  := .venv/bin/python

BASEROM := tmp/baserom/$(VERSION)/$(MODULE).prx
CONFIG  := config/$(VERSION)/$(MODULE).yaml
LD_SCRIPT := $(BUILD)/$(MODULE).ld
ELF     := $(BUILD)/$(MODULE).elf
TARGET  := $(BUILD)/$(MODULE).prx

AS      := $(TOOLS)/mips-as
LD      := $(TOOLS)/mips-ld
OBJCOPY := $(TOOLS)/mips-objcopy
CC1     := $(TOOLS)/cc1-1.7.1
PSP_AS  := $(TOOLS)/psp-as-1.3.1
CPP     := cpp

ASFLAGS := -EL -march=allegrex -G0 --no-pad-sections -Iinclude
CPPFLAGS := -P -undef -nostdinc -Iinclude -Isrc -DVERSION=$(VERSION) -D__GNUC__=3 -D_LANGUAGE_C -D__psp__ -D__mips__
CFLAGS  := -O2 -G0 -quiet

S_FILES   = $(shell find tmp/asm/$(VERSION)/$(MODULE) -name '*.s' 2>/dev/null)
C_FILES   = $(shell find src/$(MODULE) -name '*.c' 2>/dev/null)
BIN_FILES = $(wildcard tmp/assets/$(VERSION)/$(MODULE)/*.bin)
O_FILES   = $(foreach f,$(S_FILES) $(C_FILES) $(BIN_FILES),$(BUILD)/$(f).o)

.PHONY: all extract split clean distclean toolchain
.DEFAULT_GOAL := all

all: $(TARGET)
	@sha1sum -c config/$(VERSION)/$(MODULE).sha1 --quiet <(sed 's#tmp/baserom/#$(BUILD)/#; s#/$(VERSION)/$(VERSION)/#/$(VERSION)/#' config/$(VERSION)/$(MODULE).sha1) \
		&& echo "$(TARGET): OK" || (echo "$(TARGET): MISMATCH"; false)

SHELL := /bin/bash

toolchain:
	tools/setup_toolchain.sh

$(BASEROM):
	$(PYTHON) tools/extract_baserom.py $(VERSION) kd/$(MODULE).prx

extract: $(BASEROM)

split: $(BASEROM)
	$(PYTHON) tools/prx_relocs.py $(BASEROM) $(BUILD)/reloc_addrs.$(MODULE).txt $(BUILD)/prx_syms.$(MODULE).txt
	$(PYTHON) tools/split.py $(CONFIG)

$(BUILD)/%.s.o: %.s
	@mkdir -p $(@D)
	$(AS) $(ASFLAGS) -o $@ $<

$(BUILD)/%.bin.o: %.bin
	@mkdir -p $(@D)
	$(OBJCOPY) -I binary -O elf32-tradlittlemips -B mips:allegrex $< $@

$(BUILD)/%.c.o: %.c
	@mkdir -p $(@D)
	$(CPP) $(CPPFLAGS) $< | $(CC1) $(CFLAGS) -o $(BUILD)/$*.c.s
	$(PSP_AS) -EL -G0 -Iinclude -o $@ $(BUILD)/$*.c.s

$(ELF): $(O_FILES) $(LD_SCRIPT)
	$(LD) -EL -T $(LD_SCRIPT) -T $(BUILD)/undefined_syms_auto.$(MODULE).txt -T $(BUILD)/undefined_funcs_auto.$(MODULE).txt -Map $(BUILD)/$(MODULE).map -o $@

$(TARGET): $(ELF)
	$(OBJCOPY) -O binary $< $@

clean:
	rm -rf $(BUILD)/tmp $(BUILD)/src $(ELF) $(TARGET)

distclean:
	rm -rf tmp/build tmp/asm tmp/assets
