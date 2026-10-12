#include "m2c.h"

M2C_UNK func_020f7ca4(s32, M2C_UNK, M2C_UNK, s32);  /* extern */
extern void *data_021c8c5c;
extern s32 data_022c3ec0;

void func_021014c0(void) {
    func_020f7ca4(data_022c3ec0, 0xE, 0xD, 0x1008);
    M2C_FIELD(data_021c8c5c, u8 *, 0x5234) = (u8) (M2C_FIELD(data_021c8c5c, u8 *, 0x5234) | 2);
}
