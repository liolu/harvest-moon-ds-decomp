#include "m2c.h"

extern s32 data_021c8c5c;

s32 func_020b98b8(s32 *arg0) {
    if (((u32) (M2C_FIELD((((*arg0 - 1) * 0x28) + data_021c8c5c), u8 *, 0x523D) << 0x1F) >> 0x1F) != 0) {
        return 1;
    }
    return 0;
}
