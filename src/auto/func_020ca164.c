#include "m2c.h"

M2C_UNK func_02139764(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_021ce564;
extern M2C_UNK data_021ce5f8;

void func_020ca164(M2C_UNK arg0, s32 arg1) {
    if (arg1 >= 0x10) {
        return;
    }
    if (arg1 == 0) {
        M2C_FIELD(&data_021ce564, s32 *, 0xE8) = 0;
    }
    func_02139764((M2C_UNK *) ((s8 *) &data_021ce5f8 + (arg1 * 4)), arg0);
}
