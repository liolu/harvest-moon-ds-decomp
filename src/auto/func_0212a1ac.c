#include "m2c.h"

M2C_UNK func_021416cc(M2C_UNK, s32, M2C_UNK);       /* extern */

void func_0212a1ac(s32 arg0) {
    s32 var_r6;
    s32 var_r7;

    var_r6 = 0;
    var_r7 = arg0;
    do {
        func_021416cc(0, var_r7, 0x1A);
        var_r6 += 1;
        var_r7 += 0x40;
    } while (var_r6 < 4);
}
