#include "engine.h"
#include "m2c.h"

M2C_UNK func_020b02b8(M2C_UNK);
void func_020b02d4(M2C_UNK, M2C_UNK);
M2C_UNK func_020b032c(M2C_UNK, M2C_UNK);
M2C_UNK func_020c3200(M2C_UNK);

extern s32 data_021c8c5c;

s32 func_020c325c(s32 arg0, s32 arg1) {
    s16 temp_r0;
    s32 temp_r6;
    s32 var_r4;

    var_r4 = arg1;
    if (((u32) (M2C_FIELD((data_021c8c5c + ((func_020c3200(arg0) - 3) * 4)), u16 *, 0x61EC) << 0x1F) >> 0x1F) != 0) {
        temp_r6 = func_020b02b8(arg0);
        if (var_r4 < 0) {
            if ((s32) (temp_r6 + var_r4) < 0) {
                func_020b032c(arg0, (s32) (s16) temp_r6);
                var_r4 += temp_r6;
            } else {
                func_020b032c(arg0, (s32) (s16) var_r4);
                var_r4 = 0;
            }
        } else if ((s32) (temp_r6 + var_r4) > 0x3E7) {
            temp_r0 = 0x3E7 - temp_r6;
            func_020b02d4(arg0, (s32) temp_r0);
            var_r4 -= temp_r0;
        } else {
            func_020b02d4(arg0, (s32) (s16) var_r4);
            var_r4 = 0;
        }
    }
    return var_r4;
}
