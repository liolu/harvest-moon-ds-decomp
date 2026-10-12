#include "m2c.h"

extern s32 data_021c8c5c;

s32 func_020b0ba4(s32 *arg0) {
    s32 var_r2;

    var_r2 = 0x41;
loop_1:
    if (M2C_FIELD((data_021c8c5c + 0x6170 + ((var_r2 - 0x41) * 8)), u8 *, 1) == 0xFF) {
        *arg0 = var_r2;
        return 1;
    }
    var_r2 += 1;
    if (var_r2 >= 0x48) {
        *arg0 = -1;
        return 0;
    }
    goto loop_1;
}
