#include "m2c.h"

s32 func_020c78fc(s32, M2C_UNK);                    /* extern */
s32 func_020c7bcc(s32);                             /* extern */
s32 func_020c7c14(s32, s32);                        /* extern */
M2C_UNK func_020c7fd4(M2C_UNK, s32, M2C_UNK);       /* extern */
extern s32 data_021c8ccc;

s32 func_020c7f7c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = data_021c8ccc;
    temp_r0 = func_020c7c14(temp_r4, func_020c78fc(func_020c7bcc(temp_r4), arg1));
    if (temp_r0 == 0) {
        return 0;
    }
    func_020c7fd4(arg0, temp_r0, arg2);
    return 1;
}
