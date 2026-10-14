#include "m2c.h"

extern M2C_UNK data_02194ee4;
extern M2C_UNK data_02194efc;

void func_02133c68(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_02194ee4;
    M2C_FIELD(arg0, s32 *, 4)         = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x28) = &data_02194efc;
    M2C_FIELD(arg0, s32 *, 0x1BC)     = 0;
}
