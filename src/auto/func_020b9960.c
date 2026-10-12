#include "m2c.h"

extern s32 data_021c8c5c;

u32 func_020b9960(s32 *arg0) {
    return (u32) (M2C_FIELD((((*arg0 - 1) * 0x28) + data_021c8c5c), u8 *, 0x523D) << 0x18) >> 0x1B;
}
