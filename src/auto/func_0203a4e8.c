#include "m2c.h"

s32 func_020173e8();                                /* extern */
M2C_UNK func_0203a75c();                            /* extern */

s32 func_0203a4e8(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 4) == 0xE) {
        func_0203a75c(arg0, arg1);
        return 0;
    }
    return func_020173e8(arg0, arg1);
}
