#include "m2c.h"

void func_020cae1c(void *arg0, s32 arg1) {
    s32 var_r2;
    void *var_r3;

    M2C_FIELD(arg0, s32 *, 0) = arg1;
    var_r2                    = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    var_r3                    = arg0 + 8;
    do {
        M2C_FIELD(var_r3, s16 *, 0x2C) = 0x19;
        var_r2 += 1;
        M2C_FIELD(var_r3, s32 *, 8) = 0;
        var_r3 += 0x30;
    } while (var_r2 < 0x20);
}
