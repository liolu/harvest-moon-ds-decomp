#include "engine.h"
#include "m2c.h"

M2C_UNK func_020f3610(M2C_UNK);
void func_020f3754(M2C_UNK, M2C_UNK);
void func_020f3778(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020f38b4(M2C_UNK, M2C_UNK);
void func_020f3b20(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_021c8c5c;

void func_02105fd4(s32 arg0) {
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r5;

    func_020f38b4(arg0, 1);
    M2C_FIELD(arg0, s8 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 9) = 0;
    func_020f3b20(arg0, 1, 2);
    M2C_FIELD(arg0, s8 *, 0x1C) = 3;
    if (M2C_FIELD(arg0, u8 *, 0xA) != 0) {
        var_r5 = (s32) M2C_FIELD(arg0, s32 *, 0x14) >> 8;
    } else {
        var_r5 = (s32) M2C_FIELD((void *) func_020f3610(arg0), s16 *, 2);
    }
    if (M2C_FIELD(arg0, u8 *, 0xA) != 0) {
        var_r1 = (s32) M2C_FIELD(arg0, s32 *, 0x10) >> 8;
    } else {
        var_r1 = (s32) * (s16 *) func_020f3610(arg0);
    }
    func_020f3778(arg0, var_r1, var_r5);
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s8 *, 0x1D)  = 2;
    if (M2C_FIELD(arg0, u8 *, 0xA) != 0) {
        var_r1_2 = M2C_FIELD(arg0, s32 *, 0xC);
    } else {
        var_r1_2 = (s32) M2C_FIELD((void *) func_020f3610(arg0), s8 *, 4);
    }
    func_020f3754(arg0, var_r1_2);
    M2C_FIELD(arg0, s16 *, 0x9E)                                                            = 3;
    M2C_FIELD(arg0, s8 *, 0x99)                                                             = 0;
    M2C_FIELD(arg0, s8 *, 0x98)                                                             = 0;
    M2C_FIELD(arg0, s16 *, 0x78)                                                            = 0;
    M2C_FIELD((((M2C_FIELD(arg0, s32 *, 4) - 0x34) * 0x18) + data_021c8c5c), s16 *, 0x5E70) = 0;
}
