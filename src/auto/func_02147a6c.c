#include "m2c.h"

s32 func_02147a90();                                /* extern */
s32 func_02147b00();                                /* extern */

s32 func_02147a6c(void) {
    s32 var_r4;

    var_r4 = 0;
    if (func_02147b00() != 0) {
        var_r4 = func_02147a90();
    }
    return var_r4;
}
