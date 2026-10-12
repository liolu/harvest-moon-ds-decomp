#include "m2c.h"

M2C_UNK func_0212ea20(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0212ed34(s32, s32);                    /* extern */
extern M2C_UNK data_0215fde0;

void func_02105e88(void *arg0) {
    func_0212ed34(M2C_FIELD(&data_0215fde0, s32 *, 0x20), arg0 + 0x10);
    func_0212ea20(arg0 + 0x10, 0x1C, 0);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 0xC) = 2;
    M2C_FIELD(arg0, s8 *, 0xE) = 0;
    M2C_FIELD(arg0, s8 *, 0xD) = 1;
    M2C_FIELD(arg0, s16 *, 0x30) = 0;
    M2C_FIELD(arg0, s8 *, 0x32) = 0;
    M2C_FIELD(arg0, s8 *, 0x33) = 0;
}
