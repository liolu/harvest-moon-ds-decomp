#include "engine.h"
#include "m2c.h"

M2C_UNK func_02141124(void);
void func_02141138(M2C_UNK);

extern s32 data_022c73e0;
extern s32 data_022c73e4;
extern s32 data_022c741c;

s32 func_021424cc(void) {
    s32 *var_r1;
    s32 temp_r0;
    s32 temp_r4;

    temp_r0 = func_02141124();
    if (data_022c741c == 0) {
        var_r1 = &data_022c73e0;
    } else {
        var_r1 = &data_022c73e4;
    }
    temp_r4 = *var_r1;
    func_02141138(temp_r0);
    return temp_r4;
}
