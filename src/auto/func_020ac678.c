#include "m2c.h"

s32 func_020ac57c(s32);                             /* extern */

s32 func_020ac678(void) {
    s32 var_r4;
    s32 var_r5;
    u32 temp_r0;

    var_r4 = 0;
    var_r5 = 0;
    do {
        temp_r0 = var_r5 - 0x2D;
        switch (temp_r0) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            break;
        default:
            var_r4 += func_020ac57c(var_r5);
            break;
        }
        var_r5 += 1;
    } while (var_r5 < 0x3A);
    return var_r4;
}
