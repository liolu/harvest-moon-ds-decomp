#include "m2c.h"

s32 func_020aaca8();                                /* extern */
M2C_UNK func_020ab32c(M2C_UNK, s32);                /* extern */
s32 func_020c9f74(M2C_UNK);                         /* extern */

void func_020aae1c(void) {
    s32 temp_r4;

    temp_r4 = func_020aaca8();
    func_020ab32c(0x86, temp_r4 + func_020c9f74(8));
}
