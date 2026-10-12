#include "m2c.h"

M2C_UNK func_020f36fc(void *, s32);                 /* extern */
M2C_UNK func_020f3728(void *, s32);                 /* extern */

void func_02114c24(void *arg0) {
    func_020f36fc(arg0, M2C_FIELD(arg0, s32 *, 0x10));
    func_020f3728(arg0, M2C_FIELD(arg0, s32 *, 0x14));
}
