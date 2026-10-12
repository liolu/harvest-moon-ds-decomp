#include "m2c.h"

M2C_UNK func_020c8d94();                            /* extern */
M2C_UNK func_020c9410(M2C_UNK, void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_021416e8(M2C_UNK, void *);             /* extern */
extern M2C_UNK data_021c8f28;
extern M2C_UNK data_021ca528;
extern M2C_UNK data_021cbb28;
extern M2C_UNK data_021cd128;
extern M2C_UNK data_021ce528;

void func_020c8e20(M2C_UNK arg0, u32 arg1, M2C_UNK arg2, s32 arg3) {
    if (arg1 < 0x80U) {
        func_020c8d94();
        return;
    }
    if (arg3 != 0) {
        func_021416e8(arg0, (M2C_UNK *)((s8 *)&data_021ca528 + arg1));
        func_020c9410(arg0, (M2C_UNK *)((s8 *)&data_021c8f28 + arg1), arg2, 1);
        M2C_FIELD(&data_021ce528, s8 *, 2) = 1;
        return;
    }
    func_021416e8(arg0, (M2C_UNK *)((s8 *)&data_021cd128 + arg1));
    func_020c9410(arg0, (M2C_UNK *)((s8 *)&data_021cbb28 + arg1), arg2, 0);
    M2C_FIELD(&data_021ce528, s8 *, 6) = 1;
}
