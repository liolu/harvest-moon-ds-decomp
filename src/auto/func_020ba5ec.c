#include "m2c.h"

extern M2C_UNK data_021c8c68;

void func_020ba5ec(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        M2C_FIELD(&data_021c8c68, s32 *, 0) = arg0;
        return;
    }
    M2C_FIELD(&data_021c8c68, s32 *, 4) = arg0;
}
