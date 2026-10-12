#include "m2c.h"

M2C_UNK func_020c8b40(s32);                         /* extern */

void func_02025060(void *arg0) {
    func_020c8b40(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
