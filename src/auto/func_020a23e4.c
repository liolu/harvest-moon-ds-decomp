#include "m2c.h"

M2C_UNK func_020a236c(M2C_UNK);                     /* extern */
M2C_UNK func_020a2490(M2C_UNK);                     /* extern */
M2C_UNK func_020a297c(M2C_UNK);                     /* extern */
M2C_UNK func_020ab32c(M2C_UNK, M2C_UNK);            /* extern */
s32 func_021479bc();                                /* extern */
s32 func_02147a24();                                /* extern */
s32 func_02147a6c();                                /* extern */
s32 func_02147b00();                                /* extern */
s32 func_02147eec();                                /* extern */
M2C_UNK func_02147efc(M2C_UNK);                     /* extern */

void func_020a23e4(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;

    if ((func_02147b00() != 0) && (func_021479bc() != 0) && (func_02147a6c() == 0x3945)) {
        temp_r0 = func_02147a24();
        if (temp_r0 != 0x45474642) {
            if (temp_r0 == 0x454E3441) {
                func_02147efc(1);
                func_020a2490(arg0);
            }
        } else {
            func_02147efc(1);
            func_020a297c(arg0);
        }
        func_020ab32c(0x64, 1);
    }
    if (func_02147eec() != 0) {
        func_02147efc(0);
    }
    func_020a236c(arg1);
}
