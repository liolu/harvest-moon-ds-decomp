#include "m2c.h"

s32 func_020a8528();                                /* extern */
s8 func_020a8618(s32);                              /* extern */
extern M2C_UNK data_0215ab2c;

s8 func_020b5210(s32 arg0) {
    if (func_020a8528() != -1) {
        return func_020a8618(arg0);
    }
    return *((u8 *) ((s8 *) &data_0215ab2c + (arg0 * 0xC)));
}
