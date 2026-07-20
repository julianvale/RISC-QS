#include "riscq.h"

/* Digital-only bring-up result.  start.S publishes __rq_magic and the final DONE status. */
volatile unsigned int board_check_result;

int main(void) {
    board_check_result = 0xC05C5C01u;
    return 0x005Cu;
}
