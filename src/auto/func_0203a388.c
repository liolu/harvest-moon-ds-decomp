#include "m2c.h"

M2C_UNK func_020176a8(void *, s32, s32, s32, s32, s32); /* extern */
s32 func_0201771c(void *);                          /* extern */
M2C_UNK func_0202dab0(void *, void *);              /* extern */

void func_0203a388(void *arg0, s32 arg1, s32 arg2, void *arg3, s32 arg4, s32 arg5) {
    func_020176a8(arg3, arg4, arg5, M2C_FIELD(arg0, s32 *, 0x2BDC), M2C_FIELD(arg0, s32 *, 0x2BE0), 0);
    M2C_FIELD(arg3, s32 *, 4) = (s32) (arg1 << 8);
    M2C_FIELD(arg3, s32 *, 8) = (s32) (arg2 << 8);
    M2C_FIELD(arg3, s8 *, 0x10) = 3;
    func_0202dab0(arg0 + 0x2588, arg3);
    M2C_FIELD(arg0, s32 *, 0x2BDC) = func_0201771c(arg3);
    M2C_FIELD(arg0, s32 *, 0x2BE0) = (s32) (M2C_FIELD(arg0, s32 *, 0x2BE0) + 1);
}
