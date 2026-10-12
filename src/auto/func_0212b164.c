#include "m2c.h"

M2C_UNK func_02004b0c(void *, u8);                  /* extern */
void *func_0212b39c(M2C_UNK, s32);                  /* extern */

void func_0212b164(M2C_UNK arg0) {
    s32 var_r5;
    void *temp_r0;

    var_r5 = 0;
    do {
        temp_r0 = func_0212b39c(arg0, var_r5);
        M2C_FIELD(temp_r0, s8 *, 9) = 0;
        func_02004b0c(temp_r0 + 0x10, M2C_FIELD(temp_r0, u8 *, 8));
        var_r5 += 1;
    } while (var_r5 < 3);
}
