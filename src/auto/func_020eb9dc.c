#include "m2c.h"

extern s32 data_021c8c5c;

s32 func_020eb9dc(void) {
    s16 var_r1;

    var_r1 = 0xB3;
loop_1:
    if (M2C_FIELD((data_021c8c5c + 0x61A8 + ((var_r1 - 0xB3) * 4)), s8 *, 1) == 1) {
        return 0;
    }
    var_r1 += 1;
    if ((s32) var_r1 > 0xC2) {
        return 1;
    }
    goto loop_1;
}
