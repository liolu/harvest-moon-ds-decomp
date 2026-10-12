#include "m2c.h"

M2C_UNK func_02033f90();                            /* extern */
s32 func_020a8454(M2C_UNK);                         /* extern */
extern M2C_UNK data_021874ec;
extern M2C_UNK data_021c7764;

void *func_02041170(void *arg0, s32 arg1, s32 arg2, M2C_UNK arg3) {
    func_02033f90();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021874ec;
    M2C_FIELD(arg0, s32 *, 0xBAA4) = func_020a8454(arg3);
    M2C_FIELD(&data_021c7764, s8 *, 0x2C) = 0;
    M2C_FIELD(&data_021c7764, s8 *, 0x2D) = 0;
    return arg0;
}
