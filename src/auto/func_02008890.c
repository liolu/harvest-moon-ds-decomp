#include "m2c.h"

void func_02008890(void *arg0, s16 arg1) {
    M2C_FIELD((arg0 + (M2C_FIELD(arg0, u16 *, 0x2A68) * 4)), s16 *, 0x248C) = arg1;
    M2C_FIELD(arg0, u16 *, 0x2A68) = (u16) (M2C_FIELD(arg0, u16 *, 0x2A68) + 1);
}
