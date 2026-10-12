#include "m2c.h"

extern M2C_UNK data_02157128;

s32 func_0207c5bc(s32 arg0, s32 arg1) {
    return *((M2C_UNK *)((s8 *)&data_02157128 + (arg1 * 4)));
}
