#include "m2c.h"

void *func_020f43b0();                              /* extern */

void func_020f4468(s32 arg0, s32 arg1, u8 arg2, u8 arg3) {
    void *temp_r0;

    temp_r0 = func_020f43b0();
    M2C_FIELD(temp_r0, u8 *, 2) = (u8) (arg2 + (M2C_FIELD(temp_r0, u8 *, 2) - M2C_FIELD(temp_r0, u8 *, 0)));
    M2C_FIELD(temp_r0, u8 *, 3) = (u8) (arg3 + (M2C_FIELD(temp_r0, u8 *, 3) - M2C_FIELD(temp_r0, u8 *, 1)));
    M2C_FIELD(temp_r0, u8 *, 0) = arg2;
    M2C_FIELD(temp_r0, u8 *, 1) = arg3;
}
