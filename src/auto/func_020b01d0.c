#include "m2c.h"

extern void *data_021c8c5c;

s32 func_020b01d0(void) {
    s32 var_r0;

    var_r0 = 0;
    if (((u32) (M2C_FIELD(data_021c8c5c, u16 *, 0x6210) << 0x1F) >> 0x1F) != 0) {
        var_r0 += 1;
    }
    if (((u32) (M2C_FIELD(data_021c8c5c, u16 *, 0x6214) << 0x1F) >> 0x1F) != 0) {
        var_r0 += 1;
    }
    if (((u32) (M2C_FIELD(data_021c8c5c, u16 *, 0x6218) << 0x1F) >> 0x1F) != 0) {
        var_r0 += 1;
    }
    return var_r0;
}
