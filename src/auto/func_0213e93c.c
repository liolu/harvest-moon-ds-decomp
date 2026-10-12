#include "m2c.h"

void func_0213e93c(void *arg0, s32 arg1) {
    s32 temp_r2;
    u16 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u16 *, 0);
    temp_r2 = temp_r3 & 0xC0;
    if (arg1 < 0) {
        if (temp_r2 == 0x80) {
            M2C_FIELD(arg0, u16 *, 0) = (u16) ((temp_r3 & ~0xC0) | 0xC0);
        }
        M2C_FIELD(arg0, s16 *, 4) = (s16) (0 - arg1);
        return;
    }
    if (temp_r2 == 0xC0) {
        M2C_FIELD(arg0, u16 *, 0) = (u16) ((temp_r3 & ~0xC0) | 0x80);
    }
    M2C_FIELD(arg0, s16 *, 4) = (s16) arg1;
}
