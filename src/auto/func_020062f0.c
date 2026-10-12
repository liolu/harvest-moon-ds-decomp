#include "m2c.h"

M2C_UNK func_0201738c();                            /* extern */
M2C_UNK func_0212d7e8(M2C_UNK *, M2C_UNK, M2C_UNK, void *, s32); /* extern */
extern M2C_UNK data_022c4ccc;

void func_020062f0(void *arg0) {
    func_0201738c();
    if (M2C_FIELD(arg0, u8 *, 0x23C8) == 0) {
        return;
    }
    func_0212d7e8(&data_022c4ccc, 0, 0, arg0 + 0x2A1C, 0);
}
