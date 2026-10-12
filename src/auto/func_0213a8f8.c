/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_021387d0(void *, s32);                 /* extern */
s32 func_02138ab8(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_0213a988();                            /* extern */

s32 func_0213a8f8(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = func_02138ab8(*arg0, 0x14, 4);
    if (temp_r0 == 0) {
        return 0;
    }
    func_0213a988();
    func_021387d0(((s8 *)arg0 + 4), temp_r0);
    return 1;
}
