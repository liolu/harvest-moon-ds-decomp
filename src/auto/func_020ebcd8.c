#include "m2c.h"

M2C_UNK func_020f3cfc(void *, M2C_UNK);             /* extern */
M2C_UNK func_020f41b0(void *);                      /* extern */
void *func_02121150(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_0212eac0(void *);                      /* extern */
M2C_UNK func_0212eb34(void *);                      /* extern */

void func_020ebcd8(void *arg0, M2C_UNK arg1) {
    s32 var_r0;
    void *temp_r0;

    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), s8 *, 1) == 0) {
        return;
    }
    temp_r0 = func_02121150(arg1, 1);
    if (temp_r0 != NULL) {
        var_r0 = M2C_FIELD(temp_r0, s32 *, 4);
    } else {
        var_r0 = -1;
    }
    if (var_r0 < 0x3A) {
        return;
    }
    if (var_r0 > 0x3F) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x37) == 0) {
        M2C_FIELD(arg0, s8 *, 0x34) = 0;
        func_0212eac0(arg0 + 0x20);
    }
    func_0212eb34(arg0 + 0x20);
    func_020f3cfc(arg0, 0);
    func_020f41b0(arg0);
}
