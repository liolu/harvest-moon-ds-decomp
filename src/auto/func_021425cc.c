#include "m2c.h"

s32 func_02142554();                                /* extern */
s32 func_02142590();                                /* extern */

s32 func_021425cc(void) {
    s32 temp_r4;

    temp_r4 = func_02142554();
    return (0x100 - temp_r4) - func_02142590();
}
