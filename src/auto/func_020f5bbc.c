#include "m2c.h"

M2C_UNK func_020c8b40();                            /* extern */
M2C_UNK func_020f5bf0(void *);                      /* extern */

void func_020f5bbc(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xD4) != 0) {
        func_020c8b40();
        M2C_FIELD(arg0, s32 *, 0xD4) = 0;
        M2C_FIELD(arg0, s32 *, 4)    = -1;
    }
    func_020f5bf0(arg0);
}
