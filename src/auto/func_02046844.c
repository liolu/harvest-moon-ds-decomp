#include "m2c.h"

extern M2C_UNK data_02154cb0;

s32 func_02046844(void *arg0, s32 arg1, void *arg2) {
    s32 temp_r1;
    void *temp_r0;

    switch (arg1) {                                 /* irregular */
        case 0:
            M2C_FIELD(arg2, s16 *, 0) = -1;
            return 1;
        case 1:
            M2C_FIELD(arg2, s16 *, 0) = (s16) * ((M2C_UNK *) ((s8 *) &data_02154cb0 + (M2C_FIELD(arg0, s32 *, 0x5C64) * 4)));
            return 1;
        default:
            temp_r1 = arg1 - 2;
            if (temp_r1 >= (s32) M2C_FIELD(arg0, s32 *, 0x5C5C)) {
                M2C_FIELD(arg2, s16 *, 0) = -1;
            } else {
                temp_r0                   = arg0 + (temp_r1 * 4);
                M2C_FIELD(arg2, s16 *, 0) = (s16) M2C_FIELD(temp_r0, s16 *, 0x5C3C);
                M2C_FIELD(arg2, s8 *, 2)  = (s8) M2C_FIELD(temp_r0, s8 *, 0x5C3E);
                M2C_FIELD(arg2, s8 *, 3)  = (s8) M2C_FIELD(temp_r0, s8 *, 0x5C3F);
            }
            return 1;
        case -1:
            return 0;
    }
}
