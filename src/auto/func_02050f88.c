#include "engine.h"
#include "m2c.h"

M2C_UNK func_020c9f74(M2C_UNK);

s32 func_02050f88(s32 arg0) {
    s32 var_r0;
    s32 var_r2;

    var_r2 = func_020c9f74(M2C_FIELD(arg0, u16 *, 0x1E82) - 1) + 1;
    var_r0 = 0;
loop_1:
    if (M2C_FIELD((arg0 + var_r0), u8 *, 0x1E88) == 0) {
        var_r2 -= 1;
        if (var_r2 == 0) {
            return var_r0;
        }
    }
    var_r0 += 1;
    if (var_r0 >= 0x23) {
        return var_r0;
    }
    goto loop_1;
}
