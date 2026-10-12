/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0213a1b0(M2C_UNK, s32);                /* extern */
s32 func_0213a1cc();                                /* extern */
s32 func_0213a608();                                /* extern */
s32 func_0213b33c(M2C_UNK, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK func_0213af00;

s32 func_0213b14c(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 var_r2;
    s32 var_r4;

    var_r4 = func_0213a1cc();
    if (var_r4 == 0) {
        if (arg2 == 0) {
            var_r2 = 0;
        } else {
            var_r2 = func_0213a608();
        }
        var_r4 = func_0213b33c(arg0, &func_0213af00, var_r2, arg0, arg1);
        if ((arg2 != 0) && (var_r4 != 0)) {
            func_0213a1b0(arg0, var_r4);
        }
    }
    return var_r4;
}
