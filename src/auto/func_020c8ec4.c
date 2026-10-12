#include "m2c.h"

M2C_UNK func_021416e8();    /* extern */
extern M2C_UNK data_021c9128;
extern M2C_UNK data_021ca728;
extern M2C_UNK data_021cbd28;
extern M2C_UNK data_021cd328;
extern M2C_UNK data_021ce528;

void func_020c8ec4(M2C_UNK arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    if (arg3 != 0) {
        func_021416e8(arg0, (M2C_UNK *)((s8 *)&data_021ca728 + arg1));
        func_021416e8(arg0, (M2C_UNK *)((s8 *)&data_021c9128 + arg1), arg2);
        M2C_FIELD(&data_021ce528, s8 *, 1) = 1;
        return;
    }
    func_021416e8(arg0, (M2C_UNK *)((s8 *)&data_021cd328 + arg1));
    func_021416e8(arg0, (M2C_UNK *)((s8 *)&data_021cbd28 + arg1), arg2);
    M2C_FIELD(&data_021ce528, s8 *, 5) = 1;
}
