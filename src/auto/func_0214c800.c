#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0214c800(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_0214c860
    cmn ip, r3, lsl #0x1
    bhs L_0214c874
L_0214c814:
    orrs ip, r3, r1
    bmi L_0214c838
    cmp r1, r3
    cmpeq r0, r2
    bx lr
L_0214c828:
    mrs ip, cpsr
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_0214c838:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    bne L_0214c854
    mrs ip, cpsr
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bxeq lr
L_0214c854:
    cmp r3, r1
    cmpeq r2, r0
    bx lr
L_0214c860:
    bne L_0214c828
    cmp r0, #0x0
    bhi L_0214c828
    cmn ip, r3, lsl #0x1
    blo L_0214c814
L_0214c874:
    bne L_0214c828
    cmp r2, #0x0
    bhi L_0214c828
    b L_0214c814
}
// clang-format on
