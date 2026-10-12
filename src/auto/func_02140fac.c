#include "m2c.h"

extern u16 data_022c70f8;

void func_02140fac(s32 arg0) {
    data_022c70f8 |= 1 << arg0;
}
