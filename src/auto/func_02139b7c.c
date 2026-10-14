/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02141c98(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_02145e48(void *);                      /* extern */
M2C_UNK func_02145e60(void *);                      /* extern */

s32 func_02139b7c(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    func_02141c98(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
    temp_r0_2 = (s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F;
    if (temp_r0_2 != 0) {
        return temp_r0_2;
    }
    func_02145e48(arg0 + 8);
    func_02145e60(arg0 + 0x14);
    temp_r0                      = M2C_FIELD(arg0, s32 *, 0x24) | 2;
    M2C_FIELD(arg0, s32 *, 0x24) = temp_r0;
    return temp_r0;
}
