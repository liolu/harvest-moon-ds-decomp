#include "m2c.h"

extern M2C_UNK data_022c3f80;

void func_0212a3b8(void) {
    if (!(M2C_FIELD(&data_022c3f80, u8 *, 2) & 1)) {
        return;
    }
    M2C_FIELD(&data_022c3f80, u8 *, 2) = (u8) ((u8) (M2C_FIELD(&data_022c3f80, u8 *, 2) | 2) & ~4);
}
