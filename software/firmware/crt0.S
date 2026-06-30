# crt0.S — the entire freestanding runtime for a riscq core.
#
# The SoC gives each core ONE 4 KiB RAM at 0x80000000 (docs/software/01 §2c): code, data, and
# stack all share it, so the stack lives at the top and grows down. The host loader writes the whole
# ELF image into RAM, so .data/.rodata are already live; only .bss must be zeroed here.
#
# The image is loaded at a fixed absolute address and uses no PIC/gp, so addresses are formed with
# absolute %hi/%lo (not `la`'s PC-relative expansion, which the integrated assembler won't pair under
# -mno-relax) and main is reached with a direct jal (the <4 KiB image is always in ±1 MiB range).
    .section .text.init, "ax"
    .globl _start
    .option norvc
_start:
    lui  sp, %hi(_stack_top)         # 0x80001000 (top of the 4 KiB RAM), grows down
    addi sp, sp, %lo(_stack_top)
    # zero .bss — not part of the loaded image, so a read-before-write global would see garbage
    lui  t0, %hi(__bss_start)
    addi t0, t0, %lo(__bss_start)
    lui  t1, %hi(__bss_end)
    addi t1, t1, %lo(__bss_end)
1:  bgeu t0, t1, 2f
    sw   x0, 0(t0)
    addi t0, t0, 4
    j    1b
2:  jal  ra, main
    j    .                           # spin forever on return (reset vector never falls through)
