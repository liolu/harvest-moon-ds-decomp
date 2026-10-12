#include "m2c.h"

M2C_UNK func_0202475c(void *, M2C_UNK, s32, M2C_UNK, s32); /* extern */

void func_0202fe04(void *arg0, M2C_UNK arg1) {
    func_0202475c(arg0 + 0x23B4, arg1, M2C_FIELD(arg0, s32 *, 0x3210), 1, 0);
    M2C_FIELD(arg0, s32 *, 0x3210) = (s32) (u16) (M2C_FIELD(arg0, u16 *, 0x23BC) + M2C_FIELD(arg0, u16 *, 0x23BE));
    M2C_FIELD(arg0, s32 *, 0x2584) = 0;
}
