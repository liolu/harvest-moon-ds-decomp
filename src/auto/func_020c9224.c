#include "m2c.h"

extern M2C_UNK data_021c8d28;
extern M2C_UNK data_021cb928;

M2C_UNK *func_020c9224(s32 arg0) {
    if (arg0 != 0) {
        return &data_021c8d28;
    }
    return &data_021cb928;
}
