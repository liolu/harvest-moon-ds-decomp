#include "m2c.h"

extern M2C_UNK data_021c8c68;

void func_020ba608(s32 arg0) {
    if (arg0 != 0) {
        M2C_FIELD(&data_021c8c68, s32 *, 0) = 0;
        return;
    }
    M2C_FIELD(&data_021c8c68, s32 *, 4) = 0;
}
