#include "m2c.h"

void func_020f3c68(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u8 *, 0x1E) = (u8) (M2C_FIELD(arg0, u8 *, 0x1E) & ~arg1);
}
