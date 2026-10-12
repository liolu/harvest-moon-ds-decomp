#include "m2c.h"

s32 func_020ba360();                                /* extern */
void **func_020d34d8(M2C_UNK, s32);                 /* extern */

void func_020d1b78(M2C_UNK arg0, M2C_UNK arg1) {
    void **temp_r0;

    temp_r0 = func_020d34d8(arg0, func_020ba360() - 0x37);
    M2C_FIELD(*temp_r0, M2C_UNK (**)(void **, M2C_UNK), 0x2C)(temp_r0, arg1);
}
