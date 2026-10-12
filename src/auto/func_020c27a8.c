#include "m2c.h"

M2C_UNK func_020ba1b8(u32);                         /* extern */
extern void *data_021c8c5c;

void func_020c27a8(void) {
    u32 temp_r2_2;
    u8 temp_r2;
    void *temp_r4;

    temp_r4 = data_021c8c5c;
    temp_r2 = M2C_FIELD(temp_r4, u8 *, 0xFD8);
    if (temp_r2 != 0) {
        temp_r2_2 = M2C_FIELD(temp_r4, u32 *, 0xFD4) * temp_r2;
        M2C_FIELD(temp_r4, u32 *, 0xFD4) = temp_r2_2;
        if (temp_r2_2 > 0x3B9ACA00U) {
            M2C_FIELD(temp_r4, u32 *, 0xFD4) = 0x3B9ACA00U;
        }
    }
    func_020ba1b8(M2C_FIELD(temp_r4, u32 *, 0xFD4));
    M2C_FIELD(temp_r4, s32 *, 0xFD4) = 0;
    M2C_FIELD(temp_r4, s8 *, 0xFD8) = 0;
}
