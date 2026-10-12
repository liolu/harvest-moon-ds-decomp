#include "m2c.h"

void func_02062fb8(void *arg0) {
    s8 var_r1;
    s8 var_r2;

    var_r2 = M2C_FIELD((arg0 + M2C_FIELD(arg0, s8 *, 0x33C4)), s8 *, 0x33B2);
    if ((s32) var_r2 >= 0x27) {
        var_r2 -= 0x27;
    } else if ((s32) var_r2 >= 0x1A) {
        var_r2 -= 0x1A;
    } else if ((s32) var_r2 >= 0xD) {
        var_r2 -= 0xD;
    }
    var_r1 = M2C_FIELD((arg0 + M2C_FIELD(arg0, s8 *, 0x33C5)), s8 *, 0x33B2);
    if ((s32) var_r1 >= 0x27) {
        var_r1 -= 0x27;
    } else if ((s32) var_r1 >= 0x1A) {
        var_r1 -= 0x1A;
    } else if ((s32) var_r1 >= 0xD) {
        var_r1 -= 0xD;
    }
    if (var_r2 == var_r1) {
        M2C_FIELD(arg0, s8 *, 0x33C8) = 1;
    }
}
