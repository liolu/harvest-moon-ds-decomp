#include "m2c.h"

M2C_UNK func_0211d550(s32, s16, s8);                /* extern */
M2C_UNK func_0211d5a0(s32, s16, s8);                /* extern */
M2C_UNK func_0212dea4(s16, s32, M2C_UNK, void *);   /* extern */

void func_021176b0(void *arg0, s32 arg1, s32 arg2) {
    void *temp_r0;
    void *temp_r2;

    temp_r0 = M2C_FIELD(arg0, void **, 0);
    if (temp_r0 == NULL) {
        return;
    }
    func_0211d5a0(M2C_FIELD(arg0, s32 *, 0x54), M2C_FIELD(temp_r0, s16 *, 0), M2C_FIELD(temp_r0, s8 *, 2));
    func_0212dea4(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0), 0x107, 5, arg0 + 4);
    M2C_FIELD(arg0, u8 *, 0x12) = (u8) (M2C_FIELD(arg0, u8 *, 0x12) | 1);
    M2C_FIELD(arg0, s8 *, 0x10) = 2;
    M2C_FIELD(arg0, s32 *, 4)   = arg1;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0) == 0x189) {
        M2C_FIELD(arg0, s32 *, 8) = (s32) (arg2 + 0x400);
    } else {
        M2C_FIELD(arg0, s32 *, 8) = arg2;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = 0x1400;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0;
    M2C_FIELD(arg0, s8 *, 0x1D) = 0;
    M2C_FIELD(arg0, s8 *, 0x1E) = 0;
    M2C_FIELD(arg0, s8 *, 0x20) = -1;
    M2C_FIELD(arg0, s8 *, 0x1F) = 0;
    M2C_FIELD(arg0, s8 *, 0x21) = -1;
    temp_r2                     = M2C_FIELD(arg0, void **, 0);
    func_0211d550(M2C_FIELD(arg0, s32 *, 0x54), M2C_FIELD(temp_r2, s16 *, 0), M2C_FIELD(temp_r2, s8 *, 2));
}
