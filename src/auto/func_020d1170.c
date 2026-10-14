#include "m2c.h"

void **func_020d34d8(M2C_UNK, M2C_UNK);             /* extern */

void func_020d1170(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void **temp_r0;

    temp_r0 = func_020d34d8(arg0, arg2);
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK), 0x28)(temp_r0, arg1);
}
