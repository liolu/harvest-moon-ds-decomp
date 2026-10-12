#include "m2c.h"

extern void *data_021c8c5c;

s32 func_020b9fc0(void) {
    u16 temp_r0;

    temp_r0 = M2C_FIELD(data_021c8c5c, u16 *, 0x5240);
    if ((u32) temp_r0 < 0xF0U) {
        return 0;
    }
    if ((u32) temp_r0 < 0x1E0U) {
        return 1;
    }
    return 2;
}
