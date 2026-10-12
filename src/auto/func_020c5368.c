#include "m2c.h"

M2C_UNK func_0204b50c();                            /* extern */
M2C_UNK func_020beeac(M2C_UNK);                     /* extern */
M2C_UNK func_020c57c4(s32);                         /* extern */
M2C_UNK func_020c5844(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020c5c54();                            /* extern */
M2C_UNK func_0211d74c();                            /* extern */
M2C_UNK func_02141708(M2C_UNK, s32, M2C_UNK);       /* extern */
extern s32 data_021c8c5c;

void func_020c5368(void) {
    s32 var_r4;

    func_02141708(0, data_021c8c5c + 0x75AC, 0x258);
    func_020c5c54();
    func_020c5844(0, 0x18);
    func_0204b50c();
    func_020beeac(0x14);
    func_020c57c4(0x33B);
    func_020c57c4(0x33C);
    func_020c57c4(0x34E);
    func_020c57c4(0x350);
    var_r4 = 0x17;
    do {
        func_020c57c4(var_r4 + 0x33B);
        var_r4 += 1;
    } while (var_r4 < 0x23);
    func_0211d74c();
}
