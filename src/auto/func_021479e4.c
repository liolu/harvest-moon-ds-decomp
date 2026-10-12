#include "m2c.h"

s32 func_02147a0c();                                /* extern */
s32 func_02147b00();                                /* extern */

s32 func_021479e4(void) {
    if ((func_02147b00() != 0) && (func_02147a0c() == 0)) {
        return 1;
    }
    return 0;
}
