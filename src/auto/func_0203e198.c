#include "m2c.h"

s32 func_020173e8();                                /* extern */
M2C_UNK func_0203e3bc(M2C_UNK, s32);                /* extern */

s32 func_0203e198(M2C_UNK arg0, void *arg1) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg1, s32 *, 4);
    if (temp_r2 == 0xF) {
        func_0203e3bc(arg0, temp_r2);
        return 0;
    }
    return func_020173e8(arg0, arg1);
}
