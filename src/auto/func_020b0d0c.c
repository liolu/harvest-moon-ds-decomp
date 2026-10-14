#include "m2c.h"

M2C_UNK func_020f4548();                            /* extern */
extern s32 data_021c8c5c;

void func_020b0d0c(s32 arg0) {
    s8 var_r1;
    void *temp_r2;

    temp_r2                      = data_021c8c5c + 0x6170 + ((arg0 - 0x41) * 8);
    M2C_FIELD(temp_r2, u16 *, 4) = (u16) (M2C_FIELD(temp_r2, u16 *, 4) & ~1);
    if (((u32) (M2C_FIELD(temp_r2, u16 *, 4) << 0x1E) >> 0x1F) == 0) {
        var_r1 = 1;
    } else {
        var_r1 = 2;
    }
    M2C_FIELD(temp_r2, s8 *, 1) = var_r1;
    func_020f4548(arg0);
}
