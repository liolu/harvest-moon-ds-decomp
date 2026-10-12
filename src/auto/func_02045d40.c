#include "m2c.h"

M2C_UNK func_0202fe04(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0202fe64(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern u8 data_021c7790;

void func_02045d40(M2C_UNK arg0) {
    M2C_UNK var_r2;

    func_0202fe04(arg0, 0xC);
    if (data_021c7790 != 0) {
        var_r2 = 0x7B;
    } else {
        var_r2 = 0x7C;
    }
    func_0202fe64(arg0, 2, var_r2);
}
