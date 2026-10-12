#include "m2c.h"

u8 func_020f2ac0(void *arg0) {
    u8 var_r0;

    var_r0 = M2C_FIELD(arg0, u8 *, 0x88);
    if (var_r0 == 0x3B) {
        var_r0 = 0x3B;
    }
    return var_r0;
}
