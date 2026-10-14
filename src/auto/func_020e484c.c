#include "engine.h"
#include "m2c.h"

void func_02004b0c(M2C_UNK, M2C_UNK);
M2C_UNK func_020f3610(M2C_UNK);
void func_020f38b4(M2C_UNK, M2C_UNK);
void func_020f39e4(M2C_UNK, M2C_UNK);
void func_020f3a94(M2C_UNK, M2C_UNK);
M2C_UNK func_02121150(M2C_UNK, M2C_UNK);

extern s32 data_021c8c5c;

s32 func_020e484c(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r6;
    u8 temp_r2;

    temp_r4 = ((M2C_FIELD(arg0, s32 *, 4) - 0x53) * 0xC) + (data_021c8c5c + 0x5A54);
    temp_r2 = M2C_FIELD(temp_r4, u8 *, 0xA);
    if (temp_r2 == 0xB) {
        if (M2C_FIELD(arg0, u8 *, 0xA) != 0) {
            var_r6 = M2C_FIELD(arg0, s32 *, 0xC);
        } else {
            var_r6 = (s32) M2C_FIELD((void *) func_020f3610(arg0), s8 *, 4);
        }
        temp_r0 = func_02121150(arg1, 1);
        if (temp_r0 != 0) {
            var_r0 = M2C_FIELD(temp_r0, s32 *, 4);
        } else {
            var_r0 = -1;
        }
        if (var_r6 == var_r0) {
            func_020f38b4(arg0, 1);
            M2C_FIELD(arg0, s8 *, 8) = 1;
        } else {
            temp_r0_2 = func_02121150(arg1, 0);
            if (temp_r0_2 != 0) {
                var_r0_2 = M2C_FIELD(temp_r0_2, s32 *, 4);
            } else {
                var_r0_2 = -1;
            }
            if (var_r6 == var_r0_2) {
                func_020f38b4(arg0, 0);
                M2C_FIELD(arg0, s8 *, 9) = 1;
            }
        }
        func_02004b0c(arg0 + 0x10, 1);
        func_020f3a94(arg0, 0);
        func_020f3a94(arg0, 4);
        func_020f39e4(arg0, 2);
        M2C_FIELD(arg0, s8 *, 0x1D)   = 0;
        M2C_FIELD(temp_r4, u8 *, 0xA) = 0xCU;
        return 1;
    }
    if (temp_r2 == 0xC) {
        if (M2C_FIELD(arg0, u8 *, 0x37) == 0) {
            func_020f3a94(arg0, 0);
            func_020f39e4(arg0, 2);
            M2C_FIELD(arg0, s8 *, 0x1D)   = 1;
            M2C_FIELD(arg0, s16 *, 0x54)  = 0x3C;
            M2C_FIELD(arg0, s16 *, 0x52)  = 0x10;
            M2C_FIELD(temp_r4, u8 *, 0xA) = 5U;
        }
        return 1;
    }
    return 0;
}
