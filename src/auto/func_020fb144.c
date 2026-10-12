#include "m2c.h"

M2C_UNK func_020fb250();                            /* extern */

void func_020fb144(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x2C) == 0) {
        return;
    }
    func_020fb250(arg0);
}
