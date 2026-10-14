#include "m2c.h"

extern void *data_021c8c5c;

s32 func_020cb220(void) {
    s32 var_r0;
    s8 temp_r1;

    var_r0  = 0;
    temp_r1 = M2C_FIELD(data_021c8c5c, s8 *, 0x7839);
    if ((temp_r1 != -1) && (temp_r1 != 0)) {
        var_r0 = 1;
    }
    return var_r0;
}
