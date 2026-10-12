#include "m2c.h"

extern s32 data_021c8c5c;

void func_020e5068(void *arg0) {
    u8 temp_r1;

    temp_r1 = M2C_FIELD((((M2C_FIELD(arg0, s32 *, 4) - 0x53) * 0xC) + data_021c8c5c), u8 *, 0x5A57);
    if ((u32) temp_r1 <= 0x32U) {
        M2C_FIELD(arg0, s8 *, 0x50) = 0;
        return;
    }
    if ((u32) temp_r1 <= 0x64U) {
        M2C_FIELD(arg0, s8 *, 0x50) = 1;
        return;
    }
    if ((u32) temp_r1 <= 0x96U) {
        M2C_FIELD(arg0, s8 *, 0x50) = 2;
        return;
    }
    if ((u32) temp_r1 <= 0xC8U) {
        M2C_FIELD(arg0, s8 *, 0x50) = 3;
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x50) = 4;
}
