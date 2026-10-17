#include "m2c.h"

extern M2C_UNK data_0215ab2c;

s8 func_020b3428(s16 *arg0) {
    s16 temp_r1;

    temp_r1 = *arg0;
    if (temp_r1 == -1) {
        return 0;
    }
    return *((u8 *) ((s8 *) &data_0215ab2c + (temp_r1 * 0xC)));
}
