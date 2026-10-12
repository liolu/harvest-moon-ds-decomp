#include "m2c.h"

void func_0212d770(void *arg0, s32 arg1, s32 arg2, s8 arg3) {
    s32 var_r1;

    M2C_FIELD(arg0, s32 *, 0x680) = arg1;
    M2C_FIELD(arg0, s32 *, 0x684) = arg2;
    if (arg3 != 0) {
        var_r1 = 0x06400000;
    } else {
        var_r1 = 0x06600000;
    }
    M2C_FIELD(arg0, s32 *, 0x688) = var_r1;
    M2C_FIELD(arg0, s8 *, 0x68C) = arg3;
}
