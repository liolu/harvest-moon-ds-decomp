#include "m2c.h"

s32 func_021420e4(M2C_UNK);                         /* extern */
M2C_UNK func_021422dc(M2C_UNK);                     /* extern */
s32 func_021425cc();                                /* extern */
M2C_UNK func_0214266c();                            /* extern */
s32 func_02142694();                                /* extern */
s32 func_021426e4();                                /* extern */

s32 func_0214220c(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (func_021426e4() == 0) {
        return 0;
    }
    temp_r0_3 = func_02142694();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (!(arg0 & 1)) {
        return 0;
    }
    if (func_021425cc() > 0) {
        do {

        } while (func_021420e4(0) != 0);
        temp_r0_2 = func_02142694();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_021422dc(1);
block_12:
    func_0214266c();
    do {
        func_021420e4(1);
        temp_r0 = func_02142694();
    } while (temp_r0 == 0);
    return temp_r0;
}
