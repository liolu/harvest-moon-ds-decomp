#include "m2c.h"

s32 func_020c4cc0();                                /* extern */

s32 func_020c28a8(void) {
    s32 temp_r0;

    temp_r0 = func_020c4cc0();
    switch (temp_r0) {                              /* irregular */
    case 0:
        return 0x12;
    case 1:
        return 0x24;
    default:
        return 0x36;
    }
}
