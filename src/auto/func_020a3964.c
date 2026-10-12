#include "m2c.h"

extern s32 data_021c8c5c;

void func_020a3964(s32 arg0, u32 arg1) {
    u32 var_r1;

    var_r1 = arg1;
    if (var_r1 > 0x3B9ACA00U) {
        var_r1 = 0x3B9ACA00;
    }
    M2C_FIELD((data_021c8c5c + (arg0 * 4)), u32 *, 0x6348) = var_r1;
}
