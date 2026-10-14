#include "m2c.h"

M2C_UNK func_020244b0(M2C_UNK, M2C_UNK, s32, M2C_UNK, s32); /* extern */
s32 func_0213e4c8();                                /* extern */

void func_02065a4c(s32 arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    *(s32 *) 0x04001014 = ((0 - arg2) & 0x1FF) | (0x01FF0000 & ((0 - arg3) << 0x10));
    func_020244b0(arg1, 0, func_0213e4c8(), 0, 0);
}
