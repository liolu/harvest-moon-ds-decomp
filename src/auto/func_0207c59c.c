#include "m2c.h"

extern M2C_UNK data_02157110;

s32 func_0207c59c(s32 arg0, s32 arg1) {
    return *((M2C_UNK *) ((s8 *) &data_02157110 + (arg1 * 4)));
}
