#include "m2c.h"

M2C_UNK func_02025b70();                            /* extern */
M2C_UNK func_0212d7e8(M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_022c4ccc;

void func_0205267c(s32 arg0) {
    s32 var_r6;
    s32 var_r7;

    func_02025b70();
    var_r6 = 0;
    var_r7 = arg0 + 0x2594;
    do {
        func_0212d7e8(&data_022c4ccc, 0, 0, var_r7 + 4, 0);
        var_r6 += 1;
        var_r7 += 0x40;
    } while (var_r6 < 9);
}
