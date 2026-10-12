#include "m2c.h"

extern s32 data_021c8c5c;

u32 func_020b1528(s32 arg0) {
    void *temp_r1;

    temp_r1 = data_021c8c5c + 0x6170 + ((arg0 - 0x41) * 8);
    if (M2C_FIELD(temp_r1, u8 *, 1) != 2) {
        return -1U;
    }
    if (((u32) (M2C_FIELD(temp_r1, u8 *, 0) << 0x1F) >> 0x1F) == 0) {
        return -1U;
    }
    return (u32) (M2C_FIELD(temp_r1, u16 *, 4) << 0x1C) >> 0x1E;
}
