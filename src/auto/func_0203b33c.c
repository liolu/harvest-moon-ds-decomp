#include "m2c.h"

M2C_UNK func_020301bc(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_020a32d0();                                /* extern */
extern M2C_UNK data_02185a04;

void *func_0203b33c(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_r2;

    func_020301bc(arg0, arg1, arg2, 1, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02185a04;
    if (func_020a32d0() == 0) {
        var_r2 = 0x2710;
    } else {
        var_r2 = 0x186A0;
    }
    M2C_FIELD(arg0, s32 *, 0xBAA4) = var_r2;
    return arg0;
}
