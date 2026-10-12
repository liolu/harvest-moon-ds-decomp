#include "m2c.h"

extern s32 data_021c8c5c;

s32 func_020f3630(void *arg0) {
    return data_021c8c5c + 0xFDC + (M2C_FIELD(arg0, s32 *, 4) * 8);
}
