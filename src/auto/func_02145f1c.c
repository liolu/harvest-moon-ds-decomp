#include "m2c.h"
#include "engine.h"

M2C_UNK func_02141124(void);
void func_02141138(M2C_UNK);
M2C_UNK func_021465b0(void);

extern M2C_UNK data_022c8e58;

s32 func_02145f1c(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    temp_r0 = func_02141124();
    if (M2C_FIELD(&data_022c8e58, s32 *, 0) != 0) {
        func_02141138(temp_r0);
        return 1;
    }
    M2C_FIELD(&data_022c8e58, s32 *, 0) = 1;
    func_02141138(temp_r0);
    M2C_FIELD(&data_022c8e58, s32 *, 0x14) = 1;
    M2C_FIELD(&data_022c8e58, s32 *, 0x18) = 0;
    M2C_FIELD(&data_022c8e58, s32 *, 4) = arg1;
    M2C_FIELD(&data_022c8e58, s32 *, 8) = arg0;
    M2C_FIELD(&data_022c8e58, s32 *, 0x10) = arg2;
    if (func_021465b0() != 0) {
        return 0;
    }
    return 3;
}
