# Makefile — build one self-contained ELF per example program with stock RV32I clang.
#
# Our core handles hazards in hardware (standard rv32ui/um ELFs pass under RVLS lock-step), so no
# NOP-padding toolchain fork is needed — unlike the RISC-Q reference (docs/software/02 §3d).
# plain = (not ?=) so make's built-in CC=cc doesn't win; still overridable on the command line.
CC   = clang
ARCH = rv32i                         # override `make ARCH=rv32im` when the core is built withMul

CFLAGS  = -target riscv32 -march=$(ARCH) -mabi=ilp32 -mno-relax -nostdlib -static \
          -Os -ffreestanding -Iinclude
LDFLAGS = -Wl,-T,riscq.ld -Wl,-e,_start

EXAMPLES = $(wildcard examples/*.c)
ELVES    = $(patsubst examples/%.c,build/%.elf,$(EXAMPLES))

.PHONY: all clean
all: $(ELVES)

build/%.elf: build/crt0.o build/%.o | build
	$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@

build/%.o: examples/%.c include/riscq.h | build
	$(CC) $(CFLAGS) -c $< -o $@

build/crt0.o: crt0.S | build
	$(CC) $(CFLAGS) -c $< -o $@

build:
	mkdir -p build

clean:
	rm -rf build
