#include "m2c.h"

M2C_UNK func_0202fbc0();                            /* extern */
M2C_UNK func_0212d7e8(M2C_UNK *, M2C_UNK, M2C_UNK, void *, s32); /* extern */
extern M2C_UNK data_022c4ccc;

void func_020401ec(void *arg0) {
    func_0202fbc0();
    func_0212d7e8(&data_022c4ccc, 0, 0, (M2C_FIELD(arg0, s32 *, 0xBAA8) * 0x1C) + (s32) (arg0 + 0x2B60) + 4, 1);
    func_0212d7e8(&data_022c4ccc, 0, 0, arg0 + 0xBABC, 0);
    func_0212d7e8(&data_022c4ccc, 0, 0, arg0 + 0xBAEC, 0);
    func_0212d7e8(&data_022c4ccc, 0, 0, arg0 + 0xBB1C, 0);
    func_0212d7e8(&data_022c4ccc, 0, 0, arg0 + 0xBB4C, 0);
}
