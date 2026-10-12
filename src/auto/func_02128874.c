#include "m2c.h"

void *func_020f3610();                              /* extern */
s32 func_02121114(M2C_UNK, M2C_UNK);                /* extern */
void *func_02121150(M2C_UNK, M2C_UNK);              /* extern */

s32 func_02128874(void *arg0, M2C_UNK arg1) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r4;
    void *temp_r0;
    void *temp_r0_2;

    if (M2C_FIELD(arg0, u8 *, 0xA) != 0) {
        var_r4 = M2C_FIELD(arg0, s32 *, 0xC);
    } else {
        var_r4 = (s32) M2C_FIELD(func_020f3610(), s8 *, 4);
    }
    temp_r0 = func_02121150(arg1, 1);
    if (temp_r0 != NULL) {
        var_r0 = M2C_FIELD(temp_r0, s32 *, 4);
    } else {
        var_r0 = -1;
    }
    if (var_r4 == var_r0) {
        return func_02121114(arg1, 1);
    }
    temp_r0_2 = func_02121150(arg1, 0);
    if (temp_r0_2 != NULL) {
        var_r0_2 = M2C_FIELD(temp_r0_2, s32 *, 4);
    } else {
        var_r0_2 = -1;
    }
    if (var_r4 != var_r0_2) {
        return 0;
    }
    return func_02121114(arg1, 0);
}
