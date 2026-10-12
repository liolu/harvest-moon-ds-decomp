#include "m2c.h"
#include "engine.h"

M2C_UNK func_02141124(void);
void func_02141138(M2C_UNK);

extern u32 data_022c73e0;

s32 func_02142504(s32 arg0) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_02141124();
    if ((u32) arg0 > (u32) data_022c73e0) {
        if ((u32) (arg0 - data_022c73e0) < 0x80000000U) {
            var_r4 = 0;
        } else {
            var_r4 = 1;
        }
    } else if ((u32) (data_022c73e0 - arg0) < 0x80000000U) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    func_02141138(temp_r0);
    return var_r4;
}
