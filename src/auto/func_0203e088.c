#include "m2c.h"

M2C_UNK func_02030070(M2C_UNK, s32, s32, s16, s32); /* extern */
M2C_UNK func_02030780(M2C_UNK, s32, s32, M2C_UNK *, s32); /* extern */
M2C_UNK func_02030bf0(M2C_UNK, s32, s32, s32, s32, s32, s32); /* extern */
s32 func_020c4084(s32);                             /* extern */
extern M2C_UNK data_02186c4c;
extern s32 data_021c8c5c;

void func_0203e088(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    func_02030bf0(arg0, (arg1 * 8) + 0x28, (arg2 * 8) + 8, arg4, 1, 0, 0);
    func_02030780(arg0, arg1 + 2, arg2, &data_02186c4c, func_020c4084(arg5));
    func_02030070(arg0, arg1 + 6, arg2 + 2, M2C_FIELD((((arg6 - 0x34) * 0x18) + data_021c8c5c), s16 *, 0x5E6A), 0x3E8);
}
