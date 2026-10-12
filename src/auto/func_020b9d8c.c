#include "m2c.h"

s32 func_020ab6c0();                                /* extern */
extern s32 data_021c8c5c;

u32 func_020b9d8c(void) {
    s32 temp_r0;
    u32 var_r1;

    temp_r0 = func_020ab6c0();
    var_r1 = -1U;
    if (temp_r0 != -1) {
        var_r1 = (u32) (M2C_FIELD((((temp_r0 - 1) * 0x28) + data_021c8c5c), u16 *, 0x523E) << 0x19) >> 0x1A;
    }
    return var_r1;
}
