#include "m2c.h"

s32 func_020c926c(M2C_UNK);                         /* extern */
s32 func_020c934c();                                /* extern */
M2C_UNK func_020c9410(s32, s32, M2C_UNK, M2C_UNK);  /* extern */

void func_020c9530(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_020c934c();
    func_020c9410(temp_r4, func_020c926c(arg0), 0x1000, arg0);
}
