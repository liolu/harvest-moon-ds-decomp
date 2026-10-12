#include "m2c.h"

M2C_UNK func_020aae40(s32);                         /* extern */

void func_0204b714(s32 arg0, s32 arg1) {
    s32 var_r0;

    var_r0 = arg1 + 0x3B;
    if (var_r0 == 0x48) {
        var_r0 = 0x9D;
    } else if (var_r0 > 0x48) {
        var_r0 -= 1;
    }
    func_020aae40(var_r0);
}
