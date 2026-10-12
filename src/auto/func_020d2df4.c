/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020d2df4(void *arg0) {
    s32 var_r2;
    void *var_r1;

    var_r1 = M2C_FIELD(arg0, void **, 4);
    var_r2 = 0;
loop_1:
    if (M2C_FIELD(var_r1, s32 *, 0x70) == 0) {
        return var_r2 + 0x37;
    }
    var_r2 += 1;
    var_r1 += 0xCC;
    if (var_r2 >= 0x1C) {
        return -1;
    }
    goto loop_1;
}
