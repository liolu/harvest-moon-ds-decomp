#include "m2c.h"

M2C_UNK func_0212d7e8(M2C_UNK *, M2C_UNK, M2C_UNK, void *, s32); /* extern */
M2C_UNK func_0212eb80(void *);                      /* extern */
extern M2C_UNK data_022c4ccc;

void func_02004b24(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return;
    }
    func_0212eb80(arg0 + 0x14);
    func_0212d7e8(&data_022c4ccc, 0, 0, arg0 + 4, 0);
}
