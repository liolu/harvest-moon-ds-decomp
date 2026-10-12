#include "m2c.h"

s32 func_020e2d10(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x150), s8 *, 0xC) != -1) {
        return 1;
    }
    return 0;
}
