#include "m2c.h"

M2C_UNK func_020c8b40();                            /* extern */
M2C_UNK func_0212cc2c(M2C_UNK *, u16);              /* extern */
extern M2C_UNK data_022c535c;

void func_020fb250(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x2C) == 0) {
        return;
    }
    func_020c8b40();
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    func_0212cc2c(&data_022c535c, M2C_FIELD(arg0, u16 *, 0x30));
}
