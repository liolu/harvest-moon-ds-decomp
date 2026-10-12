#include "m2c.h"

s32 func_020be408(u8, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern u8 data_0215c0a4;

s32 func_020be620(void) {
    M2C_UNK sp4;
    M2C_UNK sp0;
    s32 var_r7;
    u8 *var_r8;

    var_r7 = 0;
    var_r8 = &data_0215c0a4;
loop_1:
    if (func_020be408(*var_r8, &sp4, &sp0, 0) != 0) {
        return 1;
    }
    var_r7 += 1;
    var_r8 += 1;
    if (var_r7 >= 6) {
        return 0;
    }
    goto loop_1;
}
