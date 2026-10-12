#include "m2c.h"

s32 func_020c79bc(s32, M2C_UNK);                    /* extern */
M2C_UNK func_020c826c();                            /* extern */
s32 func_020c8b1c(M2C_UNK);                         /* extern */
extern M2C_UNK data_02192e90;

void *func_020c7aa4(void *arg0, M2C_UNK arg1) {
    s32 var_r0;

    func_020c826c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02192e90;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    var_r0 = func_020c8b1c(0x34);
    if (var_r0 != 0) {
        var_r0 = func_020c79bc(var_r0, arg1);
    }
    M2C_FIELD(arg0, s32 *, 4) = var_r0;
    return arg0;
}
