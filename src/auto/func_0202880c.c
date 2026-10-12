#include "m2c.h"

s32 func_020173e8();                                /* extern */
M2C_UNK func_020263cc();                            /* extern */
M2C_UNK func_02027480(void *);                      /* extern */

s32 func_0202880c(void *arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 4) == 0xB) {
        func_020263cc(arg0, arg1);
        func_02027480(arg0);
        M2C_FIELD(arg0, s8 *, 0x2595) = 1;
        return 0;
    }
    return func_020173e8(arg0, arg1);
}
