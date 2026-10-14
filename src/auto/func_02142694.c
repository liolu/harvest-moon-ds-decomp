#include "engine.h"
#include "m2c.h"

M2C_UNK func_02141124(void);
void func_02141138(M2C_UNK);

extern s32 data_022c7420;
extern M2C_UNK *data_022c7424;

s32 func_02142694(void) {
    M2C_UNK *temp_r2;
    M2C_UNK *temp_r4;
    s32 temp_r0;

    temp_r0 = func_02141124();
    temp_r4 = data_022c7424;
    if (temp_r4 == NULL) {
        func_02141138(temp_r0);
        return 0;
    }
    temp_r2       = *temp_r4;
    data_022c7424 = temp_r2;
    if (temp_r2 == NULL) {
        data_022c7420 = 0;
    }
    func_02141138(temp_r0);
    return (s32) temp_r4;
}
