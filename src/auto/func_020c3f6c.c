#include "m2c.h"

extern M2C_UNK data_02192810;

void func_020c3f6c(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02192810;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}
