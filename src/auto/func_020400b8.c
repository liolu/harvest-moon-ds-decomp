#include "m2c.h"

extern M2C_UNK data_02153f48;

s32 func_020400b8(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_02153f48 + (arg0 * 4)));
}
