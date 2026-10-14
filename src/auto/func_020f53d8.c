#include "m2c.h"

extern M2C_UNK data_02194300;

void func_020f53d8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02194300;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, void **, 0xC)  = (void *) (arg0 + 4);
}
