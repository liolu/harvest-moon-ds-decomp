#include "m2c.h"

extern M2C_UNK data_022c8f00;

s32 func_02146988(void) {
    if (M2C_FIELD(&data_022c8f00, s32 *, 0x114) != 0) {
        return 1;
    }
    return 0;
}
