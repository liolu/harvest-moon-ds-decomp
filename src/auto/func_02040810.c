#include "m2c.h"

s32 func_02040810(s32 arg0, s32 arg1) {
    s32 temp_r1;

    temp_r1 = arg1 + 0x2E;
    if ((temp_r1 >= 0x111) && (temp_r1 < 0x125)) {
        return 1;
    }
    return 0;
}
