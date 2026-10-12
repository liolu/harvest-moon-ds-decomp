#include "m2c.h"

s32 func_0211f20c(s32);                             /* extern */

s32 func_0211f28c(s32 arg0) {
    s32 var_r4;

    var_r4 = 0;
loop_1:
    if (func_0211f20c(arg0 + var_r4) == 0) {
        return 0;
    }
    var_r4 += 1;
    if (var_r4 >= 3) {
        return 1;
    }
    goto loop_1;
}
