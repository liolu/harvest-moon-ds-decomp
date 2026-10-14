#include "m2c.h"

s32 func_020c8b28(M2C_UNK);                         /* extern */

void *func_020ea464(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = func_020c8b28(0x880);
    M2C_FIELD(arg0, s8 *, 4)  = 0;
    return arg0;
}
