#include "m2c.h"

M2C_UNK func_0212d7e8(M2C_UNK *, M2C_UNK, M2C_UNK, void *, s32); /* extern */
extern M2C_UNK data_022c4ccc;

void func_020fb03c(void *arg0) {
    s32 var_r6;
    void *var_r7;

    var_r6 = 0;
    if ((s32) M2C_FIELD(arg0, u8 *, 0x2D2) <= 0) {
        return;
    }
    var_r7 = arg0;
    do {
        func_0212d7e8(&data_022c4ccc, 0, 0, var_r7, 0);
        var_r6 += 1;
        var_r7 += 0x2C;
    } while (var_r6 < (s32) M2C_FIELD(arg0, u8 *, 0x2D2));
}
