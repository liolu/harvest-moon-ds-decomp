#include "engine.h"
#include "m2c.h"

M2C_UNK func_02044ed4(M2C_UNK, M2C_UNK);
u16 func_02044ef8(s32, s32);
s32 func_020b289c(s16 *);
void func_0212df34(M2C_UNK, M2C_UNK, s32, u32, u8);

s32 func_020446c4(s32 arg0, s32 arg1) {
    s16 *temp_r5;
    s32 temp_r6;
    s32 var_r1;
    s32 var_r1_2;

    temp_r5 = arg0 + 0x26B0 + (arg1 * 8);
    if ((M2C_FIELD(temp_r5, u8 *, 4) != 0) && (func_020b289c(temp_r5) == 0)) {
        if (M2C_FIELD(temp_r5, u8 *, 6) == 0) {
            var_r1 = 1;
        } else {
            var_r1 = 0;
        }
        temp_r6 = func_02044ed4(arg1, var_r1);
        if (M2C_FIELD(temp_r5, u8 *, 6) == 0) {
            var_r1_2 = 1;
        } else {
            var_r1_2 = 0;
        }
        func_0212df34((s32) M2C_FIELD(temp_r5, s16 *, 0), (s32) M2C_FIELD(temp_r5, s8 *, 2), temp_r6,
                      (u32) func_02044ef8(arg1, var_r1_2), 0U);
        return 1;
    }
    return 0;
}
