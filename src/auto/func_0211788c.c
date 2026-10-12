#include "m2c.h"

s32 func_02121370(s32);                             /* extern */

void func_0211788c(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = func_02121370(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s8 *, 0xC) = 0;
    M2C_FIELD(arg0, s8 *, 0xD) = 0;
    M2C_FIELD(arg0, s8 *, 0xE) = 0;
    M2C_FIELD(arg0, s8 *, 0x10) = -1;
    M2C_FIELD(arg0, s8 *, 0xF) = 0;
    M2C_FIELD(arg0, s8 *, 0x11) = -1;
}
