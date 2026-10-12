#include "m2c.h"

void func_02000f98(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg1, s32 *, 4) = 0;
}
