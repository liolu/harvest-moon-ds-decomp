/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0213a1cc(s32);                             /* extern */
void *func_0213a5a4();                              /* extern */
s32 func_0213b2c0(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_0213b498(u16, s32, M2C_UNK, M2C_UNK, s32); /* extern */

s32 func_0213b668(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3, s32 *arg4) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r0_2;

    temp_r0_2 = func_0213a5a4();
    if (temp_r0_2 == NULL) {
        return 2;
    }
    temp_r0 = func_0213b498(M2C_FIELD(temp_r0_2, u16 *, 4), arg1, arg2, arg3, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg1 & 1) {
        var_r0 = func_0213b2c0(M2C_FIELD(temp_r0_2, s32 *, 0), arg2, arg3);
        if (var_r0 == 0) {
            return 6;
        }
        goto block_8;
    }
    var_r0 = func_0213a1cc(M2C_FIELD(temp_r0_2, s32 *, 0));
block_8:
    if (arg4 != NULL) {
        *arg4 = var_r0;
    }
    return 0;
}
