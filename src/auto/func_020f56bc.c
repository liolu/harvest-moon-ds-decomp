#include "m2c.h"

M2C_UNK func_020c8b34(M2C_UNK *);                   /* extern */

void func_020f56bc(void *arg0) {
    M2C_UNK *temp_r0;
    M2C_UNK *var_r4;

    var_r4 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (var_r4 != NULL) {
        do {
            temp_r0 = var_r4;
            var_r4  = *var_r4;
            func_020c8b34(temp_r0);
        } while (var_r4 != NULL);
    }
    M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    M2C_FIELD(arg0, void **, 0xC)  = (void *) (arg0 + 4);
}
