#include "m2c.h"

u32 func_02100aa4();                                /* extern */
extern s32 data_021c8c5c;

void func_020b9800(s32 arg0) {
    s32 temp_r5;
    s32 temp_r5_2;

    temp_r5 = data_021c8c5c + 0x743C;
    if (func_02100aa4() <= (u32) M2C_FIELD((temp_r5 + (arg0 * 2)), u16 *, 0x40)) {
        return;
    }
    temp_r5_2 = data_021c8c5c + 0x743C;
    M2C_FIELD((temp_r5_2 + (arg0 * 2)), s16 *, 0x40) = (s16) func_02100aa4();
}
