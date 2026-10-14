#include "m2c.h"

s32 func_0213b9bc(void *, s32);                     /* extern */
extern M2C_UNK data_021ce564;
extern M2C_UNK data_021ce5f8;

s32 func_020ca11c(s32 arg0, s32 arg1) {
    if (arg1 >= 0x10) {
        return 0;
    }
    if (arg1 == 0) {
        M2C_FIELD(&data_021ce564, s32 *, 0xE8) = arg0;
    }
    if (func_0213b9bc((M2C_UNK *) ((s8 *) &data_021ce5f8 + (arg1 * 4)), arg0) == 0) {
        return 0;
    }
    return 1;
}
