#include "engine.h"
#include "m2c.h"

void func_0202dab0(M2C_UNK, M2C_UNK);
void func_0202db08(M2C_UNK, M2C_UNK);
void func_020309c4(M2C_UNK);

void func_02030948(s32 arg0) {
    s32 var_r6;
    s32 var_r6_2;
    s32 var_r7;
    s32 var_r7_2;

    var_r7 = arg0 + 0x2B60;
    var_r6 = 0;
    do {
        func_0202dab0(arg0 + 0x3220, var_r7);
        var_r6 += 1;
        var_r7 += 0x1C;
    } while (var_r6 < 0x3D);
    var_r7_2 = arg0 + 0x25E0;
    var_r6_2 = 0;
    do {
        func_0202db08(arg0 + 0x3220, var_r7_2);
        var_r6_2 += 1;
        var_r7_2 += 0x2C;
    } while (var_r6_2 < 0x20);
    M2C_FIELD(arg0, s32 *, 0xA0F8) = (s32) M2C_FIELD(arg0, s32 *, 0x3214);
    func_020309c4(arg0);
}
