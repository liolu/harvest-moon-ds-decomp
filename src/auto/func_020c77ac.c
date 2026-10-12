#include "m2c.h"

s32 func_020c7704();                                /* extern */
M2C_UNK func_020c7724(s32);                         /* extern */
s32 func_0214477c(s32);                             /* extern */

s32 func_020c77ac(s32 arg0) {
    s32 var_r4;

    if (func_020c7704() == 0) {
        if (func_0214477c(arg0 + 4) != 0) {
            var_r4 = 1;
        } else {
            var_r4 = 0;
        }
        func_020c7724(arg0);
        return var_r4;
    }
    return 0;
}
