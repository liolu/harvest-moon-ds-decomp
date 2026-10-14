#include "m2c.h"

s32 func_02134018(void *);                          /* extern */

s32 func_02133e90(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    u32 temp_r1;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if ((temp_r0 != 0) && (temp_r0 == 1)) {
        do {
            temp_r0_2 = func_02134018(arg0);
            temp_r1   = temp_r0_2 + 3;
            switch (temp_r1) {
                default:
                    break;
                case 5:
                    M2C_FIELD(arg0, s32 *, 4) = 0;
                    break;
                case 2:
                    M2C_FIELD(arg0, s32 *, 4) = 0;
                    break;
                case 1:
                    M2C_FIELD(arg0, s32 *, 4) = 0;
                    break;
                case 0:
                    M2C_FIELD(arg0, s32 *, 4) = 0;
                    break;
            }
        } while (temp_r0_2 == 0);
    }
    return M2C_FIELD(arg0, s32 *, 4);
}
