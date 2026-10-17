#include "m2c.h"

M2C_UNK func_020c8288(void *);                      /* extern */
extern M2C_UNK data_02192e90;

void *func_020c7aec(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02192e90;
    temp_r0                        = M2C_FIELD(arg0, void ***, 4);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_020c8288(arg0);
    return arg0;
}
