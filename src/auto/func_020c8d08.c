#include "m2c.h"

M2C_UNK func_021416e8();    /* extern */
extern M2C_UNK data_021c8d28;
extern M2C_UNK data_021ca328;
extern M2C_UNK data_021cb928;
extern M2C_UNK data_021ccf28;
extern M2C_UNK data_021ce528;

void func_020c8d08(M2C_UNK arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    if (arg3 != 0) {
        func_021416e8(arg0, (M2C_UNK *)((s8 *)&data_021ca328 + arg1));
        func_021416e8(arg0, (M2C_UNK *)((s8 *)&data_021c8d28 + arg1), arg2);
        M2C_FIELD(&data_021ce528, s8 *, 0) = 1;
        return;
    }
    func_021416e8(arg0, (M2C_UNK *)((s8 *)&data_021ccf28 + arg1));
    func_021416e8(arg0, (M2C_UNK *)((s8 *)&data_021cb928 + arg1), arg2);
    M2C_FIELD(&data_021ce528, s8 *, 4) = 1;
}
