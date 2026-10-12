#include "m2c.h"

extern void *data_021c8c5c;

void func_020ba308(s32 arg0, s32 arg1) {
    M2C_FIELD(data_021c8c5c, s8 *, 0xC) = (s8) ((arg0 * 0x1E) + arg1);
}
