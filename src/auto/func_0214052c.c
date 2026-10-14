#include "m2c.h"

s32 func_02140524();                                /* extern */
s32 func_021405a0();                                /* extern */
s32 func_0214064c();                                /* extern */
extern s32 data_021c7318;

s32 func_0214052c(void) {
    s32 temp_r4;
    s32 var_r2;

    if (data_021c7318 == -1) {
        temp_r4 = func_021405a0();
        if (func_02140524() != 0) {
            var_r2 = temp_r4 | 0x10000000;
        } else if (func_0214064c() != 0) {
            var_r2 = temp_r4 | 0x40000000;
        } else if (temp_r4 & 0x01000000) {
            var_r2 = temp_r4 | 0x20000000;
        } else {
            var_r2 = temp_r4 | 0x80000000;
        }
        data_021c7318 = var_r2 | *(u16 *) 0x027FFFFA;
    }
    return data_021c7318;
}
