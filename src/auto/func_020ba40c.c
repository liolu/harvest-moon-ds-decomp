#include "m2c.h"

extern void *data_021c8c5c;

s32 func_020ba40c(void) {
    if (M2C_FIELD(data_021c8c5c, s16 *, 0x5E70) == 4) {
        return 1;
    }
    return 0;
}
