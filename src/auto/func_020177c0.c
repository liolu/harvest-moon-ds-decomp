#include "m2c.h"

M2C_UNK func_02017770(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_020177b0();                            /* extern */

void func_020177c0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x28) & 2) {
        func_02017770(arg0, 1, 0);
        return;
    }
    func_020177b0();
}
