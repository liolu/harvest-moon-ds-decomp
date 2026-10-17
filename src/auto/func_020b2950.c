#include "m2c.h"

extern M2C_UNK data_0215ab2e;

s8 func_020b2950(s16 *arg0) {
    s16 temp_r1;

    temp_r1 = *arg0;
    if (temp_r1 == -1) {
        return -1;
    }
    return *((u8 *) ((s8 *) &data_0215ab2e + (temp_r1 * 0xC)));
}
