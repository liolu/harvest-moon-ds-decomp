#include "m2c.h"

s32 func_020a74a0(M2C_UNK, M2C_UNK, s32);           /* extern */

s32 func_0211f20c(M2C_UNK arg0) {
    s32 var_r7;

    var_r7 = 0;
loop_1:
    if (func_020a74a0(0, arg0, var_r7) == 0) {
        return 0;
    }
    if (func_020a74a0(1, arg0, var_r7) == 0) {
        return 0;
    }
    if (func_020a74a0(2, arg0, var_r7) == 0) {
        return 0;
    }
    var_r7 += 1;
    if (var_r7 > 0x63) {
        return 1;
    }
    goto loop_1;
}
