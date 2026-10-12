#include "m2c.h"

s32 func_020c4e08();                                /* extern */
M2C_UNK func_020c4e44(s32);                         /* extern */

void func_020c4e28(s32 arg0) {
    func_020c4e44(arg0 + func_020c4e08());
    func_020c4e08();
}
