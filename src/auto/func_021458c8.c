#include "m2c.h"

M2C_UNK func_02145508();                            /* extern */
s32 func_02145874(M2C_UNK, M2C_UNK *, s32 *);       /* extern */
extern M2C_UNK func_02145520;

s32 func_021458c8(M2C_UNK arg0) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_02145874(arg0, &func_02145520, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02145508();
    return sp0;
}
