#include "m2c.h"

extern s32 data_021c8c5c;

s32 func_020aa8c8(void *arg0) {
    if (((u32) (M2C_FIELD((data_021c8c5c + ((M2C_FIELD(arg0, s32 *, 4) - 0xA7) * 4)), s32 *, 0x5E44) << 0x1E) >> 0x1F) != 0) {
        return 1;
    }
    return 0;
}
