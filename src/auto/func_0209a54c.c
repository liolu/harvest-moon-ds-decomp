#include "m2c.h"

M2C_UNK func_020a1844(s32);                         /* extern */
M2C_UNK func_020a1aa4(s32);                         /* extern */
M2C_UNK func_020a1d20(s32);                         /* extern */
M2C_UNK func_020c8b34(s32);                         /* extern */
extern M2C_UNK data_02190e2c;

void *func_0209a54c(void *arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02190e2c;
    temp_r5 = M2C_FIELD(arg0, s32 *, 0xD538);
    if (temp_r5 != 0) {
        func_020a1d20(temp_r5);
        func_020c8b34(temp_r5);
    }
    temp_r5_2 = M2C_FIELD(arg0, s32 *, 0xD534);
    if (temp_r5_2 != 0) {
        func_020a1aa4(temp_r5_2);
        func_020c8b34(temp_r5_2);
    }
    temp_r5_3 = M2C_FIELD(arg0, s32 *, 0xD530);
    if (temp_r5_3 != 0) {
        func_020a1844(temp_r5_3);
        func_020c8b34(temp_r5_3);
    }
    return arg0;
}
