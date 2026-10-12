#include "m2c.h"

void func_020649ec(void *arg0) {
    s8 var_r1;
    s8 var_r2;

    var_r2 = M2C_FIELD(arg0, s8 *, 0x168);
    if ((s32) var_r2 >= 0x27) {
        var_r2 -= 0x27;
    } else if ((s32) var_r2 >= 0x1A) {
        var_r2 -= 0x1A;
    } else if ((s32) var_r2 >= 0xD) {
        var_r2 -= 0xD;
    }
    var_r1 = M2C_FIELD(arg0, s8 *, 0x169);
    if ((s32) var_r1 >= 0x27) {
        var_r1 -= 0x27;
    } else if ((s32) var_r1 >= 0x1A) {
        var_r1 -= 0x1A;
    } else if ((s32) var_r1 >= 0xD) {
        var_r1 -= 0xD;
    }
    if (var_r2 == var_r1) {
        M2C_FIELD(arg0, s8 *, 0x16C) = 2;
        return;
    }
    if (var_r1 == 0) {
        M2C_FIELD(arg0, s8 *, 0x16C) = 0;
        return;
    }
    if (var_r2 == 0) {
        M2C_FIELD(arg0, s8 *, 0x16C) = 1;
        return;
    }
    if ((s32) var_r2 < (s32) var_r1) {
        M2C_FIELD(arg0, s8 *, 0x16C) = 0;
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x16C) = 1;
}
