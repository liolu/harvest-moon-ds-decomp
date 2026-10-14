#include "m2c.h"

void **func_020ebb4c(M2C_UNK, s32);                 /* extern */

void func_020ea700(M2C_UNK arg0, M2C_UNK arg1) {
    s32 var_r4;
    void **temp_r0;

    var_r4 = 0;
    do {
        temp_r0 = func_020ebb4c(arg0, var_r4);
        M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK), 8)(temp_r0, arg1);
        var_r4 += 1;
    } while (var_r4 < 0x10);
}
