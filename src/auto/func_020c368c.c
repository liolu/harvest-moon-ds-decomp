#include "m2c.h"

s32 func_0201f028(M2C_UNK *, M2C_UNK, s32);         /* extern */
M2C_UNK func_02045354(M2C_UNK *);                   /* extern */
M2C_UNK func_020c2940(M2C_UNK *);                   /* extern */
s32 func_020c3f80(M2C_UNK *, M2C_UNK, s32);         /* extern */

s32 func_020c368c(M2C_UNK arg0, s32 arg1) {
    u8 sp0[8];
    s32 var_r4;

    func_020c2940(sp0);
    if (arg1 < 0) {
        var_r4 = arg1 + func_020c3f80(sp0, arg0, 0 - arg1);
    } else {
        var_r4 = arg1 - func_0201f028(sp0, arg0, arg1);
    }
    func_02045354(sp0);
    return var_r4;
}
