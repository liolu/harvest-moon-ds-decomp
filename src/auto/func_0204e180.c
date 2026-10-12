#include "m2c.h"

s32 func_0204e180(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if ((arg1 >= 0x37) && (arg1 < 0x53)) {
        return 1;
    }
    if ((arg2 >= 0x37) && (arg2 < 0x53)) {
        return 2;
    }
    if ((arg3 >= 0x37) && (arg3 < 0x53)) {
        return 3;
    }
    return 4;
}
