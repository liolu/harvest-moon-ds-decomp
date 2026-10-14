#include "m2c.h"

s32 func_02145f1c(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_02146594();                            /* extern */
extern M2C_UNK data_022c8e58;
extern M2C_UNK func_02146584;

s32 func_02145f8c(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0                                = func_02145f1c(arg0, &func_02146584, 0);
    M2C_FIELD(&data_022c8e58, s32 *, 0x20) = temp_r0;
    if (temp_r0 == 0) {
        func_02146594();
    }
    return M2C_FIELD(&data_022c8e58, s32 *, 0x20);
}
