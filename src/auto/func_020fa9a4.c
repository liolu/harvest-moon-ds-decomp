#include "m2c.h"

M2C_UNK func_020fa4cc(M2C_UNK, s32, s32, s32);      /* extern */

void func_020fa9a4(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_r4;
    s32 temp_r5;
    s32 var_r6;
    s32 var_r8;

    var_r8 = arg2;
    temp_r5 = var_r8 + arg4;
    temp_r4 = arg1 + arg3;
    if (var_r8 >= temp_r5) {
        return;
    }
    do {
        var_r6 = arg1;
        if (arg1 < temp_r4) {
            do {
                func_020fa4cc(arg0, var_r6, var_r8, arg5);
                var_r6 += 1;
            } while (var_r6 < temp_r4);
        }
        var_r8 += 1;
    } while (var_r8 < temp_r5);
}
