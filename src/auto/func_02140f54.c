#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02140d80();
extern void func_02140d90();
extern void r2();
extern char data_022c7070[];
extern char data_022c7074[];
extern char data_022c7078[];
// clang-format off
asm void func_02140f54(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_022c7074
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    ldmeqfd sp!, {r3, pc}
    mov r0, sp
    ldr r1, =0x9f
    msr cpsr_fsxc, r1
    mov sp, r0
    bl func_02140d80
    ldr r1, =data_022c7070
    ldr r0, =data_022c7074
    ldr r1, [r1, #0x0]
    ldr r2, [r0, #0x0]
    ldr r0, =data_022c7078
    blx r2
    bl func_02140d90
    ldmfd sp!, {r3, pc}
}
// clang-format on
