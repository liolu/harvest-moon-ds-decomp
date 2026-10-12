#include "m2c.h"

extern void *data_021c8c5c;

s32 func_020aa9a0(void) {
    if (M2C_FIELD(data_021c8c5c, s16 *, 0x5A4A) == 0x1194) {
        return 1;
    }
    return 0;
}
