#include "m2c.h"

extern M2C_UNK data_022c1f6c;

void func_020edfc8(void) {
    M2C_FIELD(&data_022c1f6c, u8 *, 0) = (u8) ((u8) (M2C_FIELD(&data_022c1f6c, u8 *, 0) | 0x80) | 2);
    M2C_FIELD(&data_022c1f6c, s32 *, 0xCC) = 0x100;
    M2C_FIELD(&data_022c1f6c, s32 *, 0xD0) = 0;
}
