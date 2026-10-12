#include "m2c.h"

extern s32 data_021c8c5c;

s16 func_020b02b8(s32 arg0) {
    return M2C_FIELD((data_021c8c5c + (arg0 * 2)), s16 *, 0x18D4);
}
