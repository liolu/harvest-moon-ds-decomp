#include "m2c.h"

s32 func_02146514(u32 arg0) {
    s32 var_ip;
    s32 var_lr;
    s32 var_r2;
    s32 var_r3;
    s32 var_r4;
    s32 var_r5;

    var_ip = 0;
    var_r2 = 0;
    var_r3 = 0;
loop_1:
    if ((u32) ((arg0 >> var_r3) & 0xF) >= 0xAU) {
        return 0;
    }
    var_r2 += 1;
    var_r3 += 4;
    if (var_r2 >= 8) {
        var_r5 = 0;
        var_r4 = 0;
        var_lr = 1;
        do {
            var_ip += var_lr * ((arg0 >> var_r4) & 0xF);
            var_r5 += 1;
            var_lr *= 0xA;
            var_r4 += 4;
        } while (var_r5 < 8);
        return var_ip;
    }
    goto loop_1;
}
