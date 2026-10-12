#include "m2c.h"

u8 *func_020bf214(M2C_UNK, s32, s32);               /* extern */

void func_020bd73c(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    u8 *temp_r0;
    u8 *temp_r0_2;
    u8 *temp_r0_3;

    *arg0 &= ~8;
    temp_r0 = func_020bf214(arg1, arg2 + 1, arg3);
    *temp_r0 &= ~8;
    temp_r0_2 = func_020bf214(arg1, arg2, arg3 + 1);
    *temp_r0_2 &= ~8;
    temp_r0_3 = func_020bf214(arg1, arg2 + 1, arg3 + 1);
    *temp_r0_3 &= ~8;
}
