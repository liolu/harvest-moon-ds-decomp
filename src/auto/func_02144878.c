#include "m2c.h"
#include "engine.h"

M2C_UNK func_02141124(void);
void func_02141138(M2C_UNK);

void func_02144878(s32 arg0) {
    s32 temp_r0;
    s32 var_r1;
    void *temp_r2;

    temp_r0 = func_02141124();
    if (M2C_FIELD(arg0, volatile s32 *, 0xC) & 1) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 != 0) {
        M2C_FIELD(arg0, volatile s32 *, 0xC) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0xC) | 2);
        temp_r2 = M2C_FIELD(arg0, void **, 8);
        M2C_FIELD(temp_r2, volatile s32 *, 0x1C) = (s32) (M2C_FIELD(temp_r2, volatile s32 *, 0x1C) | 0x20);
    }
    func_02141138(temp_r0);
}
