#include "m2c.h"

M2C_UNK func_020f35b0();                            /* extern */
extern M2C_UNK data_0219391c;

void *func_020f3fe0(void *arg0) {
    func_020f35b0();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0219391c;
    M2C_FIELD(arg0, s32 *, 0x48)   = 0;
    M2C_FIELD(arg0, s8 *, 0x4C)    = 0;
    M2C_FIELD(arg0, s8 *, 0x4D)    = 0;
    M2C_FIELD(arg0, s8 *, 0x4E)    = 1;
    M2C_FIELD(arg0, s8 *, 0x4F)    = 0;
    M2C_FIELD(arg0, s32 *, 0x50)   = 0;
    M2C_FIELD(arg0, s32 *, 0x6C)   = 0;
    M2C_FIELD(arg0, s8 *, 0x4C)    = 1;
    return arg0;
}
