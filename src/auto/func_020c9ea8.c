#include "m2c.h"

extern M2C_UNK data_021ce528;

void func_020c9ea8(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        M2C_FIELD(&data_021ce528, s32 *, 0xC) = arg0;
        return;
    }
    M2C_FIELD(&data_021ce528, s32 *, 0x10) = arg0;
}
