#include "m2c.h"

s32 func_020a84b0(s32 arg0) {
    if (arg0 <= 0x17) {
        return 0;
    }
    if (arg0 <= 0x41) {
        return 1;
    }
    if (arg0 <= 0x54) {
        return 2;
    }
    if (arg0 <= 0x68) {
        return 3;
    }
    if (arg0 <= 0x77) {
        return 4;
    }
    return 5;
}
