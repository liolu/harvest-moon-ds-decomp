#include "m2c.h"

extern s32 data_021c8c5c;

void func_020b9784(void) {
    u32 temp_r0;
    void *temp_r2;

    temp_r2 = data_021c8c5c + 0x743C;
    temp_r0 = M2C_FIELD(temp_r2, u32 *, 0x38);
    if (temp_r0 < 0x3B9ACA00U) {
        M2C_FIELD(temp_r2, u32 *, 0x38) = (u32) (temp_r0 + 1);
    }
}
