#include "m2c.h"

extern s32 data_021c8c5c;

u8 func_020c5828(s32 arg0) {
    return M2C_FIELD((data_021c8c5c + arg0), u8 *, 0x779C);
}
