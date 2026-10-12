#include "m2c.h"

M2C_UNK func_02145508();                            /* extern */
s32 func_021458f0(M2C_UNK, M2C_UNK, M2C_UNK *, s32 *); /* extern */
extern M2C_UNK func_02145520;

s32 func_0214596c(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_021458f0(arg0, arg1, &func_02145520, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02145508();
    return sp0;
}
