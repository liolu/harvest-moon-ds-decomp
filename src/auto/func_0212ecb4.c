#include "m2c.h"

M2C_UNK func_0212e2bc(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0212e9f4(void *, s32);                 /* extern */
M2C_UNK func_0212ea20(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0212eaa0(void *, M2C_UNK);             /* extern */
s32 func_0212fc60(M2C_UNK);                         /* extern */

void func_0212ecb4(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_0212e9f4(arg0, func_0212fc60(arg1));
    M2C_FIELD(arg0, s8 *, 0xD) = 1;
    func_0212eaa0(arg0, 0xEF);
    func_0212ea20(arg0, arg2, 0);
    M2C_FIELD(arg0, s8 *, 0xC) = 4;
    func_0212e2bc(0, 4, arg3);
}
