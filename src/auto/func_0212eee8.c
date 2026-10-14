#include "engine.h"
#include "m2c.h"

M2C_UNK func_0212cd60(M2C_UNK, M2C_UNK);
M2C_UNK func_0212d1e4(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0212e9f4(M2C_UNK, M2C_UNK);
void func_0212ea20(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0212eaa0(M2C_UNK, M2C_UNK);

extern M2C_UNK data_022c49c8;
extern M2C_UNK data_022c535c;
extern M2C_UNK data_022c5374;

void func_0212eee8(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r0;

    func_0212e9f4(arg1, func_0212d1e4((s32) &data_022c49c8, arg0, arg2));
    M2C_FIELD(arg1, s8 *, 0xD) = 1;
    if (arg2 != 0) {
        var_r0 = func_0212cd60((s32) &data_022c535c, 8);
    } else {
        var_r0 = func_0212cd60((s32) &data_022c5374, 8);
    }
    func_0212eaa0(arg1, var_r0);
    func_0212ea20(arg1, 0, 0);
    M2C_FIELD(arg1, s8 *, 0xC) = 0;
}
