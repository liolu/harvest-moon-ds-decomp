#include "m2c.h"

M2C_UNK func_0212d7e8(M2C_UNK *, M2C_UNK, M2C_UNK, void *, s32); /* extern */
extern M2C_UNK data_022c4ccc;

void func_020caf0c(s32 arg0, void *arg1) {
    s32 temp_r4;
    s32 var_r5;
    void *var_r6;

    var_r5 = 0;
    temp_r4 = M2C_FIELD(arg1, s32 *, 4);
    var_r6 = arg0 + 8;
    do {
        if ((M2C_FIELD(var_r6, u16 *, 0x2C) != 0x19) && (M2C_FIELD(var_r6, u16 *, 0x2E) == temp_r4)) {
            func_0212d7e8(&data_022c4ccc, 3, 0, var_r6, 0);
        }
        var_r5 += 1;
        var_r6 += 0x30;
    } while (var_r5 < 0x20);
}
