#include "m2c.h"

s32 *func_020fbe8c(M2C_UNK, M2C_UNK *, M2C_UNK *);  /* extern */

s32 func_020fb6b8(M2C_UNK arg0) {
    M2C_UNK sp4;
    M2C_UNK sp0;

    if (((u32) (*func_020fbe8c(arg0, &sp4, &sp0) << 0x1F) >> 0x1F) == 0) {
        return 1;
    }
    return 0;
}
