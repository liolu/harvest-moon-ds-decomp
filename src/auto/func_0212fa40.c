#include "m2c.h"

M2C_UNK func_020c8b40();                            /* extern */
extern M2C_UNK data_022c538c;

void func_0212fa40(void *arg0) {
    M2C_UNK *var_r0;
    M2C_UNK *var_r1;

    if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
        return;
    }
    func_020c8b40();
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s16 *, 0x14) = 0;
    if (M2C_FIELD(arg0, u16 *, 0xC) == 0) {
        return;
    }
    var_r1 = M2C_FIELD(&data_022c538c, M2C_UNK **, 0x100);
    if (var_r1 == arg0) {
        M2C_FIELD(&data_022c538c, M2C_UNK **, 0x100) = (M2C_UNK *) M2C_FIELD(arg0, M2C_UNK **, 0);
        return;
    }
    var_r0 = *var_r1;
    if (var_r0 != arg0) {
        do {
            var_r1 = var_r0;
            var_r0 = *var_r0;
        } while (var_r0 != arg0);
    }
    *var_r1 = M2C_FIELD(arg0, M2C_UNK **, 0);
}
