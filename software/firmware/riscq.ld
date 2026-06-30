/* riscq.ld — flat image in the single 4 KiB core RAM at 0x80000000 (docs/software/02 §3b). */
ENTRY(_start)
MEMORY { RAM (rwx) : ORIGIN = 0x80000000, LENGTH = 4K }
SECTIONS {
  .text   : { *(.text.init) *(.text*) }     > RAM
  .rodata : { *(.rodata*) }                 > RAM
  .data   : { *(.data*) }                   > RAM
  .bss    : { __bss_start = .; *(.bss*) *(COMMON) __bss_end = .; } > RAM
  _end = .;
  _stack_top = ORIGIN(RAM) + LENGTH(RAM);   /* 0x80001000 */
  /* fail loudly if the program + a 256-byte stack margin overflow the 4 KiB RAM */
  ASSERT(_end <= _stack_top - 256, "RAM overflow: program too large for the 4 KiB core RAM")
  /DISCARD/ : { *(.comment) *(.note*) *(.eh_frame*) }
}
