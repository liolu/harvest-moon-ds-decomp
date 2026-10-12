#include "m2c.h"

s32 func_020b289c(M2C_UNK);                         /* extern */
s32 func_020b2950(M2C_UNK);                         /* extern */
s32 func_020b2a54();                                /* extern */

s32 func_020b2dc8(M2C_UNK arg0) {
    s32 var_r0;

    if (func_020b2a54() != 0) {
        if (func_020b289c(arg0) != 0) {
            return 1;
        }
        if (func_020b2950(arg0) == 2) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    return 0;
}
