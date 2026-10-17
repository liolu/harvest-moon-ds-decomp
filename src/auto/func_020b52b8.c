#include "m2c.h"

extern M2C_UNK data_0215ab2f;

s8 func_020b52b8(s32 arg0) {
    return *((u8 *) ((s8 *) &data_0215ab2f + (arg0 * 0xC)));
}
