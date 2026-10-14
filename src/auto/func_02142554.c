#include "engine.h"
#include "m2c.h"

M2C_UNK func_02141124(void);
void func_02141138(M2C_UNK);

extern M2C_UNK *data_022c7424;

s32 func_02142554(void) {
    M2C_UNK *var_r1;
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_02141124();
    var_r4  = 0;
    var_r1  = data_022c7424;
    if (var_r1 != NULL) {
        do {
            var_r1 = *var_r1;
            var_r4 += 1;
        } while (var_r1 != NULL);
    }
    func_02141138(temp_r0);
    return var_r4;
}
