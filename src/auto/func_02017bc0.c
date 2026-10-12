#include "m2c.h"

M2C_UNK func_02016e7c(void *, s32, s32);            /* extern */

void func_02017bc0(void *arg0) {
    func_02016e7c(arg0 + 0x30, (s32) M2C_FIELD(arg0, s32 *, 4) >> 8, M2C_FIELD(arg0, s32 *, 0x40));
}
