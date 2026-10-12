#include "m2c.h"

M2C_UNK func_020c8b40(s32);                         /* extern */

void func_020fb600(void *arg0) {
    func_020c8b40(M2C_FIELD(arg0, s32 *, 0x2C));
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s8 *, 0x30) = 1;
}
