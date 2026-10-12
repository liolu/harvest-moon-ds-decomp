#include "m2c.h"

extern M2C_UNK data_021ca528;
extern M2C_UNK data_021cd128;

M2C_UNK *func_020c931c(s32 arg0) {
    if (arg0 != 0) {
        return &data_021ca528;
    }
    return &data_021cd128;
}
