#include "m2c.h"

void **func_020d34d8(M2C_UNK, s32);                 /* extern */

void func_020d205c(M2C_UNK arg0, s32 arg1, M2C_UNK arg2) {
    void **temp_r0;

    temp_r0 = func_020d34d8(arg0, arg1 - 0x37);
    M2C_FIELD(*temp_r0, M2C_UNK (**)(void **, M2C_UNK), 0x90)(temp_r0, arg2);
}
