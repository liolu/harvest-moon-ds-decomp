#include "m2c.h"

extern u8 data_021c8cd0;

s32 func_02016fd0(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0xC) & 2) && (data_021c8cd0 & 0xC)) {
        return 1;
    }
    return 0;
}
