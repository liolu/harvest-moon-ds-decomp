#include "m2c.h"

M2C_UNK func_02051bf4();                            /* extern */

void func_020513ec(void *arg0) {
    void **temp_r0;

    func_02051bf4();
    temp_r0 = M2C_FIELD(arg0, void ***, 0x1E74);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0x14)(temp_r0);
}
