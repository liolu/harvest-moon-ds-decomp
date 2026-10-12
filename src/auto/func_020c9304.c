#include "m2c.h"

extern M2C_UNK data_021ca328;
extern M2C_UNK data_021ccf28;

M2C_UNK *func_020c9304(s32 arg0) {
    if (arg0 != 0) {
        return &data_021ca328;
    }
    return &data_021ccf28;
}
