#include "m2c.h"

void func_020f79cc(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 0xF0) = (s32) (arg1 << 8);
    M2C_FIELD(arg0, s32 *, 0xF4) = (s32) (arg2 << 8);
    M2C_FIELD(arg0, s32 *, 0xF8) = (s32) (((arg1 + arg3) - 0x100) << 8);
    M2C_FIELD(arg0, s32 *, 0xFC) = (s32) (((arg2 + arg4) - 0xC0) << 8);
}
