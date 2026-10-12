#include "m2c.h"
#include "engine.h"

M2C_UNK func_0212d1e4(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0212e9f4(M2C_UNK, M2C_UNK);
void func_0212ea20(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_022c49c8;

void func_0212efbc(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r1;

    var_r1 = 0;
    if (arg2 != 0) {
        var_r1 = func_0212d1e4((s32) &data_022c49c8, arg0, 1);
    }
    if (arg3 != 0) {
        var_r1 = func_0212d1e4((s32) &data_022c49c8, arg0, 0);
    }
    if (var_r1 == 0) {
        return;
    }
    func_0212e9f4(arg1, var_r1);
    func_0212ea20(arg1, 0, 0);
}
