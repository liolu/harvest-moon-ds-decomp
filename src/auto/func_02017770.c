#include "m2c.h"

void func_02017770(void *arg0, s32 arg1, s32 arg2) {
    s32 var_r3;

    M2C_FIELD(arg0, u16 *, 0x16) = (u16) (M2C_FIELD(arg0, u16 *, 0x16) & ~0x300);
    if (arg2 != 0) {
        var_r3 = 0x300;
    } else {
        var_r3 = 0x100;
    }
    M2C_FIELD(arg0, u16 *, 0x16) = (u16) (M2C_FIELD(arg0, u16 *, 0x16) | var_r3);
    M2C_FIELD(arg0, u16 *, 0x18) = (u16) (M2C_FIELD(arg0, u16 *, 0x18) & ~0x3E00);
    M2C_FIELD(arg0, u16 *, 0x18) = (u16) (M2C_FIELD(arg0, u16 *, 0x18) | (arg1 << 9));
}
