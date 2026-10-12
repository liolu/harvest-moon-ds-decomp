#include "m2c.h"

extern M2C_UNK data_021570f0;

s32 func_0207c58c(s32 arg0, s32 arg1) {
    return *((M2C_UNK *)((s8 *)&data_021570f0 + (arg1 * 4)));
}
