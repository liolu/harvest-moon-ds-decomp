#include "m2c.h"

void *func_020f43b0();              /* extern */

void func_020f43f4(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    void *temp_r0;
    void *temp_r4;

    temp_r4                        = func_020f43b0();
    temp_r0                        = func_020f43b0(arg2, arg3);
    M2C_FIELD(temp_r4, u8 *, 0)    = (u8) M2C_FIELD(temp_r0, u8 *, 0);
    M2C_FIELD(temp_r4, u8 *, 1)    = (u8) M2C_FIELD(temp_r0, u8 *, 1);
    M2C_FIELD(temp_r4, u8 *, 2)    = (u8) M2C_FIELD(temp_r0, u8 *, 2);
    M2C_FIELD(temp_r4, u8 *, 3)    = (u8) M2C_FIELD(temp_r0, u8 *, 3);
    M2C_FIELD(temp_r4, u8 *, 4)    = (u8) M2C_FIELD(temp_r0, u8 *, 4);
    M2C_FIELD(temp_r4, u8 *, 5)    = (u8) M2C_FIELD(temp_r0, u8 *, 5);
    M2C_FIELD(temp_r4, u8 *, 6)    = (u8) M2C_FIELD(temp_r0, u8 *, 6);
    M2C_FIELD(temp_r4, u8 *, 7)    = (u8) M2C_FIELD(temp_r0, u8 *, 7);
    M2C_FIELD(temp_r4, s16 *, 8)   = (s16) M2C_FIELD(temp_r0, s16 *, 8);
    M2C_FIELD(temp_r4, s16 *, 0xA) = (s16) M2C_FIELD(temp_r0, s16 *, 0xA);
}
