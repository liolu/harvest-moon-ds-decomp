#include "m2c.h"

void func_0212d724(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 0x648) = (s32) ((-1 - arg2) << 8);
    M2C_FIELD(arg0, s32 *, 0x64C) = (s32) ((-1 - arg4) << 8);
    M2C_FIELD(arg0, s32 *, 0x650) = (s32) ((arg1 + 0x101 + arg2) << 8);
    M2C_FIELD(arg0, s32 *, 0x654) = (s32) ((arg3 + 0xC1 + arg4) << 8);
}
