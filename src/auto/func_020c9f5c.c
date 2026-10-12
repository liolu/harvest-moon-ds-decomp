#include "m2c.h"

s32 func_020c9f18();                                /* extern */

s32 func_020c9f5c(void) {
    s32 temp_r4;

    temp_r4 = func_020c9f18();
    return func_020c9f18() | (temp_r4 << 0x10);
}
