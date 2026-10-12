#include "m2c.h"

M2C_UNK func_0213a998(s32, s32);                    /* extern */
extern M2C_UNK data_021ce564;

void func_020ca1f4(s32 arg0) {
    if ((u32) (M2C_FIELD(&data_021ce564, s32 *, 0xE0) + 1) <= 1U) {
        return;
    }
    func_0213a998(M2C_FIELD(&data_021ce564, s32 *, 0x90), arg0);
    M2C_FIELD(&data_021ce564, s32 *, 0xE0) = arg0;
}
