#include "m2c.h"

u32 *func_020c8b28(M2C_UNK);                        /* extern */
M2C_UNK func_020c8b40(u32 *);                       /* extern */
M2C_UNK func_020fab44(M2C_UNK, M2C_UNK, M2C_UNK, u32 *); /* extern */
M2C_UNK func_02141a4c(u32 *, M2C_UNK);              /* extern */

u32 func_020faac8(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    u32 *temp_r0;
    u32 temp_r5;

    temp_r0 = func_020c8b28(arg2);
    func_020fab44(arg0, arg1, arg2, temp_r0);
    temp_r5 = (u32) *temp_r0 >> 8;
    func_02141a4c(temp_r0, arg3);
    func_020c8b40(temp_r0);
    return temp_r5;
}
