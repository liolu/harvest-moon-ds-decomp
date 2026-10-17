#include "m2c.h"

extern M2C_UNK data_021c8ca8;

s32 func_020c7660(s32 arg0) {
    if (*((s16 *) ((s8 *) &data_021c8ca8 + (arg0 * 2))) != 0) {
        return 1;
    }
    return 0;
}
