#include "m2c.h"

M2C_UNK func_02024740(void *);                      /* extern */
M2C_UNK func_020519cc(void *);                      /* extern */
M2C_UNK func_020c8b34(void *);                      /* extern */
extern M2C_UNK data_0217c648;
extern M2C_UNK data_0218aadc;

void *func_020512dc(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0218aadc;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x1E74);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x1E38) = &data_0217c648;
    func_02024740(arg0 + 0x1E38);
    func_020519cc(arg0);
    func_020c8b34(arg0);
    return arg0;
}
