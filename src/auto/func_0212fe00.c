#include "m2c.h"

M2C_UNK func_020caab0(void *, s32);                 /* extern */
M2C_UNK func_02133c68();                            /* extern */
M2C_UNK func_0213e13c(M2C_UNK);                     /* extern */
extern M2C_UNK data_02194d5c;
extern M2C_UNK data_02194e38;

void *func_0212fe00(void *arg0) {
    func_02133c68();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02194e38;
    M2C_FIELD(arg0, s32 *, 0x354)  = 0;
    M2C_FIELD(arg0, s32 *, 0x358)  = -1;
    M2C_FIELD(arg0, s32 *, 0x35C)  = 0;
    func_020caab0(arg0 + 0x360, M2C_FIELD(&data_02194d5c, s32 *, 0x44));
    func_0213e13c(0x10);
    return arg0;
}
