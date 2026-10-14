#include "m2c.h"

M2C_UNK func_02017ab0(void *, M2C_UNK, s32, s32);   /* extern */
extern M2C_UNK data_0217f298;

void *func_02017840(void *arg0, s16 arg1, s8 arg2, M2C_UNK arg3, s32 arg4, s32 arg5) {
    func_02017ab0(arg0, arg3, arg4, arg5);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0217f298;
    M2C_FIELD(arg0, s8 *, 0x20)    = arg2;
    M2C_FIELD(arg0, s16 *, 0x2C)   = arg1;
    return arg0;
}
