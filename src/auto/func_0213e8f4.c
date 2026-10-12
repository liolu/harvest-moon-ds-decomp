#include "m2c.h"

void func_0213e8f4(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    M2C_FIELD(arg0, s16 *, 2) = (s16) (arg3 | (arg4 << 8));
    if (arg5 < 0) {
        M2C_FIELD(arg0, s16 *, 0) = (s16) (arg1 | 0xC0 | (arg2 << 8));
        M2C_FIELD(arg0, s16 *, 4) = (s16) (0 - arg5);
        return;
    }
    M2C_FIELD(arg0, s16 *, 0) = (s16) (arg1 | 0x80 | (arg2 << 8));
    M2C_FIELD(arg0, s16 *, 4) = (s16) arg5;
}
