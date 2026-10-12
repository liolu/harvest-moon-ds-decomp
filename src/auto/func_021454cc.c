#include "m2c.h"
#include "engine.h"

M2C_UNK func_02141124(void);
void func_02141138(M2C_UNK);

extern s32 data_022c8e44;

s32 func_021454cc(void) {
    s32 temp_r0;

    temp_r0 = func_02141124();
    if (data_022c8e44 != 0) {
        func_02141138(temp_r0);
        return 0;
    }
    data_022c8e44 = 1;
    func_02141138(temp_r0);
    return 1;
}
