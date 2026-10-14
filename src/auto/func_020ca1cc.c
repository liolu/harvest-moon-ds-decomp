#include "engine.h"
#include "m2c.h"

void func_0213a998(M2C_UNK, M2C_UNK);

extern M2C_UNK data_021ce564;

void func_020ca1cc(void) {
    if ((u32) (M2C_FIELD(&data_021ce564, s32 *, 0xE0) + 1) <= 1U) {
        return;
    }
    func_0213a998(M2C_FIELD(&data_021ce564, s32 *, 0x90), M2C_FIELD(&data_021ce564, s32 *, 0xE0));
}
