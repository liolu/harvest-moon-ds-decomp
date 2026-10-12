#include "m2c.h"

M2C_UNK func_0212ea20(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_020f15dc(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x8E) = (s16) (M2C_FIELD(arg0, s16 *, 0x8E) - 1);
    if ((s32) M2C_FIELD(arg0, s16 *, 0x8E) >= 0) {
        M2C_FIELD(arg0, s8 *, 0x87) = 1;
        return;
    }
    func_0212ea20(arg0 + 0x24, 0, 0);
    M2C_FIELD(arg0, s8 *, 0x87) = 0;
}
