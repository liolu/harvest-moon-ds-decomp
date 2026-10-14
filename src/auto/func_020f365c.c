#include "m2c.h"

void *func_020f3630();                              /* extern */

void func_020f365c(void *arg0) {
    void *temp_r0;

    temp_r0                      = func_020f3630();
    M2C_FIELD(arg0, s8 *, 0xA)   = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(temp_r0, s16 *, 0) << 8);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(temp_r0, s16 *, 2) << 8);
}
