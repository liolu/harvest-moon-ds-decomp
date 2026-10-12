#include "m2c.h"

extern s32 data_021c8c5c;

u16 func_020b9890(s32 *arg0) {
    return M2C_FIELD((((*arg0 - 1) * 0x28) + data_021c8c5c), u16 *, 0x5240);
}
