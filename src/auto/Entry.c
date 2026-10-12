#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02000928();
extern void func_02000940();
extern void func_020009fc();
extern void func_02000a88();
extern void func_02000b70();
extern void func_0214d914();
extern void func_0214ee38();
extern char BuildInfo[];
extern char data_027e0000[];
extern char func_01ff8000[];
extern char main[];
// clang-format off
asm void Entry(void) {
    mov ip, #0x4000000
    str ip, [ip, #0x208]
    bl func_02000a88
    mov r0, #0x13
    msr cpsr_c, r0
    ldr r0, =data_027e0000
    add r0, r0, #0x3fc0
    mov sp, r0
    mov r0, #0x12
    msr cpsr_c, r0
    ldr r0, =data_027e0000
    add r0, r0, #0x3fc0
    sub r0, r0, #0x40
    sub sp, r0, #0x4
    ldr r1, =0x400
    sub r1, r0, r1
    mov r0, #0x1f
    msr cpsr_fsxc, r0
    sub sp, r1, #0x4
    mov r0, #0x0
    ldr r1, =data_027e0000
    mov r2, #0x4000
    bl func_02000928
    mov r0, #0x0
    ldr r1, =0x5000000
    mov r2, #0x400
    bl func_02000928
    mov r0, #0x200
    ldr r1, =0x7000000
    mov r2, #0x400
    bl func_02000928
    ldr r1, =BuildInfo
    ldr r0, [r1, #0x14]
    bl func_02000940
    bl func_020009fc
    ldr r0, =BuildInfo
    ldr r1, [r0, #0xc]
    ldr r2, [r0, #0x10]
    mov r3, r1
    mov r0, #0x0
    b L_020008a4
L_020008a4:
    cmp r1, r2
    strlo r0, [r1], #0x4
    blo L_020008a4
    bic r1, r3, #0x1f
    b L_020008b8
L_020008b8:
    mcr p15, 0, r0, c7, c10, 4
    mcr p15, 0, r1, c7, c5, 1
    mcr p15, 0, r1, c7, c14, 1
    add r1, r1, #0x20
    cmp r1, r2
    blt L_020008b8
    ldr r1, =0x27fff9c
    str r0, [r1, #0x0]
    ldr r1, =data_027e0000
    add r1, r1, #0x3fc0
    add r1, r1, #0x3c
    ldr r0, =func_01ff8000
    str r0, [r1, #0x0]
    bl func_0214d914
    bl func_02000b70
    bl func_0214ee38
    ldr r1, =main
    ldr lr, =0xffff0000
    bx r1
}
// clang-format on
