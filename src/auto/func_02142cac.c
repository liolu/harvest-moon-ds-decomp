#include "m2c.h"

M2C_UNK func_02140968(s32, M2C_UNK);                /* extern */
M2C_UNK func_02141fac();                            /* extern */
M2C_UNK func_02141fc0();                            /* extern */

void func_02142cac(s32 arg0, s32 arg1, s32 arg2) {
    func_02141fac();
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x3C) = arg2;
    func_02140968(arg0 + 0x3C + (arg1 * 4), 4);
    func_02141fc0();
}
