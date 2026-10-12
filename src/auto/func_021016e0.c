#include "m2c.h"

M2C_UNK func_02101df0();                            /* extern */
M2C_UNK func_02103e60(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0210610c(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_021016e0(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_02101df0();
    func_02103e60(arg0 + 0xAC, arg1, arg2);
    func_0210610c(arg0 + 0x188, arg1, arg2);
}
