#include "m2c.h"

M2C_UNK func_0212ddb4(s16, s8, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0212e2bc(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_0211d610(void *arg0) {
    s16 temp_r0;
    void *temp_r3;

    func_0212e2bc(0, 4, 0);
    temp_r3 = M2C_FIELD(arg0, void **, 0x1DC);
    temp_r0 = M2C_FIELD(temp_r3, s16 *, 0x10);
    if (temp_r0 == -1) {
        return;
    }
    func_0212ddb4(temp_r0, M2C_FIELD(temp_r3, s8 *, 0x12), 0x107, 5, 0);
}
