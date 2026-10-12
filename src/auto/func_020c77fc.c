#include "m2c.h"

s32 func_020c7704();                                /* extern */

s32 func_020c77fc(s32 arg0, u32 arg1, M2C_UNK arg2, s32 (*arg3)(s32, M2C_UNK, u32)) {
    s32 temp_r0;

    if (func_020c7704() == 0) {
        temp_r0 = arg3(arg0 + 4, arg2, arg1);
        if ((temp_r0 >= 0) && ((u32) temp_r0 <= arg1)) {
            return 1;
        }
        return 0;
    }
    return 0;
}
