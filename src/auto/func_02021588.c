#include "m2c.h"

s32 func_020213f0();                                /* extern */

s32 func_02021588(void *arg0) {
    s32 var_r0;

    if (func_020213f0() == 2) {
        if (M2C_FIELD(arg0, s32 *, 0x1CF0) != 5) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    return 0;
}
