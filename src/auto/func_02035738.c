#include "m2c.h"

M2C_UNK func_02035844(M2C_UNK, s32, s32);           /* extern */
s32 func_02035d40(M2C_UNK, s32);                    /* extern */

void func_02035738(M2C_UNK arg0) {
    s32 temp_r2;
    s32 var_r4;

    var_r4 = 0;
    do {
        temp_r2 = func_02035d40(arg0, var_r4);
        if (var_r4 > 1) {
            func_02035844(arg0, var_r4, temp_r2);
        }
        var_r4 += 1;
    } while (var_r4 < 0xA);
}
