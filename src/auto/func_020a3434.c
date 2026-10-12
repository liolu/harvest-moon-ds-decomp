#include "m2c.h"

s32 func_020a33d4();                         /* extern */
s32 func_020a3404();                         /* extern */
M2C_UNK func_020a34a8();           /* extern */

void func_020a3434(M2C_UNK arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = func_020a33d4();
    func_020a34a8(arg0, arg1 + temp_r4, func_020a3404(arg0));
    func_020a33d4(arg0);
}
