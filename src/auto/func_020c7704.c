#include "m2c.h"

s32 func_020c7704(void *arg0) {
    s32 var_r0;

    if (M2C_FIELD(arg0, s32 *, 0x10) & 0x10) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        return 1;
    }
    return 0;
}
