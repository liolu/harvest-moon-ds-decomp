#include "m2c.h"

s32 func_020d34d8(M2C_UNK, s32);                    /* extern */
M2C_UNK func_020d3568(s32, M2C_UNK);                /* extern */

void func_020d284c(M2C_UNK arg0, M2C_UNK arg1) {
    s32 var_r4;

    var_r4 = 0;
    do {
        func_020d3568(func_020d34d8(arg0, var_r4), arg1);
        var_r4 += 1;
    } while (var_r4 < 0x1C);
}
