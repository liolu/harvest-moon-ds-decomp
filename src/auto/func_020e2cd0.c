#include "m2c.h"

M2C_UNK func_020ba278(s16);                         /* extern */

s16 func_020e2cd0(void *arg0) {
    s16 var_r4;
    s8 temp_r2;
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x150);
    temp_r2 = M2C_FIELD(temp_r3, s8 *, 3);
    var_r4 = (temp_r2 - 1) * M2C_FIELD(temp_r3, s16 *, 0x18);
    if (temp_r2 == 1) {
        var_r4 = 0;
    }
    M2C_FIELD(temp_r3, s8 *, 3) = 1;
    func_020ba278(var_r4);
    return var_r4;
}
