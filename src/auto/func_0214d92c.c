/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0214d92c from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/Runtime/src/console_io.c (license: none), reused by
 * tools/donor_match.py */
// clang-format off
asm int func_0214d92c(void) {
    str     lr, [sp, #-4]!
    mov     r1, #0
    mov     r0, #0x07
    swi     0x123456
    ldr     pc, [sp], #4
}
// clang-format on
