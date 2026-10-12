#include "m2c.h"

extern s32 data_021c8c5c;

s32 func_0211f57c(void) {
    s32 var_r1;
    s32 var_r2;
    s32 var_r3;
    u8 temp_r0;

    var_r1 = 0;
    var_r2 = 0;
    var_r3 = 0x41;
    do {
        temp_r0 = M2C_FIELD((data_021c8c5c + 0x6170 + ((var_r3 - 0x41) * 8)), u8 *, 1);
        var_r3 += 1;
        if (temp_r0 == 2) {
            var_r1 += 1;
        }
        if (temp_r0 == 1) {
            var_r2 += 1;
        }
    } while (var_r3 < 0x48);
    if ((var_r1 > 0) && (var_r2 > 0)) {
        return 1;
    }
    return 0;
}
