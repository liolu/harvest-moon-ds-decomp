#include "m2c.h"

M2C_UNK func_020c3794(s32, M2C_UNK);                /* extern */

void func_020a887c(s32 arg0, s32 arg1) {
    s32 var_r5;
    s32 var_r7;

    var_r7 = arg0;
    var_r5 = 0;
    if (arg1 <= 0) {
        return;
    }
    do {
        func_020c3794(var_r7, -1);
        var_r5 += 1;
        var_r7 += 4;
    } while (var_r5 < arg1);
}
