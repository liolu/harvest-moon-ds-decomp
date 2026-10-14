#include "m2c.h"

void func_0202bf64(void *arg0) {
    M2C_FIELD((arg0 + (M2C_FIELD(arg0, u16 *, 0x1A) * 2)), u16 *, 0x16) = (u16) M2C_FIELD(arg0, u16 *, 0x10);
    M2C_FIELD(arg0, u16 *, 0x1A)                                        = 0U;
    M2C_FIELD(arg0, s32 *, 0xC)                                         = 0x4000;
    M2C_FIELD(arg0, u16 *, 0x10)                                        = (u16) M2C_FIELD(arg0, u16 *, 0x16);
}
