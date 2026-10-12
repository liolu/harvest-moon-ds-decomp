#include "m2c.h"

s32 func_020f7a7c(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (((u32) (arg1 - (M2C_FIELD(arg0, s32 *, 8) - arg3)) < (u32) (arg3 + 0x10000)) && ((u32) (arg2 - (M2C_FIELD(arg0, s32 *, 0xC) - arg3)) < (u32) (arg3 + 0xC000))) {
        return 1;
    }
    return 0;
}
