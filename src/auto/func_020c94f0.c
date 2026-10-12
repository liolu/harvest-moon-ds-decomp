#include "m2c.h"

s32 func_020c923c();                                /* extern */
s32 func_020c931c(M2C_UNK);                         /* extern */
M2C_UNK func_020c9410(s32, s32, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_02141720(s32, s32, M2C_UNK);           /* extern */

void func_020c94f0(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_020c923c();
    temp_r0 = func_020c931c(arg0);
    func_02141720(temp_r0, temp_r5, 0x80);
    func_020c9410(temp_r0 + 0x80, temp_r5 + 0x80, 0x180, arg0);
}
