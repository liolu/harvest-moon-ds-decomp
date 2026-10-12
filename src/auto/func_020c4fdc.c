#include "m2c.h"

s32 func_020c4fc0();                         /* extern */
M2C_UNK func_020c5008();                /* extern */

void func_020c4fdc(M2C_UNK arg0, s32 arg1) {
    func_020c5008(arg0, arg1 + func_020c4fc0());
    func_020c4fc0(arg0);
}
