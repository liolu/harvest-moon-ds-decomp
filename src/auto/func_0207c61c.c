#include "m2c.h"

extern M2C_UNK data_02157178;

s32 func_0207c61c(s32 arg0, s32 arg1) {
    return *((M2C_UNK *)((s8 *)&data_02157178 + (arg1 * 4)));
}
