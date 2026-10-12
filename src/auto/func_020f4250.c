#include "m2c.h"

s32 func_020d48c8(s32);                             /* extern */
M2C_UNK func_020f3e94(s32, M2C_UNK, s32, M2C_UNK);  /* extern */

void func_020f4250(s32 arg0, M2C_UNK arg1) {
    func_020f3e94(arg0, arg1, func_020d48c8(arg0 + 0x10), 3);
}
