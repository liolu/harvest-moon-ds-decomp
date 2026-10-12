#include "m2c.h"

M2C_UNK func_020f2ae4(s32);                         /* extern */

void func_020f14dc(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    func_020f2ae4(arg0 + 0x14);
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = arg3;
}
