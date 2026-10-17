#include "engine.h"
#include "m2c.h"

M2C_UNK func_0207bb5c(M2C_UNK, M2C_UNK);
u16 func_0207bb80(s32, s32);
s32 func_020b289c(s16 *);
void func_0212df34(M2C_UNK, M2C_UNK, s32, u32, u8);

s32 func_0207b790(s32 arg0, s32 arg1) {
    s16 *temp_r5;
    s32 temp_r6;
    s32 var_r1;
    s32 var_r1_2;

    temp_r5 = arg0 + 0x45A4 + (arg1 * 8);
    if ((M2C_FIELD(temp_r5, u8 *, 4) != 0) && (func_020b289c(temp_r5) == 0)) {
        if (M2C_FIELD(temp_r5, u8 *, 6) == 0) {
            var_r1 = 1;
        } else {
            var_r1 = 0;
        }
        temp_r6 = func_0207bb5c(arg1, var_r1);
        if (M2C_FIELD(temp_r5, u8 *, 6) == 0) {
            var_r1_2 = 1;
        } else {
            var_r1_2 = 0;
        }
        func_0212df34((s32) M2C_FIELD(temp_r5, s16 *, 0), (s32) M2C_FIELD(temp_r5, s8 *, 2), temp_r6,
                      (u32) func_0207bb80(arg1, var_r1_2), 0U);
        return 1;
    }
    return 0;
}
