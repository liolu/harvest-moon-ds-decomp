#include "m2c.h"

s32 func_02121780(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xE) & 1) {
        return 1;
    }
    return 0;
}
