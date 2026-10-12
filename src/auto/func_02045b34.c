#include "m2c.h"

s32 func_0202faac();                                /* extern */

s32 func_02045b34(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, u8 *, 0x3840) != 0) {
        return 0;
    }
    return func_0202faac(arg0, arg1);
}
