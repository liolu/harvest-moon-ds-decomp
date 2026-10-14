#include "m2c.h"

s16 func_020c4de4(s16 *, M2C_UNK *, M2C_UNK *);     /* extern */
extern M2C_UNK data_0215c358;
extern M2C_UNK data_02192e10;
extern s32 data_021c8c5c;

void func_020c5008(s32 arg0, s32 arg1) {
    s16 sp0;
    s32 temp_r4;
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 > 0xFFFF) {
        var_r1 = 0xFFFF;
    }
    sp0                                           = (s16) var_r1;
    temp_r4                                       = data_021c8c5c + 0x7420;
    M2C_FIELD((temp_r4 + (arg0 * 2)), s16 *, 0xC) = func_020c4de4(&sp0, &data_02192e10, &data_0215c358);
}
