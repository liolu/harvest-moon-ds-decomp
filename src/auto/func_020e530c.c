#include "m2c.h"

extern s32 data_021c8c5c;

u8 func_020e530c(void *arg0) {
    if (((u32) (M2C_FIELD((((M2C_FIELD(arg0, s32 *, 4) - 0x53) * 0xC) + data_021c8c5c), u8 *, 0x5A54) << 0x1F) >> 0x1F) == 0) {
        return 1U;
    }
    return M2C_FIELD(arg0, u8 *, 0x4C);
}
