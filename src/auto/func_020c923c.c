#include "m2c.h"

extern M2C_UNK data_021c8f28;
extern M2C_UNK data_021cbb28;

M2C_UNK *func_020c923c(s32 arg0) {
    if (arg0 != 0) {
        return &data_021c8f28;
    }
    return &data_021cbb28;
}
