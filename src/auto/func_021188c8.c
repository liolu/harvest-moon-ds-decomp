#include "m2c.h"

M2C_UNK func_0212eb34(void *);                      /* extern */

void func_021188c8(void *arg0) {
    s32 var_r4;
    void *var_r5;

    var_r5 = arg0;
    var_r4 = 0;
    do {
        if (M2C_FIELD(var_r5, u8 *, 0xE) & 1) {
            func_0212eb34(var_r5 + 0x10);
            if (M2C_FIELD(var_r5, u8 *, 0x27) == 0) {
                M2C_FIELD(var_r5, u8 *, 0xE) = (u8) (M2C_FIELD(var_r5, u8 *, 0xE) & ~1);
            }
        }
        var_r4 += 1;
        var_r5 += 0x2C;
    } while (var_r4 < 0x10);
}
