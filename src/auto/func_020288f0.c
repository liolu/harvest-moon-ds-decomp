#include "m2c.h"

s32 func_020288f0(void *arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 >= 3) {
        var_r1 += M2C_FIELD(arg0, s32 *, 0x258C) * 0x12;
    }
    return var_r1;
}
