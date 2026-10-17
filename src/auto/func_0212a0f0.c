#include "m2c.h"

extern void *data_021c8c5c;

void func_0212a0f0(s16 *arg0, s32 arg1) {
    s16 *var_r0;
    s16 var_r2;
    s32 var_r1;

    var_r0 = arg0;
    var_r1 = arg1;
    if (var_r1 == 0) {
        return;
    }
    do {
        if (M2C_FIELD(data_021c8c5c, u8 *, 0x8E5C) != 0) {
            var_r2 = 0x4F;
        } else {
            var_r2 = 0x3C;
        }
        *var_r0 = var_r2;
        var_r0  = (s16 *) ((s8 *) var_r0 + 2);
        var_r1 -= 1;
    } while (var_r1 != 0);
}
