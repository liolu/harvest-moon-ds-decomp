#include "m2c.h"

extern u8 data_0215c0a4;

s32 func_020bf2fc(s32 arg0) {
    s32 var_r2;
    u8 *var_r3;

    var_r3 = &data_0215c0a4;
    var_r2 = 0;
loop_1:
    if (*var_r3 == arg0) {
        return var_r2;
    }
    var_r2 += 1;
    var_r3 += 1;
    if (var_r2 >= 0xA) {
        return 0xB;
    }
    goto loop_1;
}
