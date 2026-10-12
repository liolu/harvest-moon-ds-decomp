#include "m2c.h"

extern s32 data_021c8c5c;

u8 func_020b9868(s32 *arg0) {
    return M2C_FIELD((((*arg0 - 1) * 0x28) + data_021c8c5c), u8 *, 0x523C);
}
