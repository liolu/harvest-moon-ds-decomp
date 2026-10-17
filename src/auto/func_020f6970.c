#include "m2c.h"

M2C_UNK func_02141720(s32, void *, s32);            /* extern */

void func_020f6970(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_r7;
    s32 var_r8;
    void *var_r9;

    var_r7 = arg1;
    if ((s32) M2C_FIELD(arg0, s32 *, 4) < 0xA) {
        var_r9 = arg0 + 0x16B0;
        var_r8 = 0;
        do {
            func_02141720(var_r7, var_r9 + (arg3 * 2), arg4);
            var_r8 += 1;
            var_r7 += arg2;
            var_r9 = (void *) ((s8 *) var_r9 + 0x3C0);
        } while (var_r8 < 4);
        return;
    }
    func_02141720(var_r7 + arg2, arg0 + 0x16B0 + (arg3 * 2), arg4);
}
