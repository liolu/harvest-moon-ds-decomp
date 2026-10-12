#include "m2c.h"

extern s32 data_021c8c5c;

void func_020c5844(s32 arg0, s8 arg1) {
    M2C_FIELD((data_021c8c5c + arg0), s8 *, 0x779C) = arg1;
}
