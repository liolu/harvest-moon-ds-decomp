#include "m2c.h"

s32 func_02005238(u16 *arg0, u16 *arg1, u16 *arg2) {
    s32 var_r0;
    u16 temp_r3;

    temp_r3 = *arg0;
    var_r0  = 0;
    if (((u32) *arg1 <= (u32) temp_r3) && ((u32) temp_r3 <= (u32) *arg2)) {
        var_r0 = 1;
    }
    return var_r0;
}
