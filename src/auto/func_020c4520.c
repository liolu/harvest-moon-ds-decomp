/* compiler: 2.0/sp1p5 -flag no-opt_rebuildlogicals */
#include "m2c.h"

s32 func_020c4520(s32 *arg0, s32 *arg1, s32 *arg2) {
    s32 temp_r3;
    s32 var_r0;

    temp_r3 = *arg0;
    var_r0  = 0;
    if (((s32) *arg1 <= temp_r3) && (temp_r3 <= (s32) *arg2)) {
        var_r0 = 1;
    }
    return var_r0;
}
