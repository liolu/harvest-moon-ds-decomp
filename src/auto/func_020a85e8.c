#include "m2c.h"

extern s32 data_021c8c5c;

void func_020a85e8(s32 arg0, s32 *arg1, s32 *arg2) {
    void *temp_r0;

    temp_r0 = data_021c8c5c + 0x7844 + (arg0 * 8);
    *arg1   = M2C_FIELD(temp_r0, s32 *, 0x1198);
    *arg2   = M2C_FIELD(temp_r0, s32 *, 0x119C);
}
