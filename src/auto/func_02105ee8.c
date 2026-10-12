#include "m2c.h"

extern void *data_021c8c5c;

void func_02105ee8(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0xE) = (u8) (M2C_FIELD(arg0, u8 *, 0xE) | 1);
    M2C_FIELD(arg0, s8 *, 0xD) = 0;
    M2C_FIELD(arg0, s8 *, 0x33) = 1;
    M2C_FIELD(data_021c8c5c, s32 *, 0x8E48) = 1;
}
