#include "m2c.h"

s32 func_020d0ff8(M2C_UNK, s32, s32);               /* extern */

s32 func_020d163c(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 var_r1;

    temp_r0 = func_020d0ff8(arg0, arg1 << 8, arg2 << 8);
    var_r1  = -1;
    if (temp_r0 != -1) {
        var_r1 = temp_r0 + 0x37;
    }
    return var_r1;
}
