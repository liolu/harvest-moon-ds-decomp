#include "m2c.h"

extern s32 data_021c8c5c;

void func_020a9990(void *arg0, s16 arg1) {
    M2C_FIELD((((M2C_FIELD(arg0, s32 *, 4) - 0x37) * 0x18) + data_021c8c5c), s16 *, 0x5EBA) = arg1;
}
