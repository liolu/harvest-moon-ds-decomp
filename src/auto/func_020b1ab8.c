#include "m2c.h"

extern s32 data_021c8c5c;

void func_020b1ab8(s32 arg0, s32 *arg1, s32 *arg2) {
    u8 temp_r0;
    void *temp_r3;

    if (arg0 == 0x37) {
        *arg1 = 0x11800;
        *arg2 = 0x21800;
        return;
    }
    temp_r3 = data_021c8c5c + 0x6170 + ((arg0 - 0x41) * 8);
    temp_r0 = M2C_FIELD(temp_r3, u8 *, 1);
    switch (temp_r0) {                              /* irregular */
    case 1:
        *arg1 = (M2C_FIELD(temp_r3, u8 *, 2) << 0xC) + 0x3000;
        *arg2 = (M2C_FIELD(temp_r3, u8 *, 3) << 0xC) + 0x6000;
        return;
    case 2:
        *arg1 = (M2C_FIELD(temp_r3, u8 *, 2) << 0xC) + 0x2800;
        *arg2 = (M2C_FIELD(temp_r3, u8 *, 3) << 0xC) + 0x6000;
        return;
    default:
        *arg1 = 0;
        *arg2 = 0;
        return;
    }
}
