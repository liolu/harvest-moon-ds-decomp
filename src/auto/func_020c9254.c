#include "m2c.h"

extern M2C_UNK data_021c9128;
extern M2C_UNK data_021cbd28;

M2C_UNK *func_020c9254(s32 arg0) {
    if (arg0 != 0) {
        return &data_021c9128;
    }
    return &data_021cbd28;
}
