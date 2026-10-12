#include "m2c.h"

extern s32 data_021c8c5c;

u32 func_020aa7b0(void *arg0) {
    return (u32) (M2C_FIELD((data_021c8c5c + ((M2C_FIELD(arg0, s32 *, 4) - 0xA7) * 4)), s32 *, 0x5E44) << 0x10) >> 0x18;
}
