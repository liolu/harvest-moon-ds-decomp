#include "m2c.h"

s32 func_020ca7b0(s32, M2C_UNK);                    /* extern */

s32 func_020c7be8(s32 arg0, s32 arg1) {
    if (arg1 == -1) {
        return 0;
    }
    return func_020ca7b0(arg0 + 4, 2) + (arg1 * 0x10);
}
