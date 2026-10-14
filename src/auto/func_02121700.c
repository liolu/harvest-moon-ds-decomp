#include "m2c.h"

M2C_UNK func_02017a98(s32, M2C_UNK);                /* extern */
s32 func_02121780(s32);                             /* extern */
M2C_UNK func_02121794(s32, s32);                    /* extern */
M2C_UNK func_0212f260(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */

void func_02121700(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5) {
    s32 temp_r4;

    temp_r4 = (arg1 * 0x18) + (arg0 + 0x3800);
    if (func_02121780(temp_r4) != 0) {
        func_02121794(arg0, arg1);
    }
    func_0212f260(arg2, arg3, temp_r4, 1);
    M2C_FIELD(temp_r4, s32 *, 0)  = (s32) (arg4 << 8);
    M2C_FIELD(temp_r4, s32 *, 4)  = (s32) (arg5 << 8);
    M2C_FIELD(temp_r4, s8 *, 0xC) = 2;
    func_02017a98(temp_r4, 1);
}
