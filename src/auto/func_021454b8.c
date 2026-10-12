#include "m2c.h"

extern M2C_UNK data_022c8db4;

s32 func_021454b8(s32 arg0) {
    return M2C_FIELD(&data_022c8db4, u16 *, 0x34) & arg0;
}
