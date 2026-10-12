#include "m2c.h"

extern M2C_UNK data_021834e0;

void func_0202dc68(void *arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021834e0;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = arg3;
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg4, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg4, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg4, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg4, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg4, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}
