#include "m2c.h"

void func_0202bf50(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x18) = arg1;
    if (M2C_FIELD(arg0, u16 *, 0x1A) == 1) {
        M2C_FIELD(arg0, s16 *, 0x10) = arg1;
    }
}
