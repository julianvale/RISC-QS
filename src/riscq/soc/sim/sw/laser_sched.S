# laser_sched.S — core-0 CPU-in-the-loop laser scheduling payload.
#
# Programs one CW laser window through the normal posted RF write path.  The laser register
# values are intentionally raw low-bit values (unlike the pulse-table fields, they are NOT
# shifted into bits [31:16]).  Build with:
#   /config/build/riscv-install/bin/clang -target riscv32 -march=rv32i -mabi=ilp32 -mno-relax \
#     -nostdlib -static -Wl,-Ttext=0x80000000 -Wl,-e,_start \
#     src/riscq/soc/sim/sw/laser_sched.S -o src/riscq/soc/sim/sw/laser_sched.elf

  .section .text.init, "ax"
  .globl _start
_start:
  li   t0, 0xbff8          # shared batch time
  lw   a0, 0(t0)
  addi a0, a0, 1024        # absolute start well beyond posted-link setup latency

  li   t1, 0x40000         # core-0 laser RF target
  sw   a0, 0x10(t1)        # startTime
  li   t2, 1
  sw   t2, 0x04(t1)        # half-period = 1 (raw low bits)
  li   t2, 8
  sw   t2, 0x08(t1)        # duration = 8 batches (raw low bits)
  li   t2, 1
  sw   t2, 0x0c(t1)        # CW = 1 (raw low bit)
  sw   x0, 0x00(t1)        # fire last

1:
  j    1b
