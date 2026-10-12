#include "m2c.h"

s32 func_02115ac4(void *arg0) {
    s8 var_r0;
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0x1DC);
    if (M2C_FIELD(temp_r2, s32 *, 0x18) != -1) {
        return 1;
    }
    if (M2C_FIELD(temp_r2, s16 *, 0x10) == -1) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return 0 - var_r0;
}
