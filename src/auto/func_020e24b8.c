#include "m2c.h"

s32 func_020e24b8(void *arg0) {
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg0, void **, 0x150);
    if (M2C_FIELD(temp_r1, s8 *, 2) != 5) {
        return 0;
    }
    if (M2C_FIELD(temp_r1, s16 *, 0) == 0) {
        return 1;
    }
    return 0;
}
