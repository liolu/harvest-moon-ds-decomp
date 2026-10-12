#include "m2c.h"

s32 func_020c4964(M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_0217e350;

void *func_020c4b50(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0217e350;
    M2C_FIELD(arg0, s32 *, 4) = func_020c4964(arg1, arg2, arg3, arg4, arg5);
    return arg0;
}
