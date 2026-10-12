#include "m2c.h"

s32 func_020aae40(M2C_UNK);                         /* extern */
s32 func_020e24e0(s32);                             /* extern */
s32 func_020e9c18(s32);                             /* extern */

s32 func_021277f8(s32 arg0) {
    s32 temp_r4;
    s32 var_r4;

    var_r4 = 0;
    if (func_020aae40(0xAD) != 0) {
        var_r4 += 1;
    }
    if (func_020aae40(0xAE) != 0) {
        var_r4 += 1;
    }
    if (func_020aae40(0xAF) != 0) {
        var_r4 += 1;
    }
    if (func_020aae40(0xB0) != 0) {
        var_r4 += 1;
    }
    if (func_020aae40(0xB1) != 0) {
        var_r4 += 1;
    }
    if (func_020aae40(0xB2) != 0) {
        var_r4 += 1;
    }
    if (func_020aae40(0xB3) != 0) {
        var_r4 += 1;
    }
    if (func_020aae40(0xB4) != 0) {
        var_r4 += 1;
    }
    if (func_020aae40(0xB5) != 0) {
        var_r4 += 1;
    }
    temp_r4 = var_r4 + func_020e24e0(arg0 + 0x3310);
    return temp_r4 + func_020e9c18(arg0 + 0x3470);
}
