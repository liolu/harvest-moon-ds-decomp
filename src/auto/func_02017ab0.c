#include "m2c.h"

M2C_UNK func_02004b0c(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_0217f2fc;

void *func_02017ab0(void *arg0, s8 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0217f2fc;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s8 *, 0x10) = 0;
    M2C_FIELD(arg0, s8 *, 0x11) = 0;
    M2C_FIELD(arg0, s8 *, 0x12) = 1;
    M2C_FIELD(arg0, s8 *, 0x13) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s8 *, 0x11) = 0;
    M2C_FIELD(arg0, s8 *, 0x12) = 0;
    M2C_FIELD(arg0, s8 *, 0x10) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = (s32) (arg2 << 8);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (arg3 << 8);
    func_02004b0c(arg0 + 4, 1);
    return arg0;
}
