/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

M2C_UNK func_020f53d8(void *);                      /* extern */
extern M2C_UNK data_02194330;

void *func_020f5a5c(void *arg0) {
    void *var_r3;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02194330;
    M2C_FIELD(arg0, s32 *, 4)      = -1;
    M2C_FIELD(arg0, s32 *, 0x24)   = 0;
    M2C_FIELD(arg0, s8 *, 0x28)    = 0;
    M2C_FIELD(arg0, s8 *, 0x29)    = 0;
    M2C_FIELD(arg0, s8 *, 0x2A)    = 1;
    M2C_FIELD(arg0, s8 *, 0x2B)    = 0;
    M2C_FIELD(arg0, s32 *, 0x2C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x48)   = 0;
    M2C_FIELD(arg0, s32 *, 0x58)   = 0;
    M2C_FIELD(arg0, s8 *, 0x5C)    = 0;
    M2C_FIELD(arg0, s8 *, 0x5D)    = 0;
    M2C_FIELD(arg0, s8 *, 0x5E)    = 1;
    M2C_FIELD(arg0, s32 *, 0x70)   = 0;
    M2C_FIELD(arg0, s8 *, 0x74)    = 0;
    M2C_FIELD(arg0, s8 *, 0x75)    = 0;
    M2C_FIELD(arg0, s8 *, 0x76)    = 1;
    M2C_FIELD(arg0, s8 *, 0x77)    = 0;
    M2C_FIELD(arg0, s32 *, 0x78)   = 0;
    M2C_FIELD(arg0, s32 *, 0x94)   = 0;
    M2C_FIELD(arg0, s8 *, 0x98)    = 1;
    M2C_FIELD(arg0, s32 *, 0xA4)   = 0;
    M2C_FIELD(arg0, s8 *, 0xA8)    = 0;
    M2C_FIELD(arg0, s8 *, 0xA9)    = 0;
    M2C_FIELD(arg0, s8 *, 0xAA)    = 1;
    M2C_FIELD(arg0, s8 *, 0xAB)    = 0;
    M2C_FIELD(arg0, s32 *, 0xAC)   = 0;
    M2C_FIELD(arg0, s32 *, 0xC8)   = 0;
    M2C_FIELD(arg0, s8 *, 0xCC)    = 1;
    M2C_FIELD(arg0, s32 *, 0xD4)   = 0;
    func_020f53d8(arg0 + 0x104);
    var_r3 = arg0 + 0x118;
    do {
        M2C_FIELD(var_r3, s32 *, 8)    = 0;
        M2C_FIELD(var_r3, s8 *, 0xC)   = 0;
        M2C_FIELD(var_r3, s8 *, 0xD)   = 0;
        M2C_FIELD(var_r3, s8 *, 0xE)   = 1;
        M2C_FIELD(var_r3, s8 *, 0xF)   = 0;
        M2C_FIELD(var_r3, s32 *, 0x10) = 0;
        var_r3 += 0x2C;
    } while ((u32) var_r3 < (u32) (arg0 + 0x3D8));
    return arg0;
}
