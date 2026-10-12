#include "m2c.h"

s32 func_02147a48();                                /* extern */
s32 func_02147b00();                                /* extern */

s32 func_02147a24(void) {
    s32 var_r4;

    var_r4 = 0;
    if (func_02147b00() != 0) {
        var_r4 = func_02147a48();
    }
    return var_r4;
}
