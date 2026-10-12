#include "m2c.h"

M2C_UNK func_0202fe04(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0202fe64(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_02036708(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

void func_02036010(M2C_UNK arg0) {
    func_0202fe04(arg0, 9);
    func_0202fe64(arg0, 4, 5);
    if (func_02036708(2, 0, 0) > 0) {
        func_0202fe64(arg0, 3, 0x10);
    }
    if (func_02036708(1, 0, 0) > 0) {
        func_0202fe64(arg0, 2, 0xF);
    }
    if (func_02036708(4, 0, 0) > 0) {
        func_0202fe64(arg0, 1, 0xE);
    }
    if (func_02036708(3, 0, 0) <= 0) {
        return;
    }
    func_0202fe64(arg0, 0, 0xD);
}
