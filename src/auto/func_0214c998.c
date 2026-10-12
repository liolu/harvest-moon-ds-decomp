#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0214c998(void) {
    mov r3, #0xff000000
    cmp r3, r0, lsl #0x1
    blo L_0214c9e0
    cmp r3, r1, lsl #0x1
    blo L_0214c9e0
    orr r3, r0, r1
    movs r3, r3, lsl #0x1
    bne L_0214c9c8
    mrs ip, cpsr
    orr ip, ip, #0x40000000
    msr cpsr_f, ip
    bx lr
L_0214c9c8:
    cmp r0, r1
    mrs ip, cpsr
    orreq ip, ip, #0x40000000
    bicne ip, ip, #0x40000000
    msr cpsr_f, ip
    bx lr
L_0214c9e0:
    mrs ip, cpsr
    bic ip, ip, #0x40000000
    msr cpsr_f, ip
    bx lr
}
// clang-format on
