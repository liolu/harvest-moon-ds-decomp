#include "m2c.h"

M2C_UNK func_0202e2e4(void *, M2C_UNK, s32);        /* extern */

void func_0202e2bc(void *arg0, s32 arg1, s32 arg2, M2C_UNK arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    M2C_FIELD(arg0, s32 *, 0x28) = arg2;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    func_0202e2e4(arg0, arg3, arg4);
}
