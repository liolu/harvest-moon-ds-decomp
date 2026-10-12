#include "m2c.h"

M2C_UNK func_0204ab14();                            /* extern */
M2C_UNK func_0204b50c();                            /* extern */
M2C_UNK func_0204c040();                            /* extern */
M2C_UNK func_0204ec10();                            /* extern */
s32 func_020c5794(s32);                             /* extern */
M2C_UNK func_020c57f4(s32);                         /* extern */
M2C_UNK func_020c5860(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020c5c54();                            /* extern */

void func_020c53f4(void) {
    s32 var_r4;

    func_020c5c54();
    var_r4 = 0;
    do {
        func_020c57f4(var_r4);
        var_r4 += 1;
    } while (var_r4 < 0xA);
    func_0204ab14();
    func_0204b50c();
    func_0204c040();
    func_0204ec10();
    func_020c57f4(0xA);
    if (func_020c5794(0x6E0) != 0) {
        func_020c5860(0x23, 1);
    }
    if (func_020c5794(0x727) != 0) {
        func_020c5860(0x24, 1);
    }
    if (func_020c5794(0x729) != 0) {
        func_020c5860(0x25, 1);
    }
    if (func_020c5794(0x72B) != 0) {
        func_020c5860(0x26, 1);
    }
    if (func_020c5794(0x72D) != 0) {
        func_020c5860(0x27, 1);
    }
    if (func_020c5794(0x701) != 0) {
        func_020c5860(0x28, 1);
    }
    if (func_020c5794(0x703) != 0) {
        func_020c5860(0x29, 1);
    }
    if (func_020c5794(0x705) != 0) {
        func_020c5860(0x2A, 1);
    }
    func_020c57f4(0x769);
    func_020c57f4(0x763);
    func_020c57f4(0x793);
    func_020c57f4(0x796);
    func_020c57f4(0x794);
}
