#include "m2c.h"

extern M2C_UNK data_02153700;
extern M2C_UNK data_02153704;

s32 func_0203d25c(s32 arg0, s32 arg1, s32 *arg2) {
    if (arg2 != NULL) {
        *arg2 = *((M2C_UNK *)((s8 *)&data_02153704 + ((arg1 - 2) * 8)));
    }
    return *((M2C_UNK *)((s8 *)&data_02153700 + ((arg1 - 2) * 8)));
}
