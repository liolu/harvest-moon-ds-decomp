#include "m2c.h"

M2C_UNK func_020013bc(void *, M2C_UNK);             /* extern */
s32 func_02001428();                                /* extern */

s32 func_02001394(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, s32 *, 8) = func_02001428();
    func_020013bc(arg0, arg1);
    return M2C_FIELD(arg0, s32 *, 8);
}
