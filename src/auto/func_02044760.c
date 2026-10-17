#include "engine.h"
#include "m2c.h"

void func_02017a98(M2C_UNK, M2C_UNK);
M2C_UNK func_02044e7c(M2C_UNK);
M2C_UNK func_02044eac(M2C_UNK);
M2C_UNK func_02044ed4(M2C_UNK, M2C_UNK);
u16 func_02044ef8(s32, s32);
s32 func_020b289c(s16 *);
void func_0212df10(s32, s32, u32, void *);

void func_02044760(s32 arg0, s32 arg1) {
    s16 *temp_r4;
    s32 temp_r5;
    s32 temp_r7;
    s32 var_r1;
    s32 var_r1_2;
    u8 var_r0;

    temp_r4 = arg0 + 0x26B0 + (arg1 * 8);
    if (M2C_FIELD(temp_r4, u8 *, 4) == 0) {
        return;
    }
    temp_r5 = (arg1 * 0x1C) + (arg0 + 0x2464);
    if (func_020b289c(temp_r4) != 0) {
        func_02017a98(temp_r5 + 4, 0);
    } else {
        if (M2C_FIELD(temp_r4, u8 *, 6) == 0) {
            var_r1 = 1;
        } else {
            var_r1 = 0;
        }
        temp_r7 = func_02044ed4(arg1, var_r1);
        if (M2C_FIELD(temp_r4, u8 *, 6) == 0) {
            var_r1_2 = 1;
        } else {
            var_r1_2 = 0;
        }
        func_0212df10((s32) M2C_FIELD(temp_r4, s16 *, 0), temp_r7, (u32) func_02044ef8(arg1, var_r1_2), temp_r5 + 4);
        M2C_FIELD(temp_r5, s32 *, 4)   = (s32) ((func_02044e7c(arg1) + 8) << 8);
        M2C_FIELD(temp_r5, s32 *, 8)   = (s32) ((func_02044eac(arg1) + 8) << 8);
        M2C_FIELD(temp_r5, s8 *, 0x10) = 1;
        func_02017a98(temp_r5 + 4, 1);
        if (M2C_FIELD(temp_r4, u8 *, 6) == 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        M2C_FIELD(temp_r4, u8 *, 6) = var_r0;
    }
    M2C_FIELD(temp_r4, u8 *, 4) = 0U;
}
