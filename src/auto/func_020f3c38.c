#include "m2c.h"

void *func_020f3630();                              /* extern */

void func_020f3c38(s32 arg0, s32 arg1) {
    void *temp_r0;

    temp_r0                      = func_020f3630();
    M2C_FIELD(temp_r0, u16 *, 6) = (u16) (M2C_FIELD(temp_r0, u16 *, 6) & ~arg1);
}
