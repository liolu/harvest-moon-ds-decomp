#include "m2c.h"

s32 func_02143f28(void *, M2C_UNK);                 /* extern */

s32 func_0214467c(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    M2C_FIELD(arg0, s32 *, 0x38) = arg4;
    M2C_FIELD(arg0, s32 *, 0x30) = arg2;
    M2C_FIELD(arg0, s32 *, 0x34) = arg3;
    if (func_02143f28(arg0, 7) == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) ((M2C_FIELD(arg0, s32 *, 0xC) | 0x10) & ~0x20);
    return 1;
}
