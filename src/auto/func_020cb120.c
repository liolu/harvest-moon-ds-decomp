#include "m2c.h"

M2C_UNK func_0212f0f4(u16, M2C_UNK);                /* extern */

void func_020cb120(void *arg0, void *arg1) {
    s32 temp_r5;
    s32 var_r6;
    u16 temp_r0;
    void *var_r7;

    M2C_FIELD(arg0, void **, 4) = arg1;
    var_r6                      = 0;
    temp_r5                     = M2C_FIELD(arg1, s32 *, 4);
    var_r7                      = arg0 + 8;
    do {
        temp_r0 = M2C_FIELD(var_r7, u16 *, 0x2C);
        if ((temp_r0 != 0x19) && (M2C_FIELD(var_r7, u16 *, 0x2E) == temp_r5)) {
            func_0212f0f4(temp_r0, 0);
        }
        var_r6 += 1;
        var_r7 += 0x30;
    } while (var_r6 < 0x20);
}
