#include "m2c.h"

M2C_UNK func_02141270();                            /* extern */
M2C_UNK func_02144eb4();                            /* extern */
s32 func_02144f30(M2C_UNK *);                       /* extern */
M2C_UNK func_02144fa4(M2C_UNK *);                   /* extern */

void func_020c8344(void) {
    u8 sp0[8];

    func_02144eb4();
    if (func_02144f30(sp0) == 0) {
        func_02141270();
    }
    func_02144fa4(sp0);
}
