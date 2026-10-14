#include "m2c.h"

extern M2C_UNK data_02157160;

s32 func_0207c5fc(s32 arg0, s32 arg1) {
    return *((M2C_UNK *) ((s8 *) &data_02157160 + (arg1 * 4)));
}
