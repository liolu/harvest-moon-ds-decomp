#include "m2c.h"

M2C_UNK func_020f36fc(s32, M2C_UNK);                /* extern */
M2C_UNK func_020f3728(s32, M2C_UNK);                /* extern */
M2C_UNK func_020f3c14(s32, M2C_UNK);                /* extern */
M2C_UNK func_020f3c58(s32, M2C_UNK);                /* extern */
M2C_UNK func_020f3c7c(s32, M2C_UNK);                /* extern */

void func_021178c4(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_020f3c58(M2C_FIELD(arg0, s32 *, 8), 1);
    func_020f3c14(M2C_FIELD(arg0, s32 *, 8), 2);
    func_020f36fc(M2C_FIELD(arg0, s32 *, 8), arg1);
    func_020f3728(M2C_FIELD(arg0, s32 *, 8), arg2);
    func_020f3c7c(M2C_FIELD(arg0, s32 *, 8), 0x1400);
    M2C_FIELD(arg0, s8 *, 0xC)  = 0;
    M2C_FIELD(arg0, s8 *, 0xD)  = 0;
    M2C_FIELD(arg0, s8 *, 0xE)  = 0;
    M2C_FIELD(arg0, s8 *, 0x10) = -1;
    M2C_FIELD(arg0, s8 *, 0xF)  = 0;
    M2C_FIELD(arg0, s8 *, 0x11) = -1;
}
