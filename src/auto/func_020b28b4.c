#include "m2c.h"

s32 func_020b28b4(void *arg0, void *arg1) {
    if ((M2C_FIELD(arg0, s16 *, 0) == M2C_FIELD(arg1, s16 *, 0)) && (M2C_FIELD(arg0, s8 *, 2) == M2C_FIELD(arg1, s8 *, 2))) {
        return 1;
    }
    return 0;
}
