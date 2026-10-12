#include "m2c.h"

s32 func_020ca3e8(s32 arg0) {
    s32 var_r0;
    s32 var_r2;

    var_r0 = arg0;
    var_r2 = 1;
    if ((var_r0 & 0x80000000) == 0x80000000) {
        var_r0 -= 0x80000000;
        var_r2 = -1;
    }
    return (var_r0 >> 0xC) * var_r2;
}
