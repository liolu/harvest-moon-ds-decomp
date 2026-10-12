#include "m2c.h"

M2C_UNK func_0212ea20(s32, u16, M2C_UNK);           /* extern */
M2C_UNK func_0212ed34(s32, s32);                    /* extern */

void func_02017930(s32 arg0, void *arg1) {
    func_0212ed34(arg1 + 4, arg0 + 0x14);
    func_0212ea20(arg0 + 0x14, M2C_FIELD(arg1, u16 *, 0x806), 0);
}
