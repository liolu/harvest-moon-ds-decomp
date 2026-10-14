#include "m2c.h"

M2C_UNK func_020a1844(void *);                      /* extern */
M2C_UNK func_020a1aa4(void *);                      /* extern */
M2C_UNK func_020a1d20(void *);                      /* extern */
M2C_UNK func_020c8b34(void *);                      /* extern */
extern M2C_UNK data_02190e2c;

void *func_0209a5c8(void *arg0) {
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r5_3;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02190e2c;
    temp_r5                        = M2C_FIELD(arg0, void **, 0xD538);
    if (temp_r5 != NULL) {
        func_020a1d20(temp_r5);
        func_020c8b34(temp_r5);
    }
    temp_r5_2 = M2C_FIELD(arg0, void **, 0xD534);
    if (temp_r5_2 != NULL) {
        func_020a1aa4(temp_r5_2);
        func_020c8b34(temp_r5_2);
    }
    temp_r5_3 = M2C_FIELD(arg0, void **, 0xD530);
    if (temp_r5_3 != NULL) {
        func_020a1844(temp_r5_3);
        func_020c8b34(temp_r5_3);
    }
    func_020c8b34(arg0);
    return arg0;
}
