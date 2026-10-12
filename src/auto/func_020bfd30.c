#include "m2c.h"

s32 func_020bfd30(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0) == 0) && (M2C_FIELD(arg0, u8 *, 5) == 0) && (M2C_FIELD(arg0, u8 *, 0x15) == 0)) {
        return 1;
    }
    return 0;
}
