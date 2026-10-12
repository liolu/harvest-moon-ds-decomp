#include "m2c.h"

M2C_UNK func_02008890(s32, s32);                    /* extern */
M2C_UNK func_0202507c(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_020c5794(s32);                             /* extern */

void func_020088b4(s32 arg0) {
    s32 var_r4;

    func_0202507c(arg0 + 0x3078, 0, 5);
    var_r4 = 0;
    do {
        if (func_020c5794(var_r4 + 0x33B) != 0) {
            func_02008890(arg0, var_r4);
        }
        var_r4 += 1;
    } while (var_r4 < 0x29);
}
