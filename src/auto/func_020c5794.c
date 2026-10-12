#include "m2c.h"

extern s32 data_021c8c5c;

s32 func_020c5794(s32 arg0) {
    s32 var_r0;

    var_r0 = 1;
    if (!(M2C_FIELD((data_021c8c5c + ((arg0 >> 5) * 4)), s32 *, 0x75AC) & (1 << (arg0 & 0x1F)))) {
        var_r0 = 0;
    }
    return var_r0;
}
