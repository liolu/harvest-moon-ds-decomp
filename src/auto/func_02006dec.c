#include "m2c.h"

extern M2C_UNK data_0217c980;

void func_02006dec(void *arg0, void *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0217c980;
    M2C_FIELD(arg0, s32 *, 4)      = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8)      = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xC)    = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x10)   = (s32) M2C_FIELD(arg1, s32 *, 0x10);
}
