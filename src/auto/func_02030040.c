#include "m2c.h"

extern M2C_UNK data_02183624;
extern void *data_021c8c5c;

s32 func_02030040(s32 arg0, s32 arg1) {
    return ((s32 *) &data_02183624)[(arg1 + ((M2C_FIELD(data_021c8c5c, u8 *, 0x8E5C) * 4) - 4))];
}
