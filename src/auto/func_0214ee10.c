#include "m2c.h"

void func_0214ee10(void *arg0) {
    M2C_UNK (*temp_r2)(s32, M2C_UNK);
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r1 != 0) {
        temp_r2 = M2C_FIELD(arg0, M2C_UNK(**)(s32, M2C_UNK), 8);
        if (temp_r2 != NULL) {
            temp_r2(temp_r1, -1);
        }
    }
}
