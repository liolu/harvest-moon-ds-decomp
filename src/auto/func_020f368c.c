#include "m2c.h"

s16 *func_020f3630();                               /* extern */

void func_020f368c(void *arg0, s16 arg1) {
    s16 *temp_r0;

    temp_r0 = func_020f3630();
    if (M2C_FIELD(arg0, volatile u8 *, 0xA) != 0) {
        M2C_FIELD(arg0, volatile s32 *, 0x10) = (s32) (arg1 << 8);
        return;
    }
    *temp_r0                              = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0x10) = (s32) (*temp_r0 << 8);
}
