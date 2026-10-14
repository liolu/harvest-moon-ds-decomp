#include "m2c.h"

s32 func_020c4de4(s16 *, M2C_UNK *, M2C_UNK *);     /* extern */
extern M2C_UNK data_0215c34c;
extern M2C_UNK data_0215c34e;
extern void *data_021c8c5c;

void func_020c4e44(s16 arg0) {
    s16 sp0;
    void *temp_r4;

    sp0                               = arg0;
    temp_r4                           = data_021c8c5c;
    M2C_FIELD(temp_r4, u16 *, 0x7420) = (u16) ((M2C_FIELD(temp_r4, u16 *, 0x7420) & ~0xFE00) |
                                               (u16) (func_020c4de4(&sp0, &data_0215c34c, &data_0215c34e) << 9));
}
