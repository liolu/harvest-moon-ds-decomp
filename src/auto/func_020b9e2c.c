#include "m2c.h"

s32 func_020ab6c0();                                /* extern */
extern s32 data_021c8c5c;

u16 func_020b9e2c(void) {
    s32 temp_r0;

    temp_r0 = func_020ab6c0();
    if (temp_r0 == -1) {
        return 0xFFFFU;
    }
    return M2C_FIELD((((temp_r0 - 1) * 0x28) + data_021c8c5c), u16 *, 0x5242);
}
