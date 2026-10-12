#include "m2c.h"

M2C_UNK func_02141270();                            /* extern */
s32 func_021479e4();                                /* extern */
s32 func_02147eec();                                /* extern */

void func_02147f0c(void) {
    if (func_021479e4() != 0) {
        return;
    }
    if (func_02147eec() != 0) {
        return;
    }
    func_02141270();
}
