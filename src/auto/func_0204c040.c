#include "m2c.h"

s32 func_020aae40(M2C_UNK);                         /* extern */
s32 func_020c5828(M2C_UNK);                         /* extern */
M2C_UNK func_020c5844(M2C_UNK, u8);                 /* extern */

void func_0204c040(void) {
    s32 var_r0;

    if (func_020aae40(0xB0) == 0) {
        return;
    }
    var_r0 = func_020c5828(5) + 1;
    if (var_r0 >= 0x78) {
        var_r0 = 0;
    }
    func_020c5844(5, (u8) var_r0);
}
