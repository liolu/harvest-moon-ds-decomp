#include "m2c.h"

extern s32 data_021c8c5c;

u32 func_020a9d84(void *arg0) {
    return (u32) (M2C_FIELD((((M2C_FIELD(arg0, s32 *, 4) - 0x37) * 0x18) + data_021c8c5c), u8 *, 0x5EBC) << 0x18) >> 0x1B;
}
