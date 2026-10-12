#include "m2c.h"

s32 func_02008c38(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 8) + (arg1 * 2);
}
