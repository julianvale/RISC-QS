#include "riscq.h"

volatile int user_val;

int main(void) {
    user_val = 0x12345678;
    return 0x5D00; // Publishes STATUS_DONE
}