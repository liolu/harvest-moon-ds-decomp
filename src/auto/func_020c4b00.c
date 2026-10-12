#include "m2c.h"

s32 func_020c4a98();                                /* extern */
s32 func_020c4ae8(M2C_UNK, M2C_UNK);                /* extern */

s32 func_020c4b00(M2C_UNK arg0, M2C_UNK arg1) {
    if ((func_020c4a98() != 0) && (func_020c4ae8(arg0, arg1) != 0)) {
        return 1;
    }
    return 0;
}
