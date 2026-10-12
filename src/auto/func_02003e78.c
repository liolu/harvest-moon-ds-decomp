#include "m2c.h"

M2C_UNK func_02120cec(s32);                         /* extern */

void func_02003e78(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x28) == 0) {
        return;
    }
    func_02120cec(M2C_FIELD(arg0, s32 *, 0x24));
    M2C_FIELD(arg0, u8 *, 0x28) = 0U;
}
