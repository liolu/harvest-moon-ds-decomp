#include "m2c.h"

s32 func_020a33d4();                                /* extern */
s32 func_020a3404(M2C_UNK);                         /* extern */
M2C_UNK func_020a34a8(M2C_UNK, s32, s32);           /* extern */

void func_020a346c(M2C_UNK arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = func_020a33d4();
    func_020a34a8(arg0, temp_r4, arg1 + func_020a3404(arg0));
    func_020a3404(arg0);
}
