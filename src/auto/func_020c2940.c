#include "m2c.h"

M2C_UNK func_020c4044(M2C_UNK **, s32);             /* extern */
extern M2C_UNK data_021927c0;
extern s32 data_021c8c5c;

M2C_UNK **func_020c2940(M2C_UNK **arg0) {
    func_020c4044(arg0, data_021c8c5c + 0x398);
    *arg0 = &data_021927c0;
    return arg0;
}
