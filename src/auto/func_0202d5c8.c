#include "m2c.h"

M2C_UNK func_0202db60();                            /* extern */

void func_0202d5c8(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) ((s16) (arg1 & 7) - (M2C_FIELD(arg0, u16 *, 0x22) * 8));
    func_0202db60();
}
