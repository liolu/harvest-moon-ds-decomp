#include "m2c.h"

M2C_UNK func_0201ed5c(M2C_UNK *);                   /* extern */
s32 func_0201edfc(M2C_UNK *, M2C_UNK, s32);         /* extern */
M2C_UNK func_020c2868(M2C_UNK *);                   /* extern */
s32 func_020c3ea8(M2C_UNK *, M2C_UNK, s32);         /* extern */

s32 func_020c3338(M2C_UNK arg0, s32 arg1) {
    u8 sp0[12];
    s32 var_r4;

    func_020c2868(sp0);
    if (arg1 < 0) {
        var_r4 = arg1 + func_020c3ea8(sp0, arg0, 0 - arg1);
    } else {
        var_r4 = arg1 - func_0201edfc(sp0, arg0, arg1);
    }
    func_0201ed5c(sp0);
    return var_r4;
}
