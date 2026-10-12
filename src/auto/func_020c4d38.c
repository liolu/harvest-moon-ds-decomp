#include "m2c.h"

s32 func_020c4d38(s32 *arg0, s32 *arg1, s32 *arg2) {
    s32 temp_r0;
    s32 temp_r3;
    s32 var_r0;

    temp_r3 = *arg0;
    temp_r0 = *arg1;
    if (temp_r3 < temp_r0) {
        return temp_r0;
    }
    var_r0 = *arg2;
    if (temp_r3 <= var_r0) {
        var_r0 = temp_r3;
    }
    return var_r0;
}
