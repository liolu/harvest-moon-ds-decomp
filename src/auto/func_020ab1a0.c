#include "m2c.h"

s32 func_020aaa54(M2C_UNK);                         /* extern */
M2C_UNK func_020aae1c();                            /* extern */

void func_020ab1a0(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r4;

    if (arg0 != 0xC0) {
        return;
    }
    temp_r4 = func_020aaa54(arg1);
    if (temp_r4 == func_020aaa54(arg2)) {
        return;
    }
    func_020aae1c();
}
