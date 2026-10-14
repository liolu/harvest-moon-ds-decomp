#include "m2c.h"

void func_020f564c(void *arg0, s32 arg1, M2C_UNK *arg2) {
    M2C_FIELD(arg2, s32 *, 4)         = arg1;
    M2C_FIELD(arg2, M2C_UNK **, 0)    = NULL;
    *M2C_FIELD(arg0, M2C_UNK **, 0xC) = arg2;
    M2C_FIELD(arg0, M2C_UNK **, 0xC)  = arg2;
}
