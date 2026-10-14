#include "m2c.h"

M2C_UNK func_020f3778(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_02128db8(void *arg0) {
    func_020f3778(arg0, 0x268, 0x276);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x74), s8 *, 1) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x74), s8 *, 0) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x74), s8 *, 2) = 0x7F;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x74), s8 *, 3) = 0;
    M2C_FIELD(arg0, s8 *, 0x78)                        = 0;
    M2C_FIELD(arg0, s8 *, 0x79)                        = 0;
    M2C_FIELD(arg0, s8 *, 0x7A)                        = 0x3C;
    M2C_FIELD(arg0, s16 *, 0x7C)                       = -1;
    M2C_FIELD(arg0, s16 *, 0x7E)                       = 0;
}
