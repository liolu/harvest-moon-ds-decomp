#include "m2c.h"

void *func_0212d450(M2C_UNK, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_0212d65c(M2C_UNK, void *, M2C_UNK);    /* extern */

s32 func_0212d628(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void *temp_r0;

    temp_r0 = func_0212d450(arg0, 2, arg1);
    func_0212d65c(arg0, temp_r0, arg2);
    return M2C_FIELD(temp_r0, s32 *, 8);
}
