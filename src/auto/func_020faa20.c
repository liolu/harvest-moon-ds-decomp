#include "m2c.h"

s32 func_020c5d38();                                /* extern */
M2C_UNK func_020fac6c(void *, s32, s32, s32);       /* extern */

void func_020faa20(void *arg0) {
    s32 temp_r0;

    if ((s32) M2C_FIELD(arg0, s32 *, 4) >= 0xA) {
        return;
    }
    temp_r0 = func_020c5d38();
    if (temp_r0 == 0) {
        return;
    }
    func_020fac6c(arg0 + 0x118, M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC), temp_r0);
    M2C_FIELD(arg0, s8 *, 0x114) = 1;
}
