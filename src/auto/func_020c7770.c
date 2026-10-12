#include "m2c.h"

s32 func_020c7704();                                /* extern */
M2C_UNK func_020c77ac(s32);                         /* extern */
s32 func_021446c4(s32, s32, s32);                   /* extern */

s32 func_020c7770(s32 arg0, void *arg1) {
    if (func_020c7704() == 0) {
        func_020c77ac(arg0);
    }
    if (func_021446c4(arg0 + 4, M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4)) != 0) {
        return 1;
    }
    return 0;
}
