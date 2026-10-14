#include "m2c.h"

s32 func_020aae40(s32);                             /* extern */
u32 func_020c4eac();                                /* extern */
M2C_UNK func_0212fe94(void *, s32, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32); /* extern */

void func_0211c304(void *arg0) {
    s32 var_r4;
    u32 temp_r0;

    temp_r0 = func_020c4eac();
    var_r4  = -1;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E0), s32 *, 0x364) != 0) {
        return;
    }
    if (temp_r0 >= 0x3B9ACA00U) {
        var_r4 = 0x319;
    } else if (temp_r0 >= 0x05F5E100U) {
        var_r4 = 0x318;
    } else if (temp_r0 >= 0x989680U) {
        var_r4 = 0x317;
    } else if (temp_r0 >= 0xF4240U) {
        var_r4 = 0x316;
    } else if (temp_r0 >= 0x186A0U) {
        var_r4 = 0x315;
    } else if (temp_r0 >= 0x2710U) {
        var_r4 = 0x314;
    }
    if (var_r4 == -1) {
        return;
    }
    if (func_020aae40(var_r4) != 0) {
        return;
    }
    func_0212fe94(M2C_FIELD(arg0, void **, 0x1E0) + 8, var_r4, 0, 0, 0, 0, 0, 0, 0);
}
