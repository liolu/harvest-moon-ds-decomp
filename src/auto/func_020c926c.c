#include "m2c.h"

extern M2C_UNK data_021c9328;
extern M2C_UNK data_021cbf28;

M2C_UNK *func_020c926c(s32 arg0) {
    if (arg0 != 0) {
        return &data_021c9328;
    }
    return &data_021cbf28;
}
