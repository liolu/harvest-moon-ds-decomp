#include "m2c.h"

M2C_UNK func_0211d550(void *, s16, s8);             /* extern */

void func_02113ca4(void *arg0) {
    s16 temp_r1;
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x1DC);
    temp_r1 = M2C_FIELD(temp_r3, s16 *, 0xC);
    if (temp_r1 == -1) {
        return;
    }
    func_0211d550(arg0, temp_r1, M2C_FIELD(temp_r3, s8 *, 0xE));
}
