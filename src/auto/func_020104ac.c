#include "m2c.h"

void func_020104ac(void *arg0, s16 arg1) {
    M2C_FIELD((arg0 + (M2C_FIELD(arg0, u16 *, 0x1FE0) * 4)), s16 *, 0x1E00) = arg1;
    M2C_FIELD(arg0, u16 *, 0x1FE0) = (u16) (M2C_FIELD(arg0, u16 *, 0x1FE0) + 1);
}
