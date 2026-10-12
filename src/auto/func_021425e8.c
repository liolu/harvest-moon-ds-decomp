#include "m2c.h"

s32 func_02141124();                                /* extern */
M2C_UNK func_02141138(s32);                         /* extern */
M2C_UNK func_021427a4(M2C_UNK);                     /* extern */

void func_021425e8(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_02141124();
    func_021427a4(arg1);
    func_02141138(temp_r4);
}
