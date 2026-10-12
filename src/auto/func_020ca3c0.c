#include "m2c.h"

s32 func_020ca3c0(s16 arg0) {
    s16 var_r0;
    s32 var_r1;

    var_r0 = arg0;
    var_r1 = 0;
    if ((var_r0 & 0x8000) == 0x8000) {
        var_r0 -= 0x8000;
        var_r1 = 0x80000000;
    }
    return var_r1 | var_r0;
}
