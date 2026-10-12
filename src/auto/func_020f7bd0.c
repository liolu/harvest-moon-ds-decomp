#include "m2c.h"

s32 func_020f7bd0(void *arg0, s32 arg1) {
    s32 temp_r1;
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0xE0);
    temp_r1 = temp_r3 + M2C_FIELD((temp_r3 + ((u32) ((arg1 >> 8) << 0x1C) >> 0x1B)), u16 *, 2);
    return temp_r1 + M2C_FIELD((temp_r1 + ((u32) (arg1 << 0x18) >> 0x17)), u16 *, 2);
}
