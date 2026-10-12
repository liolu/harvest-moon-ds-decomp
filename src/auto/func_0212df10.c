#include "m2c.h"

void func_0212df10(s32 arg0, s32 arg1, u32 arg2, void *arg3) {
    M2C_FIELD(arg3, s16 *, 0x12) = 0x20F8;
    M2C_FIELD(arg3, s16 *, 0x14) = 0x41F8;
    M2C_FIELD(arg3, s16 *, 0x16) = (s16) (arg1 + ((arg2 >> 4) << 0xC));
}
