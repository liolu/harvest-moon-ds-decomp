#include "m2c.h"

s32 func_020f3f90(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020fa0f4(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_020ffb50(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r4 = func_020f3f90(arg0, arg1, 1);
    temp_r5 = func_020f3f90(arg0, arg1, 0);
    if (temp_r4 != 0) {
        func_020fa0f4(temp_r4, arg2, arg3);
    }
    if (temp_r5 == 0) {
        return;
    }
    func_020fa0f4(temp_r5, arg2, arg3);
}
