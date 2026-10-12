#include "m2c.h"

s32 func_02025864();                                /* extern */
M2C_UNK func_0202d5f0(s32, M2C_UNK);                /* extern */
s32 func_020c7660(M2C_UNK);                         /* extern */
M2C_UNK func_020ca11c(M2C_UNK, M2C_UNK);            /* extern */

s32 func_020386ac(void *arg0) {
    s32 var_r5;
    void *var_r1;

    if (func_02025864() != 0) {
        return 1;
    }
    if (func_020c7660(0) != 0) {
        return 0;
    }
    func_0202d5f0(arg0 + 0x2588, 1);
    var_r1 = arg0;
    var_r5 = 0;
loop_5:
    if (M2C_FIELD(var_r1, s32 *, 0x2C0C) == 1) {
        func_020ca11c(0x6D, 2);
        M2C_FIELD(arg0, s32 *, 0x2584) = (s32) M2C_FIELD((arg0 + (var_r5 * 4)), s32 *, 0x2B94);
        return 1;
    }
    var_r5 += 1;
    var_r1 += 0x2C;
    if (var_r5 >= 0x12) {
        return 0;
    }
    goto loop_5;
}
