#include "m2c.h"

M2C_UNK func_020c7864(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_020fab44(M2C_UNK, s32, M2C_UNK, s32 *); /* extern */

void func_020fab70(M2C_UNK arg0, s32 arg1) {
    s32 sp0;

    func_020fab44(arg0, arg1 * 4, 4, &sp0);
    func_020c7864(arg0, sp0, 0);
}
