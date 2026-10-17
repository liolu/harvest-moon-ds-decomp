#include "m2c.h"

extern s32 data_021c8c5c;

void func_020b1498(s32 *arg0, s8 *arg1) {
    s32 temp_r3;
    s32 temp_r4;
    s32 var_r2;
    u8 temp_ip;
    void *temp_lr;

    var_r2  = 0x41;
    temp_r4 = data_021c8c5c + 0x6170;
loop_1:
    temp_r3 = var_r2 - 0x41;
    temp_ip = *(s8 *) (temp_r4 + (temp_r3 * 8));
    temp_lr = temp_r4 + (temp_r3 * 8);
    if ((((u32) (temp_ip << 0x1F) >> 0x1F) != 0) && (M2C_FIELD(temp_lr, u8 *, 1) == 2) &&
        (((u32) (M2C_FIELD(temp_lr, u16 *, 4) << 0x1C) >> 0x1E) == 3)) {
        M2C_FIELD(temp_lr, s8 *, 0)  = (s8) (temp_ip & ~1);
        M2C_FIELD(temp_lr, u16 *, 4) = (u16) (M2C_FIELD(temp_lr, u16 *, 4) & ~0xC);
        *arg1                        = (s8) ((u32) (M2C_FIELD(temp_lr, u16 *, 4) << 0x14) >> 0x1F);
        *arg0                        = var_r2;
        return;
    }
    var_r2 += 1;
    if (var_r2 >= 0x48) {
        return;
    }
    goto loop_1;
}