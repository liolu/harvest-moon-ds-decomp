#include "m2c.h"

M2C_UNK func_020176a8(void *, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_0202dbbc(void *, void *, s32, s32);    /* extern */

void func_02030b50(void *arg0, s32 arg1, s32 arg2, void *arg3, s32 arg4, s32 arg5, s32 arg6) {
    func_020176a8(arg3, arg5, arg6, arg4, M2C_FIELD(arg0, s32 *, 0x3214), 0);
    M2C_FIELD(arg3, s32 *, 4) = (s32) (arg1 << 8);
    M2C_FIELD(arg3, s32 *, 8) = (s32) (arg2 << 8);
    M2C_FIELD(arg3, s8 *, 0x10) = 3;
    M2C_FIELD(arg3, s16 *, 0x20) = -8;
    M2C_FIELD(arg3, s16 *, 0x22) = -8;
    M2C_FIELD(arg3, s16 *, 0x24) = 0x10;
    M2C_FIELD(arg3, s16 *, 0x26) = 0x10;
    func_0202dbbc(arg0 + 0x3220, arg3, arg1, arg2);
    M2C_FIELD(arg0, s32 *, 0x3214) = (s32) (M2C_FIELD(arg0, s32 *, 0x3214) + 1);
}
