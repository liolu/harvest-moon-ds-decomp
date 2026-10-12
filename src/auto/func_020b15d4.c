#include "m2c.h"

extern s32 data_021c8c5c;

s32 func_020b15d4(s32 arg0) {
    s32 var_r3;
    void *temp_r2;

    var_r3 = 0x41;
loop_1:
    temp_r2 = data_021c8c5c + 0x6170 + ((var_r3 - 0x41) * 8);
    if ((M2C_FIELD(temp_r2, u8 *, 1) == 1) && (M2C_FIELD(temp_r2, s16 *, 6) == arg0)) {
        return var_r3;
    }
    var_r3 += 1;
    if (var_r3 >= 0x48) {
        return -1;
    }
    goto loop_1;
}
