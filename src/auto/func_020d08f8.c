#include "m2c.h"

s32 func_020c8b28(s32);                             /* extern */
extern M2C_UNK data_02193514;

void *func_020d08f8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02193514;
    M2C_FIELD(arg0, s32 *, 4)      = func_020c8b28(0x1650);
    M2C_FIELD(arg0, s8 *, 8)       = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    M2C_FIELD(arg0, s32 *, 0x14)   = 1;
    M2C_FIELD(arg0, s32 *, 0x18)   = -1;
    M2C_FIELD(arg0, s32 *, 0x1C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x20)   = -1;
    return arg0;
}
