#include "m2c.h"

s32 func_020a8528();                                /* extern */
s8 func_020a8644(s32);                              /* extern */
extern M2C_UNK data_0215ab2d;

s8 func_020b524c(s32 arg0) {
    if (func_020a8528() != -1) {
        return func_020a8644(arg0);
    }
    return *((u8 *) ((s8 *) &data_0215ab2d + (arg0 * 0xC)));
}
