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
# numeric firmware version for #if in shared sources: 200v1 -> FW_VERSION=200, FW_VARIANT=1
FW_VERSION := $(shell echo $(VERSION) | grep -oE '^[0-9]+')
FW_VARIANT := $(or $(shell echo $(VERSION) | grep -oP 'v\K[0-9]+'),0)

AS      := $(TOOLS)/mips-as
LD      := $(TOOLS)/mips-ld
OBJCOPY := $(TOOLS)/mips-objcopy
CC1     := $(TOOLS)/cc1-1.7.1
PSP_AS  := $(TOOLS)/psp-as-1.3.1
CPP     := cpp

ASFLAGS := -EL -march=allegrex -G0 --no-pad-sections -Iinclude
CPPFLAGS := -P -undef -nostdinc -Iinclude -Isrc -DVERSION=$(VERSION) -DFW_VERSION=$(FW_VERSION) -DFW_VARIANT=$(FW_VARIANT) -D__GNUC__=3 -D_LANGUAGE_C -D__psp__ -D__mips__ $(EXTRA_CPPFLAGS)
CFLAGS  := -G0 -quiet

S_FILES   = $(shell find tmp/asm/$(VERSION)/$(MODULE) -name '*.s' -not -path '*/nonmatchings/*' 2>/dev/null)
C_FILES   = $(shell grep -oE 'src/[^ ()]+\.c' $(LD_SCRIPT) 2>/dev/null | sort -u)
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
	$(PYTHON) tools/extract_baserom.py $(VERSION) $(MODULE)

extract: $(BASEROM)

split: $(BASEROM)
	rm -rf $(BUILD)/.splat_cache $(BUILD)/.splat_cache.$(MODULE)
	$(PYTHON) tools/prx_relocs.py $(BASEROM) $(BUILD)/reloc_addrs.$(MODULE).txt $(BUILD)/prx_syms.$(MODULE).txt --names config/$(VERSION)/symbol_addrs.$(MODULE).txt $(addprefix --names ,$(wildcard config/$(VERSION)/func_starts.$(MODULE).txt))
	$(PYTHON) tools/split.py $(CONFIG)

$(BUILD)/%.s.o: %.s
	@mkdir -p $(@D)
	$(AS) $(ASFLAGS) -o $@ $<
	$(PYTHON) tools/fix_old_gas.py --text-align 4 --data-align 4 $@

$(BUILD)/%.bin.o: %.bin
	@mkdir -p $(@D)
	$(OBJCOPY) -I binary -O elf32-tradlittlemips -B mips:allegrex $< $@

$(BUILD)/%.c.o: %.c
	@mkdir -p $(@D)
	$(CPP) $(CPPFLAGS) $$(python3 tools/cc_of.py $< $(VERSION) --cpp) $< | $$(set -- $$(python3 tools/cc_of.py $< $(VERSION)); echo $(TOOLS)/$$1; shift; echo $$@) $(CFLAGS) -o $(BUILD)/$*.c.s
	$(PSP_AS) -EL -G0 -mulsw -Iinclude -Itmp/asm/$(VERSION)/$(MODULE) -o $@ $(BUILD)/$*.c.s
	$(PYTHON) tools/fix_old_gas.py --text-align $$(grep -oP "text-align: \K[0-9]+" $< || echo 4) --data-align 4 $@

$(ELF): $(O_FILES) $(LD_SCRIPT)
	$(LD) -EL -T $(LD_SCRIPT) -T $(BUILD)/undefined_syms_auto.$(MODULE).txt -T $(BUILD)/undefined_funcs_auto.$(MODULE).txt -T $(BUILD)/abs_syms.$(MODULE).txt -Map $(BUILD)/$(MODULE).map -o $@

$(TARGET): $(ELF)
	$(OBJCOPY) -O binary $< $@

clean:
	rm -rf $(BUILD)/tmp $(BUILD)/src $(ELF) $(TARGET)

distclean:
	rm -rf tmp/build tmp/asm tmp/assets
