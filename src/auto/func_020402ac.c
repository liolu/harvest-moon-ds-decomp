#include "m2c.h"

s32 func_020173e8();                                /* extern */
M2C_UNK func_02040608();                            /* extern */

s32 func_020402ac(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 4) == 0x14) {
        func_02040608(arg0, arg1);
        return 0;
    }
    return func_020173e8(arg0, arg1);
}
