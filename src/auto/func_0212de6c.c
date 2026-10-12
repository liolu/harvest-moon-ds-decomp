#include "m2c.h"

M2C_UNK func_020c8e20(M2C_UNK *, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0212e01c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */

void func_0212de6c(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3) {
    u8 sp0[32];

    func_0212e01c(arg0, arg1, 0, sp0);
    func_020c8e20(sp0, arg2 << 5, 0x20, arg3);
}
