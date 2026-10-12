#include "m2c.h"

M2C_UNK func_0212ea20(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0212ed34(s32, s32);                    /* extern */

void func_02017904(s32 arg0, void *arg1, M2C_UNK arg2) {
    func_0212ed34(M2C_FIELD(arg1, s32 *, 4), arg0 + 0x14);
    func_0212ea20(arg0 + 0x14, arg2, 0);
}
