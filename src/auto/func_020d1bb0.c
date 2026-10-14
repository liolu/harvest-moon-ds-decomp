#include "m2c.h"

s32 func_020ba360();                                /* extern */
void *func_020d34c8(M2C_UNK, s32);                  /* extern */
void *func_020f3610();                              /* extern */
extern s32 data_021c8c5c;

s32 func_020d1bb0(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r4;
    s32 var_r0;
    s32 var_r5;
    void *temp_r0_2;

    temp_r4 = func_020ba360();
    var_r5  = 0;
loop_1:
    temp_r2 = var_r5 + 0x37;
    temp_r0 = ((temp_r2 - 0x37) * 0x18) + (data_021c8c5c + 0x5EAC);
    if (temp_r4 != temp_r2) {
        temp_r2_2 = M2C_FIELD(temp_r0, s32 *, 0);
        if ((((u32) (temp_r2_2 << 0x1D) >> 0x1D) != 0) && ((u32) ((u32) (temp_r2_2 * 2) >> 0x16) >= 0x64U) &&
            (((u32) (temp_r2_2 << 0x15) >> 0x1D) == 0) && (((u32) (M2C_FIELD(temp_r0, u8 *, 0xB) << 0x1E) >> 0x1F) == 0)) {
            temp_r0_2 = func_020d34c8(arg0, var_r5);
            if (M2C_FIELD(temp_r0_2, u8 *, 0xA) != 0) {
                var_r0 = M2C_FIELD(temp_r0_2, s32 *, 0xC);
            } else {
                var_r0 = (s32) M2C_FIELD(func_020f3610(), s8 *, 4);
            }
            if (var_r0 == 1) {
                return 1;
            }
            goto block_11;
        }
    }
block_11:
    var_r5 += 1;
    if (var_r5 >= 0x1C) {
        return 0;
    }
    goto loop_1;
}
