#include "m2c.h"

extern void *data_021c8c5c;

s32 func_02077130(s32 arg0, u32 arg1) {
    if (arg1 <= (u32) M2C_FIELD(data_021c8c5c, u32 *, 0x10)) {
        return 1;
    }
    return 0;
}
