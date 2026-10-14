#include "m2c.h"

void **func_0212b39c(void *, s32);                  /* extern */

void func_0212b284(void *arg0, M2C_UNK arg1) {
    s32 var_r7;
    void **temp_r0;

    var_r7                   = 0;
    M2C_FIELD(arg0, s8 *, 4) = 0;
    do {
        M2C_FIELD(func_0212b39c(arg0, var_r7), s8 *, 8) = 0;
        M2C_FIELD(func_0212b39c(arg0, var_r7), s8 *, 9) = 0;
        temp_r0                                         = func_0212b39c(arg0, var_r7);
        M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK, M2C_UNK), 0x20)(temp_r0, arg1, 1);
        var_r7 += 1;
    } while (var_r7 < 3);
}
