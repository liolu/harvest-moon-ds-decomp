#include "m2c.h"

s32 func_02008bc8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8) + (M2C_FIELD(arg0, s32 *, 4) * 2);
}
