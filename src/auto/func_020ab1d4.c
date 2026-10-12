#include "m2c.h"

s32 func_020ab0ac();                         /* extern */
M2C_UNK func_020ab1a0();           /* extern */
M2C_UNK func_020ab32c();                /* extern */

s32 func_020ab1d4(M2C_UNK arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0_2 = func_020ab0ac();
    func_020ab32c(arg0, temp_r0_2 + arg1);
    temp_r0 = func_020ab0ac(arg0);
    func_020ab1a0(arg0, temp_r0_2, temp_r0);
    return temp_r0;
}
