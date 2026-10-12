#include "m2c.h"

void *func_020f3610(void *);                        /* extern */
M2C_UNK func_0212ea20(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_0212edb8(M2C_UNK, s32);                /* extern */

void func_020f38f4(void *arg0, M2C_UNK arg1) {
    func_0212edb8(arg1, arg0 + 0x20);
    func_0212ea20(arg0 + 0x20, (M2C_FIELD(func_020f3610(arg0), s8 *, 5) & 3) | (M2C_FIELD(arg0, s32 *, 0x3C) * 4), 0);
}
