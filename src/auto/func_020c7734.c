#include "m2c.h"

s32 func_020c7704();                                /* extern */
M2C_UNK func_020c77ac(s32);                         /* extern */
s32 func_02144734(s32, M2C_UNK);                    /* extern */

s32 func_020c7734(s32 arg0, M2C_UNK arg1) {
    if (func_020c7704() == 0) {
        func_020c77ac(arg0);
    }
    if (func_02144734(arg0 + 4, arg1) != 0) {
        return 1;
    }
    return 0;
}
