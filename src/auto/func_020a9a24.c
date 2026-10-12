#include "m2c.h"

extern s32 data_021c8c5c;

s32 func_020a9a24(void *arg0) {
    if (((u32) (M2C_FIELD((((M2C_FIELD(arg0, s32 *, 4) - 0x37) * 0x18) + data_021c8c5c), u8 *, 0x5EB2) << 0x1F) >> 0x1F) != 0) {
        return 1;
    }
    return 0;
}
