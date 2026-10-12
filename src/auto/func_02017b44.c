#include "m2c.h"

M2C_UNK func_02016e7c(void *, s32, s32);            /* extern */

void func_02017b44(void *arg0) {
    func_02016e7c(arg0 + 0x1C, (s32) M2C_FIELD(arg0, s32 *, 4) >> 8, (s32) M2C_FIELD(arg0, s32 *, 8) >> 8);
}
