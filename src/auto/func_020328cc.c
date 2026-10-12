#include "m2c.h"

M2C_UNK func_0202fbc0();                            /* extern */
M2C_UNK func_0212d7e8(M2C_UNK *, M2C_UNK, M2C_UNK, void *, s32); /* extern */
extern M2C_UNK data_022c4ccc;

void func_020328cc(void *arg0) {
    func_0202fbc0();
    if (M2C_FIELD(arg0, u8 *, 0xBBAC) != 0) {
        return;
    }
    func_0212d7e8(&data_022c4ccc, 0, 0, arg0 + 0xBAC0, 0);
    func_0212d7e8(&data_022c4ccc, 0, 0, arg0 + 0xBAF0, 0);
    func_0212d7e8(&data_022c4ccc, 0, 0, arg0 + 0xBB20, 0);
    func_0212d7e8(&data_022c4ccc, 0, 0, arg0 + 0xBB50, 0);
    func_0212d7e8(&data_022c4ccc, 0, 0, arg0 + 0xBB80, 0);
}
