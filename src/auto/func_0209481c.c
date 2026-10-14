#include "m2c.h"

M2C_UNK func_020a1844(s32);                         /* extern */
M2C_UNK func_020a1aa4(s32);                         /* extern */
M2C_UNK func_020c8b34(s32);                         /* extern */
extern M2C_UNK data_02190d04;

void *func_0209481c(void *arg0) {
    s32 temp_r4;
    s32 temp_r4_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02190d04;
    temp_r4                        = M2C_FIELD(arg0, s32 *, 0x9500);
    if (temp_r4 != 0) {
        func_020a1aa4(temp_r4);
        func_020c8b34(temp_r4);
    }
    temp_r4_2 = M2C_FIELD(arg0, s32 *, 0x94FC);
    if (temp_r4_2 != 0) {
        func_020a1844(temp_r4_2);
        func_020c8b34(temp_r4_2);
    }
    return arg0;
}
