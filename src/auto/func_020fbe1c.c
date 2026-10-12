#include "m2c.h"

s32 *func_020fbe70(s32);                            /* extern */

s32 func_020fbe1c(s32 arg0) {
    s32 temp_r1;
    s32 var_r4;

    var_r4 = 0;
loop_1:
    temp_r1 = *func_020fbe70(var_r4);
    if ((((u32) (temp_r1 << 0x1C) >> 0x1F) != 0) && (((u32) (temp_r1 * 0x10) >> 0x1F) != 0) && (arg0 == ((u32) (temp_r1 << 0x1A) >> 0x1E))) {
        return 1;
    }
    var_r4 += 1;
    if (var_r4 >= 6) {
        return 0;
    }
    goto loop_1;
}
