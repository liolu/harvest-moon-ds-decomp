#include "m2c.h"

s32 func_020d0bdc();                                /* extern */

s32 func_020d1620(void) {
    s32 temp_r0;
    s32 var_r1;

    temp_r0 = func_020d0bdc();
    var_r1 = -1;
    if (temp_r0 != -1) {
        var_r1 = temp_r0 + 0x37;
    }
    return var_r1;
}
