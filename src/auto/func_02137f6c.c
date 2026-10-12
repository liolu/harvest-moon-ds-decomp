#include "m2c.h"

void func_02137f6c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4, s32 arg5) {
    s32 temp_r5;
    u8 var_r6;

    var_r6 = 0;
loop_1:
    temp_r5 = (var_r6 * 0x14) + arg0;
    if (M2C_FIELD(temp_r5, s8 *, 0x342C) != 0) {
        M2C_FIELD(temp_r5, s8 *, 0x342C) = 0;
        M2C_FIELD(temp_r5, s8 *, 0x342D) = 0;
        M2C_FIELD(temp_r5, s8 *, 0x342E) = 0;
        M2C_FIELD(temp_r5, u8 *, 0x342F) = arg4;
        M2C_FIELD(temp_r5, s32 *, 0x3430) = arg5;
        M2C_FIELD(temp_r5, s32 *, 0x343C) = arg1;
        M2C_FIELD(temp_r5, s32 *, 0x3434) = arg2;
        M2C_FIELD(temp_r5, s32 *, 0x3438) = arg3;
        return;
    }
    var_r6 += 1;
    if ((u32) var_r6 >= 3U) {
        return;
    }
    goto loop_1;
}
