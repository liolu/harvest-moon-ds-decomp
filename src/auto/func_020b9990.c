#include "m2c.h"

extern s32 data_021c8c5c;

s32 func_020b9990(s32 *arg0) {
    if (((u32) (M2C_FIELD((((*arg0 - 1) * 0x28) + data_021c8c5c), u16 *, 0x523E) << 0x1F) >> 0x1F) != 0) {
        return 1;
    }
    return 0;
}
