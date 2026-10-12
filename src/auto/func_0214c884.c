#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0214c884(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_0214c8d4
    cmn ip, r3, lsl #0x1
    bhs L_0214c8e8
L_0214c898:
    orrs ip, r3, r1
    bmi L_0214c8bc
    cmp r1, r3
    cmpeq r0, r2
    bx lr
L_0214c8ac:
    mrs ip, cpsr
    bic ip, ip, #0x40000000
    msr cpsr_f, ip
    bx lr
L_0214c8bc:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    bx lr
L_0214c8d4:
    bne L_0214c8ac
    cmp r0, #0x0
    bhi L_0214c8ac
    cmn ip, r3, lsl #0x1
    blo L_0214c898
L_0214c8e8:
    bne L_0214c8ac
    cmp r2, #0x0
    bhi L_0214c8ac
    b L_0214c898
}
// clang-format on
