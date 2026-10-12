#include "m2c.h"

void *func_020f3630();                              /* extern */

void func_020e5008(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x4E) = arg1;
    M2C_FIELD(arg0, s8 *, 0x4C) = 0;
    if (arg1 != 1) {
        return;
    }
    M2C_FIELD(func_020f3630(), s8 *, 4) = 1;
}
