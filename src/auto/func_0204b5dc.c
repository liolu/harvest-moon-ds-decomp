#include "m2c.h"

s32 func_020251fc(s32, M2C_UNK);                    /* extern */
M2C_UNK func_020c4134(M2C_UNK, s32);                /* extern */

void func_0204b5dc(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_020c4134(arg1, func_020251fc(arg0 + 0x1F5C, arg2));
}
