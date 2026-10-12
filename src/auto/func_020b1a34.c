#include "m2c.h"

extern s32 data_021c8c5c;

void func_020b1a34(s32 arg0, s32 *arg1, s32 *arg2) {
    u8 temp_r0;

    if (arg0 == 0x37) {
        *arg1 = 0x8000;
        *arg2 = 0xBE00;
        return;
    }
    temp_r0 = M2C_FIELD((data_021c8c5c + ((arg0 - 0x41) * 8)), u8 *, 0x6171);
    switch (temp_r0) {                              /* irregular */
    case 1:
        *arg1 = 0xA000;
        *arg2 = 0x13000;
        return;
    case 2:
        *arg1 = 0x8800;
        *arg2 = 0xEE00;
        return;
    default:
        *arg1 = 0;
        *arg2 = 0;
        return;
    }
}
