#include "m2c.h"

M2C_UNK func_0212de6c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0212ea20(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_0212ed34(s32, void *);                 /* extern */
extern M2C_UNK data_0215fde0;

void func_020f2ae4(void *arg0) {
    func_0212de6c(1, 0, 5, 1);
    func_0212ed34(M2C_FIELD(&data_0215fde0, s32 *, 0x28), arg0 + 0x10);
    M2C_FIELD(arg0, s32 *, 0)  = 0;
    M2C_FIELD(arg0, s32 *, 4)  = 0;
    M2C_FIELD(arg0, s32 *, 8)  = 0;
    M2C_FIELD(arg0, u8 *, 0xE) = (u8) (M2C_FIELD(arg0, u8 *, 0xE) & ~1);
    func_0212ea20(arg0 + 0x10, 2, M2C_FIELD(arg0, s32 *, 0x58));
    func_0212ed34(M2C_FIELD(&data_0215fde0, s32 *, 0x10), arg0 + 0x3C);
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    func_0212ea20(arg0 + 0x3C, 0, 0);
    M2C_FIELD(arg0, u8 *, 0x3A) = (u8) (M2C_FIELD(arg0, u8 *, 0x3A) & ~1);
}
