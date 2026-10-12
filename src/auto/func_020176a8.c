#include "m2c.h"

s32 func_020c926c(s32);                             /* extern */
M2C_UNK func_020c92e4(s32);                         /* extern */
s32 func_020c934c(s32);                             /* extern */
M2C_UNK func_0212df10(M2C_UNK, M2C_UNK, s32, s32);  /* extern */
M2C_UNK func_0212df34(M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_02141720(s32, s32, M2C_UNK);           /* extern */

void func_020176a8(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5) {
    s32 temp_r5;

    func_0212df34(arg1, arg2, arg3, arg4, arg5);
    temp_r5 = func_020c926c(arg5) + (arg4 << 5);
    func_02141720(func_020c934c(arg5) + (arg4 << 5), temp_r5, 0x20);
    func_020c92e4(arg5);
    func_0212df10(arg1, arg3, arg4, arg0 + 4);
}
