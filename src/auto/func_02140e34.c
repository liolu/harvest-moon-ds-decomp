#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02140eb0();
extern char data_022c706c[];
// clang-format off
asm void func_02140e34(void) {
    ldr ip, =data_022c706c
    ldr ip, [ip, #0x0]
    cmp ip, #0x0
    movne lr, pc
    bxne ip
    ldr ip, =0x2000000
    stmfd ip!, {r0, r1, r2, r3, sp, lr}
    and r0, sp, #0x1
    mov sp, ip
    mrs r1, cpsr
    and r1, r1, #0x1f
    teq r1, #0x17
    bne L_02140e70
    bl func_02140eb0
    b L_02140e7c
L_02140e70:
    teq r1, #0x1b
    bne L_02140e7c
    bl func_02140eb0
L_02140e7c:
    ldr ip, =data_022c706c
    ldr ip, [ip, #0x0]
    cmp ip, #0x0
    b L_02140e8c
L_02140e8c:
    beq L_02140e8c
    b L_02140e94
L_02140e94:
    mov r0, r0
    b L_02140e94
    ldmfd sp!, {r0, r1, r2, r3, ip, lr}
    mov sp, ip
    bx lr
}
// clang-format on
