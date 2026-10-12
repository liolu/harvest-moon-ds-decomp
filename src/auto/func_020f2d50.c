#include "m2c.h"

s32 func_020f7abc(void *, s32, s32);                /* extern */
M2C_UNK func_0212ea20(void *, M2C_UNK, s32);        /* extern */

s32 func_020f2d50(void *arg0, void *arg1) {
    s32 temp_r0;

    if (M2C_FIELD(arg1, u8 *, 0xD0) != 0) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + M2C_FIELD(arg0, s32 *, 0x60));
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + M2C_FIELD(arg0, s32 *, 0x64));
        M2C_FIELD(arg0, u8 *, 0xE) = (u8) (M2C_FIELD(arg0, u8 *, 0xE) | 1);
        if (func_020f7abc(arg1, (s32) M2C_FIELD(arg0, s32 *, 0) >> 0xB, (s32) M2C_FIELD(arg0, s32 *, 4) >> 0xB) & 2) {
            temp_r0 = func_020f7abc(arg1, (s32) M2C_FIELD(arg0, s32 *, 0) >> 0xB, (s32) M2C_FIELD(arg0, s32 *, 4) >> 0xB) & 0xF0;
            if ((temp_r0 != 0x60) && (temp_r0 != 0x70) && (temp_r0 != 0x80) && (temp_r0 != 0x90)) {
                return 1;
            }
            goto block_10;
        }
        goto block_10;
    }
    M2C_FIELD(arg0, u8 *, 0xE) = (u8) (M2C_FIELD(arg0, u8 *, 0xE) & ~1);
block_10:
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + M2C_FIELD(arg0, s32 *, 0x68));
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (M2C_FIELD(arg0, s32 *, 0x68) - ((M2C_FIELD(arg0, s32 *, 0x6C) + 1) * 0x28));
    if ((s32) M2C_FIELD(arg0, s32 *, 8) >= 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_0212ea20(arg0 + 0x10, 0, M2C_FIELD(arg0, s32 *, 0x58));
    M2C_FIELD(arg0, u8 *, 0xE) = (u8) (M2C_FIELD(arg0, u8 *, 0xE) | 1);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, u8 *, 0x3A) = (u8) (M2C_FIELD(arg0, u8 *, 0x3A) | 1);
    func_0212ea20(arg0 + 0x3C, 0, 0);
    return 1;
}
