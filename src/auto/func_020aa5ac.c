#include "m2c.h"

extern s32 data_021c8c5c;

u8 func_020aa5ac(void *arg0) {
    return M2C_FIELD((((M2C_FIELD(arg0, s32 *, 4) - 0x53) * 0xC) + data_021c8c5c), u8 *, 0x5A56);
}
