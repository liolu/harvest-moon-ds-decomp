#include "m2c.h"

extern M2C_UNK data_021ca928;
extern M2C_UNK data_021cd528;

M2C_UNK *func_020c934c(s32 arg0) {
    if (arg0 != 0) {
        return &data_021ca928;
    }
    return &data_021cd528;
}
