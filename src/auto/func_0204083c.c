#include "m2c.h"

s32 func_02040810();                                /* extern */

s32 func_0204083c(s32 arg0, s32 arg1) {
    s32 temp_r0;

    if (func_02040810() == 0) {
        return arg1;
    }
    temp_r0 = arg1 + 0x2E;
    if ((temp_r0 >= 0x111) && (temp_r0 < 0x125)) {
        return temp_r0;
    }
    return arg1;
}
