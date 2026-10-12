#include "m2c.h"

M2C_UNK func_020b0ba4(s32 *);                       /* extern */
s32 func_020cb220();                                /* extern */
extern void *data_021c8c5c;

void func_020cb1ac(s8 arg0, s8 arg1) {
    s32 sp0;

    if (func_020cb220() != 0) {
        return;
    }
    if ((u32) (arg0 - 8) <= 1U) {
        func_020b0ba4(&sp0);
        M2C_FIELD(data_021c8c5c, s32 *, 0x783C) = sp0;
    }
    M2C_FIELD(data_021c8c5c, s8 *, 0x7839) = arg0;
    M2C_FIELD(data_021c8c5c, s8 *, 0x783A) = arg1;
    M2C_FIELD(data_021c8c5c, s8 *, 0x7838) = -1;
}
