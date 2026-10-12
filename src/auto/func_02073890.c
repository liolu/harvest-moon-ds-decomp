#include "m2c.h"

void func_02073890(void *arg0, s8 arg1, s8 arg2, s8 arg3, u8 arg4) {
    M2C_FIELD(arg0, s8 *, 0x14) = arg1;
    M2C_FIELD(arg0, s8 *, 0x15) = arg2;
    M2C_FIELD(arg0, s8 *, 0x16) = arg3;
    M2C_FIELD(arg0, u8 *, 0x17) = arg4;
}
