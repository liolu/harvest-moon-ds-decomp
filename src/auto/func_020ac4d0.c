#include "m2c.h"

u8 *func_020ac4d0(u8 *arg0, u8 *arg1) {
    u8 *var_r0;

    var_r0 = arg0;
    if ((u32) *var_r0 >= (u32) *arg1) {
        var_r0 = arg1;
    }
    return var_r0;
}
