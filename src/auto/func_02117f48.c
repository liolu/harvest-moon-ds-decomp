#include "m2c.h"

extern void *data_021c8c5c;

s32 func_02117f48(void) {
    if ((u32) M2C_FIELD(data_021c8c5c, u32 *, 0xFBC) < 0x1EU) {
        return 1;
    }
    return 0;
}
