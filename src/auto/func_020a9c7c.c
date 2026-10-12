#include "m2c.h"

extern s32 data_021c8c5c;

u32 func_020a9c7c(void *arg0) {
    return (u32) (M2C_FIELD((((M2C_FIELD(arg0, s32 *, 4) - 0x37) * 0x18) + data_021c8c5c), u16 *, 0x5EB0) << 0x1A) >> 0x1D;
}
