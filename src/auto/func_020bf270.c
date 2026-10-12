#include "m2c.h"

s32 func_020bf214();                                /* extern */

s32 func_020bf270(s32 arg0) {
    if (arg0 >= 0xA) {
        return 0;
    }
    return func_020bf214();
}
