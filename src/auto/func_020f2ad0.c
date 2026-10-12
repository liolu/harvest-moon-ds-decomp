#include "m2c.h"
#include "engine.h"

s32 func_020f2ad0(s32 arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x88) == 0x3B) {
        return -1;
    }
    return (s32) M2C_FIELD(arg0, u8 *, 0x89);
}
