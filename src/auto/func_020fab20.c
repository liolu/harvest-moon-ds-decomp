#include "m2c.h"

s32 func_020faac8();                                /* extern */
M2C_UNK func_02140988(M2C_UNK, s32);                /* extern */

s32 func_020fab20(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg3) {
    s32 temp_r0;

    temp_r0 = func_020faac8();
    func_02140988(arg3, temp_r0);
    return temp_r0;
}
