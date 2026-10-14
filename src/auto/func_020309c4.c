#include "m2c.h"

M2C_UNK func_02017a98(void *, M2C_UNK);             /* extern */

void func_020309c4(void *arg0) {
    s32 var_r6;
    s32 var_r6_2;
    void *var_r7;
    void *var_r7_2;

    M2C_FIELD(arg0, s32 *, 0xBA98) = (s32) (M2C_FIELD(arg0, s32 *, 0xBA98) ^ 1);
    var_r6                         = 0;
    M2C_FIELD(arg0, s32 *, 0xA0FC) = 0;
    var_r7                         = arg0 + 0x2B60;
    do {
        func_02017a98(var_r7 + 4, 0);
        var_r6 += 1;
        var_r7 += 0x1C;
    } while (var_r6 < 0x3D);
    var_r6_2 = 0;
    var_r7_2 = arg0 + 0x25E0;
    do {
        func_02017a98(var_r7_2 + 4, 0);
        var_r6_2 += 1;
        var_r7_2 += 0x2C;
    } while (var_r6_2 < 0x20);
    M2C_FIELD(arg0, s32 *, 0x3214) = (s32) M2C_FIELD(arg0, s32 *, 0xA0F8);
}
