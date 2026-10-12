#include "m2c.h"

M2C_UNK func_02143044(void *, s32);                 /* extern */
s32 func_021430a0(void *, s32);                     /* extern */
s32 func_02143c3c(s32);                             /* extern */
M2C_UNK func_02143e50();                            /* extern */

s32 func_02143ee4(void *arg0) {
    func_02143044(arg0, func_021430a0(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_02143c3c(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_02143e50();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
