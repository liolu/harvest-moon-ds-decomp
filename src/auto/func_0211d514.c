#include "m2c.h"

s32 func_02121114(s32, M2C_UNK);                    /* extern */
M2C_UNK func_0212ed14(M2C_UNK, M2C_UNK);            /* extern */

void func_0211d514(void *arg0, M2C_UNK arg1) {
    func_0212ed14(arg1, 1);
    if (func_02121114(M2C_FIELD(arg0, s32 *, 0x1E0), 0) == 0) {
        return;
    }
    func_0212ed14(arg1, 0);
}
