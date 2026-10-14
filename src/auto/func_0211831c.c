#include "m2c.h"

M2C_UNK func_0212ea20(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0212ed34(s32, s32);                    /* extern */
extern M2C_UNK data_0215fde0;
extern void *data_021c8c5c;

void func_0211831c(void *arg0) {
    func_0212ed34(M2C_FIELD(&data_0215fde0, s32 *, 0x20), arg0 + 0x10);
    func_0212ea20(arg0 + 0x10, 0x1C, 0);
    M2C_FIELD(arg0, s32 *, 0)    = (s32) M2C_FIELD(data_021c8c5c, s32 *, 0x8E4C);
    M2C_FIELD(arg0, s32 *, 4)    = (s32) M2C_FIELD(data_021c8c5c, s32 *, 0x8E50);
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s8 *, 0xC)   = 3;
    M2C_FIELD(arg0, s8 *, 0xD)   = 1;
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(data_021c8c5c, s8 *, 0xFE0);
}
