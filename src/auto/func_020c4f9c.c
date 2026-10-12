#include "m2c.h"

u32 func_020c4f9c(u32 *arg0, u32 *arg1, u32 *arg2) {
    u32 temp_r1;
    u32 temp_r3;
    u32 var_r0;

    temp_r3 = *arg1;
    temp_r1 = *arg0;
    if (temp_r1 < temp_r3) {
        return temp_r3;
    }
    var_r0 = *arg2;
    if (temp_r1 <= var_r0) {
        var_r0 = temp_r1;
    }
    return var_r0;
}
