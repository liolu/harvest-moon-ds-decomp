#include "m2c.h"

extern s32 data_021c8c5c;

s32 func_020b97e4(s32 arg0) {
    return M2C_FIELD((data_021c8c5c + (arg0 * 4)), s32 *, 0x744C);
}
