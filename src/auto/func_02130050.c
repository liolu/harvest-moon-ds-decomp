#include "m2c.h"

void func_02130050(void *arg0, s32 arg1) {
    u32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u32 *, 0x1BC);
    if (temp_r3 >= 0x64U) {
        return;
    }
    M2C_FIELD(arg0, u32 *, 0x1BC) = (u32) (temp_r3 + 1);
    M2C_FIELD((arg0 + (temp_r3 * 4)), s32 *, 0x2C) = arg1;
}
