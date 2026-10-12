#include "m2c.h"

void *func_020f3630();                              /* extern */

void func_02114c44(void *arg0) {
    M2C_FIELD(func_020f3630(), s8 *, 4) = (s8) M2C_FIELD(M2C_FIELD(arg0, void **, 0x204), s32 *, 4);
}
