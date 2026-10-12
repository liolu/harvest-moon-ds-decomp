#include "m2c.h"

M2C_UNK func_02138d74();                            /* extern */
s32 func_0213ac28(M2C_UNK *, M2C_UNK);              /* extern */
extern M2C_UNK data_021ce564;
extern M2C_UNK data_021ce650;

void func_020ca00c(void) {
    func_02138d74();
    M2C_FIELD(&data_021ce564, s32 *, 0x90) = func_0213ac28(&data_021ce650, 0xF0000);
    M2C_FIELD(&data_021ce564, s32 *, 0xE0) = 0;
    M2C_FIELD(&data_021ce564, s32 *, 0xE8) = 0;
}
