#include "m2c.h"

void func_02017960(void *arg0) {
    s8 var_r1;

    if (M2C_FIELD(arg0, s32 *, 0x3C) & 2) {
        var_r1 = 0x41;
    } else {
        var_r1 = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x13) = var_r1;
}
