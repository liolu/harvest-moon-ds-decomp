#include "m2c.h"

void func_0213d5f0(s32 arg0, s32 arg1) {
    M2C_FIELD((void *)0x04000280, s16 *, 0) = 1;
    M2C_FIELD((void *)0x04000280, s32 *, 0x10) = 0;
    M2C_FIELD((void *)0x04000280, s32 *, 0x14) = arg0;
    M2C_FIELD((void *)0x04000280, s32 *, 0x18) = arg1;
    M2C_FIELD((void *)0x04000280, s32 *, 0x1C) = 0;
}
