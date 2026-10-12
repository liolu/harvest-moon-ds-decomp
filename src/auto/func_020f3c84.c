#include "m2c.h"

M2C_UNK func_0212eac0(void *);                      /* extern */
M2C_UNK func_0212eb34(void *);                      /* extern */

void func_020f3c84(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
        return;
    }
    if ((M2C_FIELD(arg0, u8 *, 0x27) == 0) && (arg1 == 0)) {
        M2C_FIELD(arg0, s8 *, 0x24) = 0;
        func_0212eac0(arg0 + 0x10);
    }
    func_0212eb34(arg0 + 0x10);
}
