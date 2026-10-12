#include "m2c.h"

M2C_UNK func_0212e9f4(void *, M2C_UNK);             /* extern */
M2C_UNK func_0212ea20(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0212eaa0(void *, M2C_UNK);             /* extern */

void func_0212ed6c(M2C_UNK arg0, M2C_UNK arg1, void *arg2) {
    func_0212e9f4(arg2, arg0);
    M2C_FIELD(arg2, s8 *, 0xD) = 1;
    func_0212eaa0(arg2, arg1);
    func_0212ea20(arg2, 0, 0);
    M2C_FIELD(arg2, s8 *, 0xC) = 0;
}
