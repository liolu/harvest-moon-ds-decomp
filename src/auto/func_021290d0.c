#include "m2c.h"

s32 func_021291c0(s32, M2C_UNK);                    /* extern */

s32 func_021290d0(s32 arg0, M2C_UNK arg1) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r4;
    s32 var_r5;

    var_r5 = arg0 + 4;
    var_r4 = 0;
loop_1:
    if (func_021291c0(var_r5, arg1) != 0) {
        var_r0 = arg0 + 4 + (var_r4 << 5);
    } else {
        var_r4 += 1;
        var_r5 += 0x20;
        if (var_r4 >= 0xA) {
            var_r0 = 0;
        } else {
            goto loop_1;
        }
    }
    if (var_r0 == 0) {
        var_r0_2 = 1;
    } else {
        var_r0_2 = 0;
    }
    if (var_r0_2 != 0) {
        return 1;
    }
    return 0;
}
