#include "m2c.h"

M2C_UNK func_0202dd34(s32, s32, M2C_UNK, s32, s32, s32, void *); /* extern */

void func_0202dcc0(void *arg0, M2C_UNK arg1) {
    func_0202dd34(M2C_FIELD(arg0, s32 *, 0x2C) + M2C_FIELD(arg0, s32 *, 0x24),
                  M2C_FIELD(arg0, s32 *, 0x30) + M2C_FIELD(arg0, s32 *, 0x28), arg1, M2C_FIELD(arg0, s32 *, 4),
                  M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC), arg0 + 0x10);
    M2C_FIELD(arg0, s32 *, 8)    = (s32) (M2C_FIELD(arg0, s32 *, 8) + 2);
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 0x40);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) + 1);
}
