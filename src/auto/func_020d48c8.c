#include "m2c.h"

u32 func_020d48c8(void *arg0) {
    return (u32) ((M2C_FIELD(arg0, s32 *, 4) + M2C_FIELD(arg0, s32 *, 8)) << 8) >> 0x10;
}
