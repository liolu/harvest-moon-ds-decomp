#include "m2c.h"

M2C_UNK func_02144454(M2C_UNK *);                   /* extern */
s32 func_0214447c(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 func_0214463c(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[72];

    func_02144454(sp0);
    if (func_0214447c(sp0, arg1, arg0, 0) != 0) {
        return 1;
    }
    return 0;
}
