#include "m2c.h"

s32 func_02051a7c();                                /* extern */
s32 func_020c7660(M2C_UNK);                         /* extern */

s32 func_02051354(void *arg0) {
    void **temp_r0;

    if (func_02051a7c() != 0) {
        return 1;
    }
    if (func_020c7660(0) != 0) {
        return 0;
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 0x1E74);
    if (temp_r0 == NULL) {
        return 0;
    }
    return M2C_FIELD(*temp_r0, s32(**)(), 0xC)(temp_r0);
}
