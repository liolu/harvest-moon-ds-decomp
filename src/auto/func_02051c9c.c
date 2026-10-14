#include "m2c.h"

void func_02051c9c(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1E34) != 0) {
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x1DA6) = 0x32;
    M2C_FIELD(arg0, s8 *, 0x1DA8)  = 1;
}
