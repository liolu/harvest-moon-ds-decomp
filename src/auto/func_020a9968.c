#include "m2c.h"

extern s32 data_021c8c5c;

u16 func_020a9968(void *arg0) {
    return M2C_FIELD((((M2C_FIELD(arg0, s32 *, 4) - 0x37) * 0x18) + data_021c8c5c), u16 *, 0x5EBA);
}
