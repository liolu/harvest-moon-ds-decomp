#include "m2c.h"

void func_020a0f50(s16 *arg0, s32 arg1) {
    s16 *var_r0;
    s16 temp_r3;
    u16 var_ip;

    var_r0 = arg0;
    var_ip = 0;
    do {
        temp_r3 = var_ip + (u16) (arg1 << 0xC);
        var_ip += 1;
        *var_r0 = temp_r3;
        var_r0  = (s16 *) ((s8 *) var_r0 + 2);
    } while ((u32) var_ip < 0x300U);
}
