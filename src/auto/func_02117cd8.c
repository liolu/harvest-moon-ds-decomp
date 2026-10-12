#include "m2c.h"

M2C_UNK func_021175f0(M2C_UNK, void *, s32, s32);   /* extern */

void func_02117cd8(void *arg0, void *arg1, M2C_UNK arg2) {
    M2C_FIELD(arg1, s16 *, 0) = 0x188;
    M2C_FIELD(arg1, s8 *, 2) = 1;
    M2C_FIELD(arg1, s8 *, 3) = 1;
    func_021175f0(arg2, arg1, M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, u8 *, 0xE) = (u8) (M2C_FIELD(arg0, u8 *, 0xE) & ~1);
}
