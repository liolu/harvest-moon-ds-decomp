#include "m2c.h"

s32 func_020a339c();                                /* extern */
extern s32 data_021c8c5c;

s32 func_020a33d4(s32 arg0) {
    if (arg0 == 0x24) {
        return func_020a339c();
    }
    return M2C_FIELD((data_021c8c5c + (arg0 * 8)), s32 *, 0x6228);
}
