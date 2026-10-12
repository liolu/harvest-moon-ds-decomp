#include "m2c.h"

M2C_UNK func_0212d7e8(M2C_UNK *, M2C_UNK, u32, void *, s32); /* extern */
extern M2C_UNK data_022c4ccc;

void func_02118910(void *arg0) {
    s32 var_r7;
    void *var_r8;

    var_r7 = 0;
    var_r8 = arg0;
    do {
        func_0212d7e8(&data_022c4ccc, 3, (u32) (M2C_FIELD(var_r8, s32 *, 4) << 8) >> 0x10, var_r8, 0);
        var_r7 += 1;
        var_r8 += 0x2C;
    } while (var_r7 < 0x10);
}
