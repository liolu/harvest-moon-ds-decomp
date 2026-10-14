#include "m2c.h"

void *func_0214220c(M2C_UNK);                       /* extern */
M2C_UNK func_02142294();                            /* extern */

void func_02141f30(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_r0;

    temp_r0 = func_0214220c(1);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(temp_r0, s32 *, 4)    = arg0;
    M2C_FIELD(temp_r0, s32 *, 8)    = arg1;
    M2C_FIELD(temp_r0, s32 *, 0xC)  = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x10) = arg3;
    M2C_FIELD(temp_r0, s32 *, 0x14) = arg4;
    func_02142294();
}
