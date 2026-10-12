#include "m2c.h"

extern M2C_UNK data_0215ab28;

s32 func_020b52a0(s32 arg0) {
    return *((M2C_UNK *)((s8 *)&data_0215ab28 + (arg0 * 0xC)));
}
