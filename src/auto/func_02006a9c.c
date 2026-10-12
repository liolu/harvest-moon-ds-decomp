#include "m2c.h"

s32 func_02006a9c(void *arg0, s32 *arg1, s32 *arg2) {
    return (M2C_FIELD(arg0, s32 *, 0xC) * (M2C_FIELD(arg0, s32 *, 8) - *arg2)) + (M2C_FIELD(arg0, s32 *, 4) - *arg1);
}
