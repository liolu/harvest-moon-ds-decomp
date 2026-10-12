#include "m2c.h"

void *func_020f43b0(u8, u8);                        /* extern */

void func_020f427c(void *arg0, s32 *arg1, s32 *arg2) {
    s32 var_r1;
    void *temp_r0;

    temp_r0 = func_020f43b0(M2C_FIELD(arg0, u8 *, 4), M2C_FIELD(arg0, u8 *, 5));
    if (M2C_FIELD(arg0, u8 *, 7) & 1) {
        *arg1 = M2C_FIELD(temp_r0, s16 *, 8) << 8;
        var_r1 = M2C_FIELD(temp_r0, s16 *, 0xA) << 8;
    } else {
        *arg1 += M2C_FIELD(arg0, s16 *, 8) << 8;
        var_r1 = *arg2 + (M2C_FIELD(arg0, s16 *, 0xA) << 8);
    }
    *arg2 = var_r1;
    if (M2C_FIELD(temp_r0, u8 *, 7) & 2) {
        *arg2 += 0x800;
    }
}
