#include "m2c.h"

void **func_0212b39c(void *, s32);                  /* extern */

void func_0212b1dc(void *arg0, M2C_UNK arg1) {
    s32 var_r4;
    void **temp_r0;

    if (M2C_FIELD(arg0, u8 *, 4) != 0) {
        return;
    }
    var_r4 = 0;
    do {
        temp_r0 = func_0212b39c(arg0, var_r4);
        M2C_FIELD(*temp_r0, M2C_UNK (**)(void **, M2C_UNK), 0x10)(temp_r0, arg1);
        var_r4 += 1;
    } while (var_r4 < 3);
}
