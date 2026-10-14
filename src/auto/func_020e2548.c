#include "m2c.h"

s32 func_020e2608(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

s32 func_020e2548(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r3;

    temp_r0 = func_020e2608(arg0, 5, 1);
    var_r3  = 0;
    if (temp_r0 > 0x14B) {
        if (temp_r0 <= 0x297) {
            var_r3 = 1;
        } else if (temp_r0 <= 0x3E3) {
            var_r3 = 2;
        } else if (temp_r0 <= 0x52F) {
            var_r3 = 3;
        } else if (temp_r0 <= 0x67B) {
            var_r3 = 4;
        } else if (temp_r0 <= 0x7C7) {
            var_r3 = 5;
        } else if (temp_r0 <= 0x913) {
            var_r3 = 6;
        } else if (temp_r0 <= 0xA5F) {
            var_r3 = 7;
        } else if (temp_r0 <= 0xBAB) {
            var_r3 = 8;
        } else if (temp_r0 <= 0xCF3) {
            var_r3 = 9;
        }
    }
    return var_r3;
}
