#include "m2c.h"

void *func_020f3630();                              /* extern */

void func_020f3754(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, u8 *, 0xA) != 0) {
        M2C_FIELD(arg0, s32 *, 0xC) = arg1;
        return;
    }
    M2C_FIELD(func_020f3630(), s8 *, 4) = (s8) arg1;
}
