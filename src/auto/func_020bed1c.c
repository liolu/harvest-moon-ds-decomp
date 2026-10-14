#include "m2c.h"

s32 func_020be7ac(M2C_UNK, s32, s32, s32);          /* extern */

s32 func_020bed1c(M2C_UNK arg0, s32 arg1, s32 arg2, s32 *arg3, s32 arg4) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r4;
    s32 temp_r5;

    temp_r4   = arg2 >> 0xC;
    temp_r0_4 = func_020be7ac(arg0, (s32) (arg1 + 0x800) >> 0xC, temp_r4, arg4);
    if (temp_r0_4 != 0) {
        *arg3 = 1;
        return temp_r0_4;
    }
    temp_r5   = arg1 >> 0xC;
    temp_r0_3 = func_020be7ac(arg0, temp_r5, (s32) (arg2 + 0x700) >> 0xC, arg4);
    if (temp_r0_3 != 0) {
        *arg3 = 2;
        return temp_r0_3;
    }
    temp_r0_2 = func_020be7ac(arg0, (s32) (arg1 - 0x800) >> 0xC, temp_r4, arg4);
    if (temp_r0_2 != 0) {
        *arg3 = 3;
        return temp_r0_2;
    }
    temp_r0 = func_020be7ac(arg0, temp_r5, (s32) (arg2 - 0x900) >> 0xC, arg4);
    if (temp_r0 != 0) {
        *arg3 = 0;
        return temp_r0;
    }
    return 0;
}
