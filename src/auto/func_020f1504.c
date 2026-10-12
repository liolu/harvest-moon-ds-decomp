#include "m2c.h"

M2C_UNK func_020f2c50(void *, s8, s32, s32);        /* extern */

void func_020f1504(void *arg0, s8 arg1, s32 arg2, s32 arg3) {
    s32 var_r2;
    s32 var_r3;

    var_r2 = arg2;
    var_r3 = arg3;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0xD0) == 0) {
        var_r2 = M2C_FIELD(arg0, s32 *, 8);
        var_r3 = M2C_FIELD(arg0, s32 *, 0xC);
    }
    func_020f2c50(arg0 + 0x14, arg1, var_r2, var_r3);
    M2C_FIELD(arg0, s8 *, 0x85) = arg1;
    M2C_FIELD(arg0, s8 *, 0x87) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s8 *, 0x88) = 0x3B;
    M2C_FIELD(arg0, s8 *, 0x89) = 0;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0xD0) != 0) {
        M2C_FIELD(arg0, s32 *, 8) = 0;
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
}
