#include "m2c.h"

extern void *data_021c8c5c;

u32 func_020c4cc0(void) {
    return (u32) (M2C_FIELD(data_021c8c5c, u16 *, 0x7420) << 0x1E) >> 0x1E;
}
