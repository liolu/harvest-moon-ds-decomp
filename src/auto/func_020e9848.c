#include "m2c.h"

M2C_UNK func_020e3408(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_02121114(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0212cc58(M2C_UNK *, s32, u16);         /* extern */
M2C_UNK func_0212d4d4(M2C_UNK *, M2C_UNK, s32, M2C_UNK); /* extern */
extern M2C_UNK data_022c49c8;
extern M2C_UNK data_022c535c;
extern M2C_UNK data_022c5374;

void func_020e9848(void *arg0, M2C_UNK arg1) {
    if (M2C_FIELD(arg0, u8 *, 8) != 0) {
        func_0212d4d4(&data_022c49c8, 1, M2C_FIELD(arg0, s32 *, 4), 1);
        func_0212cc58(&data_022c535c, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, u16 *, 0x38));
    }
    if (M2C_FIELD(arg0, u8 *, 9) != 0) {
        func_0212d4d4(&data_022c49c8, 1, M2C_FIELD(arg0, s32 *, 4), 0);
        func_0212cc58(&data_022c5374, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, u16 *, 0x38));
    }
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, u8 *, 9) = 0U;
    M2C_FIELD(arg0, u8 *, 8) = 0U;
    func_020e3408(arg0, arg1, 1);
    if (func_02121114(arg1, 0) == 0) {
        return;
    }
    func_020e3408(arg0, arg1, 0);
}
