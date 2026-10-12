#include "m2c.h"

s32 func_020c8b28(s32);                             /* extern */
M2C_UNK func_020c8b40(s32);                         /* extern */
s32 func_0212f598(s32, M2C_UNK, s32);               /* extern */
M2C_UNK func_02140988(s32, s32);                    /* extern */
M2C_UNK func_02141720(s32, s32, s32);               /* extern */

void func_0212d65c(s32 arg0, void *arg1, M2C_UNK arg2) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r0 = func_020c8b28(M2C_FIELD(arg1, u8 *, 4) << 0xA);
    temp_r5 = func_0212f598(M2C_FIELD(arg1, s32 *, 8), arg2, temp_r0);
    func_020c8b40(M2C_FIELD(arg1, s32 *, 8));
    M2C_FIELD(arg1, s32 *, 8) = func_020c8b28(temp_r5);
    func_02141720(temp_r0, M2C_FIELD(arg1, s32 *, 8), temp_r5);
    func_02140988(M2C_FIELD(arg1, s32 *, 8), temp_r5);
    M2C_FIELD(arg1, u8 *, 4) = (u8) ((u32) (temp_r5 + 0x3FF) >> 0xA);
    func_020c8b40(temp_r0);
}
