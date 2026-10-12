#include "m2c.h"

M2C_UNK func_020c40dc(s32, M2C_UNK);                /* extern */
s32 func_020c4198();                                /* extern */

void func_020c4540(s32 arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0 = func_020c4198();
    if (temp_r0 == -1) {
        return;
    }
    func_020c40dc(temp_r0, arg1);
}
