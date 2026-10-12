#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_021419ac(void) {
    stmfd sp!, {r4, r5, r6, lr}
    ldr r5, [r0], #0x4
    mov r2, r5, lsr #0x8
    b L_021419bc
L_021419bc:
    cmp r2, #0x0
    ble L_02141a44
    ldrb lr, [r0], #0x1
    mov r4, #0x8
    b L_021419d0
L_021419d0:
    subs r4, r4, #0x1
    blt L_021419bc
    tst lr, #0x80
    bne L_021419f4
    ldrb r6, [r0], #0x1
    swpb r6, r6, [r1]
    add r1, r1, #0x1
    sub r2, r2, #0x1
    b L_02141a34
L_021419f4:
    ldrb r5, [r0, #0x0]
    mov r6, #0x3
    add r3, r6, r5, asr #0x4
    ldrb r6, [r0], #0x1
    and r5, r6, #0xf
    mov ip, r5, lsl #0x8
    ldrb r6, [r0], #0x1
    orr r5, r6, ip
    add ip, r5, #0x1
    sub r2, r2, r3
    b L_02141a20
L_02141a20:
    ldrb r5, [r1, -ip]
    swpb r5, r5, [r1]
    add r1, r1, #0x1
    subs r3, r3, #0x1
    bgt L_02141a20
L_02141a34:
    cmp r2, #0x0
    movgt lr, lr, lsl #0x1
    bgt L_021419d0
    b L_021419bc
L_02141a44:
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
