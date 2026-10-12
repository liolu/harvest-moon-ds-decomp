#include "m2c.h"

s32 func_020ca398(s32 arg0, s32 arg1) {
    s32 var_r0;
    s32 var_r3;

    var_r0 = arg0;
    var_r3 = 0;
    if (var_r0 < 0) {
        var_r3 = 0x80000000;
        var_r0 *= -1;
    }
    return var_r3 | (arg1 | (var_r0 << 0xC));
}
