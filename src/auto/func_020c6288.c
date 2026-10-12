#include "m2c.h"

extern void *data_021c8c5c;

s32 func_020c6288(void) {
    if ((u32) M2C_FIELD(data_021c8c5c, s16 *, 8) <= 2U) {
        return 1;
    }
    return 0;
}
