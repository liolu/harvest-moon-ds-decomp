#include "m2c.h"

s32 func_020c4f9c(s32 *, M2C_UNK *, M2C_UNK *);     /* extern */
extern M2C_UNK data_0215c354;
extern M2C_UNK data_02192e0c;
extern s32 data_021c8c5c;

void func_020c4f58(s32 arg0) {
    s32 sp0;
    void *temp_r4;

    sp0                          = arg0;
    temp_r4                      = data_021c8c5c + 0x7420;
    M2C_FIELD(temp_r4, s32 *, 8) = func_020c4f9c(&sp0, &data_02192e0c, &data_0215c354);
}
