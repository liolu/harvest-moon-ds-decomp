#include "m2c.h"

extern s32 data_021c8c5c;

void func_020b1620(s32 arg0, s32 *arg1) {
    s32 var_r3;
    void *temp_r2;

    var_r3 = 0x41;
loop_1:
    temp_r2 = data_021c8c5c + 0x6170 + ((var_r3 - 0x41) * 8);
    if ((M2C_FIELD(temp_r2, u8 *, 1) == 1) && (M2C_FIELD(temp_r2, s16 *, 6) == arg0)) {
        M2C_FIELD(temp_r2, s16 *, 6) = -1;
        M2C_FIELD(temp_r2, u16 *, 4) = (u16) (M2C_FIELD(temp_r2, u16 *, 4) & ~0x7F0);
        M2C_FIELD(temp_r2, u16 *, 4) = (u16) (M2C_FIELD(temp_r2, u16 *, 4) & ~0x800);
        M2C_FIELD(temp_r2, u8 *, 0)  = (u8) (M2C_FIELD(temp_r2, u8 *, 0) & ~1);
        M2C_FIELD(temp_r2, u16 *, 4) = (u16) (M2C_FIELD(temp_r2, u16 *, 4) & ~0xC);
        *arg1                        = var_r3;
        return;
    }
    var_r3 += 1;
    if (var_r3 >= 0x48) {
        return;
    }
    goto loop_1;
}
