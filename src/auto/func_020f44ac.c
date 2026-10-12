#include "m2c.h"

void *func_020f43b0();                        /* extern */

void func_020f44ac(s8 arg0, s8 arg1, s8 arg2, s8 arg3) {
    void *temp_r0;
    void *temp_r4;

    temp_r4 = func_020f43b0();
    temp_r0 = func_020f43b0(arg2, arg3);
    M2C_FIELD(temp_r4, s8 *, 4) = arg2;
    M2C_FIELD(temp_r4, s8 *, 5) = arg3;
    M2C_FIELD(temp_r4, s8 *, 7) = 3;
    M2C_FIELD(temp_r4, s16 *, 8) = (s16) ((s32) ((M2C_FIELD(temp_r4, u8 *, 0) + M2C_FIELD(temp_r4, u8 *, 2)) * 8) >> 1);
    M2C_FIELD(temp_r4, s16 *, 0xA) = (s16) ((M2C_FIELD(temp_r4, u8 *, 1) * 8) + 8);
    M2C_FIELD(temp_r0, s8 *, 4) = arg0;
    M2C_FIELD(temp_r0, s8 *, 5) = arg1;
    M2C_FIELD(temp_r0, s8 *, 7) = 1;
    M2C_FIELD(temp_r0, s16 *, 8) = (s16) ((s32) ((M2C_FIELD(temp_r0, u8 *, 0) + M2C_FIELD(temp_r0, u8 *, 2)) * 8) >> 1);
    M2C_FIELD(temp_r0, s16 *, 0xA) = (s16) ((M2C_FIELD(temp_r0, u8 *, 1) * 8) - 8);
}
