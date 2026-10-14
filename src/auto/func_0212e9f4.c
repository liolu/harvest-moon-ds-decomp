#include "m2c.h"

void func_0212e9f4(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0)   = (s32) (arg1 + 4);
    M2C_FIELD(arg0, void **, 4) = (void *) (arg1 + M2C_FIELD(arg1, u16 *, 0));
    M2C_FIELD(arg0, void **, 8) = (void *) (arg1 + M2C_FIELD(arg1, u16 *, 2));
    M2C_FIELD(arg0, s8 *, 0x17) = 0;
}
