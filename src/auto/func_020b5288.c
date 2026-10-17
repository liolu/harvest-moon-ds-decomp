#include "m2c.h"

extern M2C_UNK data_0215ab2e;

s8 func_020b5288(s32 arg0) {
    return *((u8 *) ((s8 *) &data_0215ab2e + (arg0 * 0xC)));
}
