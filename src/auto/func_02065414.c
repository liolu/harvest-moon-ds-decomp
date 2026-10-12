#include "m2c.h"

void func_02065414(void *arg0) {
    s8 var_r1;
    s8 var_r2;

    var_r2 = M2C_FIELD(arg0, s8 *, 0x1A8);
    if ((s32) var_r2 >= 0x27) {
        var_r2 -= 0x27;
    } else if ((s32) var_r2 >= 0x1A) {
        var_r2 -= 0x1A;
    } else if ((s32) var_r2 >= 0xD) {
        var_r2 -= 0xD;
    }
    var_r1 = M2C_FIELD((arg0 + (M2C_FIELD(arg0, s8 *, 0x1A5) + 1)), s8 *, 0x1A8);
    if ((s32) var_r1 >= 0x27) {
        var_r1 -= 0x27;
    } else if ((s32) var_r1 >= 0x1A) {
        var_r1 -= 0x1A;
    } else if ((s32) var_r1 >= 0xD) {
        var_r1 -= 0xD;
    }
    if (var_r2 == var_r1) {
        M2C_FIELD(arg0, s8 *, 0x1A4) = 1;
        return;
    }
    if (var_r1 == 0) {
        M2C_FIELD(arg0, s8 *, 0x1A4) = 1;
        return;
    }
    if (var_r2 == 0) {
        M2C_FIELD(arg0, s8 *, 0x1A4) = 2;
        return;
    }
    if ((s32) var_r2 < (s32) var_r1) {
        M2C_FIELD(arg0, s8 *, 0x1A4) = 1;
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x1A4) = 2;
}
