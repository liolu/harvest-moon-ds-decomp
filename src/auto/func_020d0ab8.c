#include "m2c.h"

void **func_020d34d8(void *, s32);                  /* extern */

void func_020d0ab8(void *arg0, M2C_UNK arg1) {
    s32 var_r5;
    void **temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
        var_r5 = 0;
        do {
            temp_r0 = func_020d34d8(arg0, var_r5);
            M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK), 0x24)(temp_r0, arg1);
            var_r5 += 1;
        } while (var_r5 < 0x1C);
    } else {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 1;
    M2C_FIELD(arg0, s32 *, 0x18) = -1;
    M2C_FIELD(arg0, s32 *, 0x20) = -1;
}
