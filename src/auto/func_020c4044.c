#include "m2c.h"

extern M2C_UNK data_021927fc;

void func_020c4044(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021927fc;
    M2C_FIELD(arg0, s32 *, 4)      = arg1;
}
