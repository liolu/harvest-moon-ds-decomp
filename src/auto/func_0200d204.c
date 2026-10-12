#include "m2c.h"

M2C_UNK func_0200d220();                            /* extern */

void func_0200d204(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, u8 *, 0x1EFC) == 0) {
        return;
    }
    func_0200d220(arg0, arg1);
}
