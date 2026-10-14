#include "m2c.h"

void *func_020f3630();                              /* extern */

void func_020f386c(void *arg0, s32 arg1, s32 arg2, s8 arg3) {
    void *temp_r0;

    temp_r0 = func_020f3630();
    if (M2C_FIELD(arg0, u8 *, 0xA) == 0) {
        M2C_FIELD(temp_r0, s16 *, 0) = (s16) (arg1 >> 8);
        M2C_FIELD(temp_r0, s16 *, 2) = (s16) (arg2 >> 8);
        M2C_FIELD(temp_r0, s8 *, 4)  = arg3;
    }
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) arg3;
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    M2C_FIELD(arg0, s32 *, 0x14) = arg2;
}
