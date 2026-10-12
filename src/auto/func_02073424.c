#include "m2c.h"
#include "engine.h"

void func_020178b8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_021986bc;

void func_02073424(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s8 arg4) {
    func_020178b8(arg1, (s32) &data_021986bc, 0, 0);
    M2C_FIELD(arg0, u8 *, 0) = (u8) arg2;
    M2C_FIELD(arg0, u8 *, 1) = (u8) arg3;
    M2C_FIELD(arg0, u8 *, 2) = (u8) arg2;
    M2C_FIELD(arg0, u8 *, 3) = (u8) arg3;
    M2C_FIELD(arg0, s8 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 5) = arg4;
    M2C_FIELD(arg0, s8 *, 7) = 0;
    M2C_FIELD(arg0, s8 *, 6) = -1;
    M2C_FIELD(arg0, s8 *, 8) = 1;
    M2C_FIELD(arg0, s8 *, 0xA) = 0;
    M2C_FIELD(arg0, s8 *, 0x10) = 2;
    M2C_FIELD(arg0, s8 *, 0x14) = 5;
    M2C_FIELD(arg0, s8 *, 0x15) = 0;
    M2C_FIELD(arg0, s8 *, 0x16) = 2;
    M2C_FIELD(arg0, s8 *, 0x17) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
