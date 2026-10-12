#include "m2c.h"

s32 func_021291e8(void *arg0, s32 arg1) {
    if ((M2C_FIELD(arg0, s32 *, 0) == 2) && (M2C_FIELD(arg0, s32 *, 4) == arg1)) {
        return 1;
    }
    return 0;
}
