#include "m2c.h"

void *func_020f3630();                              /* extern */

void func_020f36c4(void *arg0, s16 arg1) {
    void *temp_r0;

    temp_r0 = func_020f3630();
    if (M2C_FIELD(arg0, volatile u8 *, 0xA) != 0) {
        M2C_FIELD(arg0, volatile s32 *, 0x14) = (s32) (arg1 << 8);
        return;
    }
    M2C_FIELD(temp_r0, volatile s16 *, 2) = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0x14) = (s32) (M2C_FIELD(temp_r0, volatile s16 *, 2) << 8);
}
