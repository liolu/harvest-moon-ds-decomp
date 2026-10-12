#include "m2c.h"

extern s32 data_021c8c5c;

void func_020b0280(s32 arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 < 0) {
        var_r1 = 0;
    } else if (var_r1 > 0x3E7) {
        var_r1 = 0x3E7;
    }
    M2C_FIELD((data_021c8c5c + (arg0 * 2)), s16 *, 0x18D4) = (s16) var_r1;
}
