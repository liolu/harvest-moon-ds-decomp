#include "m2c.h"

extern s32 data_022c5ee4;

s32 func_0213a618(s32 arg0) {
    s32 temp_r2;

    temp_r2 = data_022c5ee4;
    data_022c5ee4 = arg0;
    return temp_r2;
}
