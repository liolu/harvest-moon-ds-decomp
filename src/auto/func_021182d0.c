#include "m2c.h"

M2C_UNK func_0212ea20(void *, M2C_UNK, M2C_UNK);    /* extern */
extern void *data_021c8c5c;

void func_021182d0(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xC) = 2;
    M2C_FIELD(arg0, u8 *, 0xE) = (u8) (M2C_FIELD(arg0, u8 *, 0xE) & ~1);
    func_0212ea20(arg0 + 0x10, 5, 0);
    M2C_FIELD(arg0, s8 *, 0xBC)            = 3;
    M2C_FIELD(data_021c8c5c, s32 *, 0xFBC) = 0;
}
