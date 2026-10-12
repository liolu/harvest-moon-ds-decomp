#include "m2c.h"

s32 func_020cac34(void *arg0, u32 arg1) {
    if (arg1 < (u32) (M2C_FIELD(arg0, s32 *, 0xC) - 1)) {
        return 1;
    }
    return 0;
}
