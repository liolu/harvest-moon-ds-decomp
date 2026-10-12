#include "m2c.h"

M2C_UNK func_0202fe04(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0202fe64(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_020a8830(M2C_UNK);                         /* extern */

void func_020413c0(M2C_UNK arg0) {
    func_0202fe04(arg0, 0xA);
    func_0202fe64(arg0, 6, 5);
    if (func_020a8830(5) != 0) {
        func_0202fe64(arg0, 5, 0x79);
    }
    if (func_020a8830(4) != 0) {
        func_0202fe64(arg0, 4, 0x78);
    }
    if (func_020a8830(3) != 0) {
        func_0202fe64(arg0, 3, 0x77);
    }
    if (func_020a8830(2) != 0) {
        func_0202fe64(arg0, 2, 0x76);
    }
    if (func_020a8830(1) != 0) {
        func_0202fe64(arg0, 1, 0x75);
    }
    if (func_020a8830(0) == 0) {
        return;
    }
    func_0202fe64(arg0, 0, 0x74);
}
