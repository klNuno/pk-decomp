# pk-decomp: matching decompilation of Disney's PK: Out of the Shadows (PS2, 2002).
#   make check-disk  check the disc image against Redump, extract it, check the retail executable
#   make split       regenerate asm/ and linker/ (and missing src/ stubs) with splat
#   make             build build/$(EXE) from src/ and asm/
#   make check       build, then compare the sha1 of the whole executable with the retail one
#   make clean       remove build/; make distclean also removes extract/, asm/, linker/
#
# REGION picks the disc: eu (SLES-50773, v1.01, 2002-08-22, the European "Donald Duck PK") or
# us (SLUS-20478, v1.00, 2002-07-16). Hashes of the disc tracks are Redump's.

SHELL       := /bin/bash
.SHELLFLAGS := -eo pipefail -c

REGION  ?= eu
ifeq ($(REGION),eu)
EXE        := SLES_507.73
DISK_SHA1  := c9b5f638a48d6d3f27feb97cb71a9534d9fe170a
else ifeq ($(REGION),us)
EXE        := SLUS_204.78
DISK_SHA1  := 8417aa16496e3bb9a6ced2fa957b8a994a93f8a2
else
$(error REGION must be eu or us)
endif
DISK    ?= disks/pk-$(REGION).bin
EXTRACT := extract/$(REGION)
BUILD   := build/$(REGION)
PYTHON  := .venv/bin/python
SPLAT   := config/$(REGION)/splat.yaml

# Metrowerks CodeWarrior for PS2. The .comment says "MW MIPS C Compiler (2.4.1.01)", which the 2.4 and
# 3.0.x kits all write; tools/setup.sh unpacks decomp.me's kits into tools/mwcc/<kit>/ (MWCC_KITS in
# tools/versions.env). 3.0.3 is the only kit that matches every calibration function of phase 1 (it inlines
# float to int casts, 3.0 and 3.0.1 call a helper); try another with make MWCC_VER=mwcps2-3.0.1-020123.
MWCC_VER ?= mwcps2-3.0.3-020716
MWCC     := tools/bin/wibo tools/mwcc/$(MWCC_VER)/mwccps2.exe
# Candidate flags, to be measured in phase 1 on matched functions: the base set, then the game set.
MWCC_BASEFLAGS ?= -c -g -opt level=3 -farcall off -sdatathreshold 8
MWCC_GAMEFLAGS ?= -pragma "dividefix on" -inline deferred -O3,p
MWCCFLAGS ?= $(MWCC_BASEFLAGS) $(MWCC_GAMEFLAGS) -nostdinc -Iinclude
# tools/setup.sh installs wrappers in tools/bin/ when the system has no MIPS binutils.
CROSS   := $(if $(wildcard tools/bin/mipsel-linux-gnu-as),tools/bin/,)mipsel-linux-gnu-
AS      := $(CROSS)as
LD      := $(CROSS)ld
OBJCOPY := $(CROSS)objcopy
ASFLAGS := -Iinclude -march=r5900 -mabi=eabi -EL -G0 -no-pad-sections

S_SRCS  := $(shell find asm/$(REGION) -name '*.s' -not -path '*/nonmatchings/*' -not -path '*/matchings/*' 2>/dev/null)
C_SRCS  := $(shell find src -name '*.c' -o -name '*.cpp' 2>/dev/null)
# The ELF header and the file's tail (section names, .comment, .reginfo, section headers), from splat.
BIN_SRCS := $(shell find assets/$(REGION) -name '*.bin' 2>/dev/null)
OBJS    := $(S_SRCS:%=$(BUILD)/%.o) $(C_SRCS:%=$(BUILD)/%.o) $(BIN_SRCS:%=$(BUILD)/%.o)
ELF     := $(BUILD)/$(EXE).elf
TARGET  := $(BUILD)/$(EXE)
LDSCRIPT := linker/$(REGION)/pk.ld

.PHONY: all check split extract check-disk clean distclean
.DELETE_ON_ERROR:
.SECONDARY:

all: $(TARGET)

# The linked ELF places each part at its file offset (AT() in the linker script): objcopy gives the file.
check: $(TARGET)
	@echo "$$(cat config/$(REGION)/$(EXE).sha1)  $(TARGET)" | sha1sum -c - || \
	 { test -f $(EXTRACT)/$(EXE) && cmp $(TARGET) $(EXTRACT)/$(EXE) | head -1; exit 1; }

$(TARGET): $(ELF)
	$(OBJCOPY) -O binary $< $@

$(ELF): $(OBJS) $(LDSCRIPT)
	$(LD) -nostdlib --no-check-sections -T $(LDSCRIPT) -T linker/$(REGION)/undefined_syms_auto.txt \
	  -T linker/$(REGION)/undefined_funcs_auto.txt -Map $(BUILD)/pk.map -o $@

$(BUILD)/%.s.o: %.s
	@mkdir -p $(@D)
	$(AS) $(ASFLAGS) -o $@ $<

$(BUILD)/%.bin.o: %.bin
	@mkdir -p $(@D)
	printf '.section .data\n.incbin "%s"\n' $< | $(AS) $(ASFLAGS) -o $@ -

$(BUILD)/%.c.o: %.c $(LDSCRIPT) Makefile
	@mkdir -p $(@D)
	$(MWCC) $(MWCCFLAGS) -o $@ $<

$(BUILD)/%.cpp.o: %.cpp $(LDSCRIPT) Makefile
	@mkdir -p $(@D)
	$(MWCC) $(MWCCFLAGS) -o $@ $<

split $(LDSCRIPT): $(wildcard $(SPLAT)) | $(EXTRACT)/$(EXE)
	@test -f $(SPLAT) || { echo "no $(SPLAT) yet: phase 1 writes it"; exit 1; }
	rm -rf asm/$(REGION) linker/$(REGION)
	$(PYTHON) -m splat split $(SPLAT)

extract: $(EXTRACT)/$(EXE)

# A raw CD track (2352-byte sectors) or a 2048-byte ISO; a CHD converts first (disks/README.md).
$(EXTRACT)/$(EXE):
	@test -f "$(DISK)" || { echo "no disc: put your own dump at $(DISK) (see disks/README.md)"; exit 1; }
	@mkdir -p $(EXTRACT)
	$(PYTHON) -I tools/disc.py iso "$(DISK)" $(EXTRACT)/disc.iso
	$(PYTHON) -I tools/disc.py x $(EXTRACT)/disc.iso $(EXTRACT)
	rm -f $(EXTRACT)/disc.iso

$(EXTRACT)/$(EXE).seg: $(EXTRACT)/$(EXE)
	$(PYTHON) -I tools/disc.py seg $< $@

check-disk:
	@test -f "$(DISK)" || { echo "no disc: put your own dump at $(DISK) (see disks/README.md)"; exit 1; }
	echo "$(DISK_SHA1)  $(DISK)" | sha1sum -c -
	$(MAKE) extract
	@if [ -f config/$(REGION)/$(EXE).sha1 ]; then echo "$$(cat config/$(REGION)/$(EXE).sha1)  $(EXTRACT)/$(EXE)" | sha1sum -c -; \
	 else echo "config/$(REGION)/$(EXE).sha1 missing: phase 1 records it"; sha1sum $(EXTRACT)/$(EXE); fi

clean:
	rm -rf build

print-%:
	@echo '$($*)'

distclean: clean
	rm -rf extract asm linker
