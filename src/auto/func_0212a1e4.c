#include "m2c.h"

M2C_UNK func_021416cc(M2C_UNK, s32, M2C_UNK);       /* extern */

void func_0212a1e4(void) {
    s32 var_r6;
    s32 var_r7;

    var_r7 = 0;
    var_r6 = 0x06003500;
    do {
        func_021416cc(0, var_r6, 0x1A);
        var_r7 += 1;
        var_r6 += 0x40;
    } while (var_r7 < 4);
}
