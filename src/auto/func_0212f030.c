#include "m2c.h"

s32 func_0212cd60(M2C_UNK *, M2C_UNK);              /* extern */
s32 func_0212d288(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_0212e9f4(void *, s32);                 /* extern */
M2C_UNK func_0212ea20(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0212eaa0(void *, s32);                 /* extern */
extern M2C_UNK data_022c49c8;
extern M2C_UNK data_022c535c;

void func_0212f030(M2C_UNK arg0, void *arg1) {
    func_0212e9f4(arg1, func_0212d288(&data_022c49c8, arg0, 1));
    M2C_FIELD(arg1, s8 *, 0xD) = 1;
    func_0212eaa0(arg1, func_0212cd60(&data_022c535c, 8));
    func_0212ea20(arg1, 0, 0);
    M2C_FIELD(arg1, s8 *, 0xC) = 0;
}
