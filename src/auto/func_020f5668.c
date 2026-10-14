#include "m2c.h"

M2C_UNK func_020c8b34(M2C_UNK *);                   /* extern */

void func_020f5668(void *arg0) {
    M2C_UNK *var_r4;
    M2C_UNK *var_r5;

    var_r5 = M2C_FIELD(arg0, M2C_UNK **, 4);
    var_r4 = arg0 + 4;
    if (var_r5 != NULL) {
        do {
            if (M2C_FIELD(var_r5, s32(**)(M2C_UNK *), 4)(var_r5) != 0) {
                var_r4 = var_r5;
            } else {
                *var_r4 = M2C_FIELD(var_r5, M2C_UNK **, 0);
                func_020c8b34(var_r5);
            }
            var_r5 = *var_r4;
        } while (var_r5 != NULL);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = var_r4;
}
