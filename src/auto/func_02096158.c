#include "m2c.h"

M2C_UNK func_020a1844(s32);                         /* extern */
M2C_UNK func_020a1aa4(s32);                         /* extern */
M2C_UNK func_020a20c0(s32);                         /* extern */
M2C_UNK func_020c8b34(s32);                         /* extern */
extern M2C_UNK data_02190ce8;

void *func_02096158(void *arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02190ce8;
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x7100);
    if (temp_r5 != 0) {
        func_020a20c0(temp_r5);
        func_020c8b34(temp_r5);
    }
    temp_r5_2 = M2C_FIELD(arg0, s32 *, 0x70FC);
    if (temp_r5_2 != 0) {
        func_020a1aa4(temp_r5_2);
        func_020c8b34(temp_r5_2);
    }
    temp_r5_3 = M2C_FIELD(arg0, s32 *, 0x70F8);
    if (temp_r5_3 != 0) {
        func_020a1844(temp_r5_3);
        func_020c8b34(temp_r5_3);
    }
    return arg0;
}
