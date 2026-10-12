#include "m2c.h"

M2C_UNK func_0202fe04(void *, M2C_UNK);             /* extern */
M2C_UNK func_0202fe64(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_0204034c(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xBAC8) = 1;
    M2C_FIELD(arg0, s8 *, 0xBAF8) = 1;
    M2C_FIELD(arg0, s8 *, 0xBB28) = 1;
    M2C_FIELD(arg0, s8 *, 0xBB58) = 1;
    func_0202fe04(arg0, 0xF);
    func_0202fe64(arg0, 1, 5);
    func_0202fe64(arg0, 0, 0x1C);
}
