#include "m2c.h"

s32 func_020bf2fc();                                /* extern */

s32 func_020bfd18(void) {
    if (func_020bf2fc() != 0xB) {
        return 1;
    }
    return 0;
}
