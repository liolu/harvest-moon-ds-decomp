#include "m2c.h"

extern s32 data_021c8c5c;

u16 func_020c58c8(s32 arg0) {
    return M2C_FIELD((data_021c8c5c + (arg0 * 2)), u16 *, 0x77C8);
}
