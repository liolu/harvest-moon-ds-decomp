#include "m2c.h"

extern M2C_UNK data_021ce528;

void func_020c92c4(s32 arg0) {
    if (arg0 != 0) {
        M2C_FIELD(&data_021ce528, s8 *, 1) = 1;
        return;
    }
    M2C_FIELD(&data_021ce528, s8 *, 5) = 1;
}
