#include "m2c.h"

extern M2C_UNK data_02152c88;

s32 func_02034770(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_02152c88 + (arg0 * 4)));
}
