#include "m2c.h"

M2C_UNK func_020a1844(void *);                      /* extern */
M2C_UNK func_020a1aa4(void *);                      /* extern */
M2C_UNK func_020a20c0(void *);                      /* extern */
M2C_UNK func_020c8b34(void *);                      /* extern */
extern M2C_UNK data_02190ce8;

void *func_020961d4(void *arg0) {
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r5_3;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02190ce8;
    temp_r5 = M2C_FIELD(arg0, void **, 0x7100);
    if (temp_r5 != NULL) {
        func_020a20c0(temp_r5);
        func_020c8b34(temp_r5);
    }
    temp_r5_2 = M2C_FIELD(arg0, void **, 0x70FC);
    if (temp_r5_2 != NULL) {
        func_020a1aa4(temp_r5_2);
        func_020c8b34(temp_r5_2);
    }
    temp_r5_3 = M2C_FIELD(arg0, void **, 0x70F8);
    if (temp_r5_3 != NULL) {
        func_020a1844(temp_r5_3);
        func_020c8b34(temp_r5_3);
    }
    func_020c8b34(arg0);
    return arg0;
}
