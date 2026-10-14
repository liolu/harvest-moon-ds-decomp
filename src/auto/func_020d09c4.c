#include "m2c.h"

M2C_UNK func_020d1a7c();                            /* extern */
void **func_020d34d8(M2C_UNK, s32);                 /* extern */

void func_020d09c4(M2C_UNK arg0, M2C_UNK arg1) {
    s32 var_r4;
    void **temp_r0;

    func_020d1a7c();
    var_r4 = 0;
    do {
        temp_r0 = func_020d34d8(arg0, var_r4);
        M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK), 8)(temp_r0, arg1);
        var_r4 += 1;
    } while (var_r4 < 0x1C);
}
