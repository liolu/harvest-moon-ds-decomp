#include "m2c.h"

M2C_UNK func_021416cc(s32, s32, s32);               /* extern */

void func_02006868(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 var_r4;
    s32 var_r5;

    var_r4 = (arg1 * 2) + (arg2 << 6) + 0x06202000;
    var_r5 = 0;
    if (arg4 <= 0) {
        return;
    }
    do {
        func_021416cc(arg5, var_r4, arg3 * 2);
        var_r5 += 1;
        var_r4 += 0x40;
    } while (var_r5 < arg4);
}
