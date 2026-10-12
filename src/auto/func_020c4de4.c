#include "m2c.h"

u16 func_020c4de4(u16 *arg0, u16 *arg1, u16 *arg2) {
    u16 temp_r1;
    u16 temp_r3;
    u16 var_r0;

    temp_r3 = *arg1;
    temp_r1 = *arg0;
    if ((u32) temp_r1 < (u32) temp_r3) {
        return temp_r3;
    }
    var_r0 = *arg2;
    if ((u32) temp_r1 <= (u32) var_r0) {
        var_r0 = temp_r1;
    }
    return var_r0;
}
