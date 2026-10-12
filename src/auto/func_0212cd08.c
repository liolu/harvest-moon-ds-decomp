#include "m2c.h"

s32 func_0212cd60(M2C_UNK, s32);                    /* extern */
s32 func_0212ce68();                                /* extern */

s32 func_0212cd08(M2C_UNK arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
    case 0x34:
        return 0x130;
    case 0x36:
        return 0x136;
    case 0x35:
        return 0x137;
    default:
        return func_0212cd60(arg0, func_0212ce68());
    }
}
