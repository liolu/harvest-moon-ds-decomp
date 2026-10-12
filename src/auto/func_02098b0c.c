#include "m2c.h"

M2C_UNK func_020a1844(void *);                      /* extern */
M2C_UNK func_020a1aa4(void *);                      /* extern */
M2C_UNK func_020c8b34(void *);                      /* extern */
extern M2C_UNK data_02190e50;

void *func_02098b0c(void *arg0) {
    void *temp_r4;
    void *temp_r4_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02190e50;
    temp_r4 = M2C_FIELD(arg0, void **, 0x93C8);
    if (temp_r4 != NULL) {
        func_020a1aa4(temp_r4);
        func_020c8b34(temp_r4);
    }
    temp_r4_2 = M2C_FIELD(arg0, void **, 0x93C4);
    if (temp_r4_2 != NULL) {
        func_020a1844(temp_r4_2);
        func_020c8b34(temp_r4_2);
    }
    func_020c8b34(arg0);
    return arg0;
}
