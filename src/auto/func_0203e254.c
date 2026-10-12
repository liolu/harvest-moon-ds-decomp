#include "m2c.h"

M2C_UNK func_0202fe04(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0202fe64(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_020ab6c0();                                /* extern */
s32 func_020ab7a0();                                /* extern */

void func_0203e254(M2C_UNK arg0) {
    func_0202fe04(arg0, 8);
    func_0202fe64(arg0, 3, 5);
    if (func_020ab7a0() != 0) {
        func_0202fe64(arg0, 2, 0xB);
    }
    if (func_020ab6c0() != -1) {
        func_0202fe64(arg0, 1, 0xA);
    }
    func_0202fe64(arg0, 0, 9);
}
