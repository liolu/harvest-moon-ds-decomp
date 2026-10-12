#include "m2c.h"

void *func_020f3610();                              /* extern */
void *func_02121370();                  /* extern */

s32 func_02112964(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r1;
    s32 temp_r5;
    s32 var_r1;
    void *temp_r0;

    temp_r0 = func_02121370(M2C_FIELD(arg0, s32 *, 0x1E0));
    if (M2C_FIELD(temp_r0, u8 *, 0xA) != 0) {
        var_r1 = M2C_FIELD(temp_r0, s32 *, 0xC);
    } else {
        var_r1 = (s32) M2C_FIELD(func_020f3610(), s8 *, 4);
    }
    if (arg4 != var_r1) {
        return 0;
    }
    temp_r5 = arg2 - ((s32) M2C_FIELD(func_02121370(M2C_FIELD(arg0, s32 *, 0x1E0), arg1), s32 *, 0x10) >> 0xC);
    temp_r1 = arg3 - ((s32) M2C_FIELD(func_02121370(M2C_FIELD(arg0, s32 *, 0x1E0), arg1), s32 *, 0x14) >> 0xC);
    if ((temp_r5 <= 1) && (temp_r5 >= -1) && (temp_r1 <= 1) && (temp_r1 >= -1)) {
        return 1;
    }
    return 0;
}
