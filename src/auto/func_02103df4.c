#include "m2c.h"

void *func_020f3610(void *);                        /* extern */
M2C_UNK func_020f38b4(void *, M2C_UNK);             /* extern */
M2C_UNK func_020f39e4(void *, s8);                  /* extern */
M2C_UNK func_020f3a94(void *, s32);                 /* extern */
extern s32 data_021c8c5c;

void func_02103df4(void *arg0) {
    M2C_FIELD((((M2C_FIELD(arg0, s32 *, 4) - 0x34) * 0x18) + data_021c8c5c), s16 *, 0x5E70) = 0;
    func_020f38b4(arg0, 1);
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s8 *, 0x1D)  = 2;
    func_020f3a94(arg0, M2C_FIELD(arg0, s32 *, 0x3C));
    func_020f39e4(arg0, M2C_FIELD(func_020f3610(arg0), s8 *, 5));
}
