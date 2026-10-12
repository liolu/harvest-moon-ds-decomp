#include "m2c.h"

M2C_UNK func_021416cc(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_02141708(M2C_UNK, s32, M2C_UNK);       /* extern */
extern s32 data_021c8c5c;
extern M2C_UNK data_022c3ec0;

void func_020ffc94(void) {
    func_021416cc(0, data_021c8c5c + 0x5234, 4);
    func_02141708(0, data_021c8c5c + 0x4E6C, 0x3C8);
    M2C_FIELD(&data_022c3ec0, s32 *, 0) = 0;
    M2C_FIELD(&data_022c3ec0, s8 *, 4) = 0;
    M2C_FIELD(&data_022c3ec0, s8 *, 5) = 0;
}
