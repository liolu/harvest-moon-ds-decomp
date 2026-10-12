#include "m2c.h"

s32 func_0214052c();                                /* extern */
s32 func_02140bb8(M2C_UNK);                         /* extern */
s32 func_02140c9c(M2C_UNK);                         /* extern */
M2C_UNK func_02140d44(M2C_UNK, s32);                /* extern */
M2C_UNK func_02140d58(M2C_UNK, s32);                /* extern */
M2C_UNK func_02140da0(s32);                         /* extern */
M2C_UNK func_02140da8(s32);                         /* extern */
extern M2C_UNK data_022c7064;

void func_02140b24(void) {
    func_02140d44(2, func_02140bb8(2));
    func_02140d58(2, func_02140c9c(2));
    if ((M2C_FIELD(&data_022c7064, s32 *, 4) != 0) && ((func_0214052c() & 3) != 1)) {
        return;
    }
    func_02140da0(0x0200002B);
    func_02140da8(0x023E0021);
}
