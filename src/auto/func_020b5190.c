#include "m2c.h"

s32 func_020b35a0(s16, s8);                         /* extern */
M2C_UNK func_020b4c08(s32, s8);                     /* extern */
extern void **data_021c8c64;

s32 func_020b5190(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0 = func_020b35a0(M2C_FIELD(arg0, s16 *, 0), M2C_FIELD(arg0, s8 *, 2));
    if (temp_r0 == -1) {
        return 0;
    }
    M2C_FIELD(*data_021c8c64, M2C_UNK(**)(void **, s32, M2C_UNK, M2C_UNK), 0x14)(data_021c8c64, temp_r0, 0x5C, arg1);
    func_020b4c08(temp_r0, M2C_FIELD(arg0, s8 *, 2));
    return 1;
}
