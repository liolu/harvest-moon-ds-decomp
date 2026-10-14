#include "m2c.h"

M2C_UNK func_02140214();                            /* extern */
s32 func_02141124();                                /* extern */
M2C_UNK func_02141138(s32);                         /* extern */

void func_021401c4(void *arg0) {
    s32 temp_r4;

    temp_r4                      = func_02141124();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_02140214();
    func_02141138(temp_r4);
}
