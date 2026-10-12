#include "m2c.h"

M2C_UNK func_02025b70();                            /* extern */
M2C_UNK func_0202b9f8(s32, M2C_UNK);                /* extern */
M2C_UNK func_0212d7e8(M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_022c4ccc;

void func_0202bb80(s32 arg0, M2C_UNK arg1) {
    func_02025b70(arg0, arg1);
    func_0202b9f8(arg0, arg1);
    func_0212d7e8(&data_022c4ccc, 0, 0, arg0 + 0x258C, 1);
}
