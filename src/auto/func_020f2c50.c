#include "m2c.h"

M2C_UNK func_0212ea20(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_0212ed34(s32, s32);                    /* extern */
extern M2C_UNK data_0215fde0;
extern void *data_021c8c5c;
extern s8 data_022c20a4;

void func_020f2c50(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s8 temp_r0;

    func_0212ed34(M2C_FIELD(&data_0215fde0, s32 *, 0x28), arg0 + 0x10);
    func_0212ea20(arg0 + 0x10, 2, M2C_FIELD(arg0, s32 *, 0x58));
    M2C_FIELD(arg0, s32 *, 0x6C) = arg1;
    temp_r0 = M2C_FIELD(data_021c8c5c, s8 *, 0xFE1);
    switch (temp_r0) {
    default:
        break;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x60) = 0;
        M2C_FIELD(arg0, s32 *, 0x64) = -0x180;
        break;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x60) = 0x180;
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
        break;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x60) = 0;
        M2C_FIELD(arg0, s32 *, 0x64) = 0x180;
        break;
    case 3:
        M2C_FIELD(arg0, s32 *, 0x60) = -0x180;
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
        break;
    }
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) ((arg1 * 0xA0) + ((arg1 + 1) << 9));
    M2C_FIELD(arg0, s32 *, 0) = arg2;
    M2C_FIELD(arg0, s32 *, 4) = arg3;
    M2C_FIELD(arg0, s32 *, 8) = 0xC00;
    M2C_FIELD(arg0, u8 *, 0xE) = (u8) (M2C_FIELD(arg0, u8 *, 0xE) & ~1);
    data_022c20a4 = 0;
}
