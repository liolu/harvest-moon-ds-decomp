#include "m2c.h"

s32 func_020c4de4(s16 *, M2C_UNK *, M2C_UNK *);     /* extern */
extern M2C_UNK data_0215c348;
extern M2C_UNK data_0215c34a;
extern void *data_021c8c5c;

void func_020c4d94(s16 arg0) {
    s16 sp0;
    void *temp_r4;

    sp0                               = arg0;
    temp_r4                           = data_021c8c5c;
    M2C_FIELD(temp_r4, u16 *, 0x7420) = (u16) ((M2C_FIELD(temp_r4, u16 *, 0x7420) & ~0x1FC) |
                                               ((u32) (func_020c4de4(&sp0, &data_0215c348, &data_0215c34a) << 0x19) >> 0x17));
}
