#include "m2c.h"

M2C_UNK func_02004b0c(void *, u8);                  /* extern */
M2C_UNK func_02017904(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02024d84(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_02052848(M2C_UNK arg0, void *arg1, M2C_UNK arg2, M2C_UNK arg3, s16 arg4, s16 arg5, s8 arg6, u8 arg7) {
    func_02024d84(arg0, 0x33, arg2, 0x20);
    func_02017904(arg1, arg0, arg3);
    M2C_FIELD(arg1, s32 *, 4) = (s32) (arg4 << 8);
    M2C_FIELD(arg1, s32 *, 8) = (s32) (arg5 << 8);
    M2C_FIELD(arg1, s8 *, 0x10) = arg6;
    func_02004b0c(arg1 + 4, arg7);
}
