#include "m2c.h"

extern M2C_UNK data_0215d634;
extern void *data_021c8c5c;

void func_020f0e8c(s32 arg0, s32 arg1) {
    M2C_FIELD(data_021c8c5c, u8 *, 0x7422) = (u8) ((u8 *)&data_0215d634)[arg1];
}
