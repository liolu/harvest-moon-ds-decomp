#include "m2c.h"

M2C_UNK func_020c4044(M2C_UNK **, s32);             /* extern */
extern M2C_UNK data_021927d4;
extern s32 data_021c8c5c;

M2C_UNK **func_020c2910(M2C_UNK **arg0) {
    func_020c4044(arg0, data_021c8c5c + 0x10C);
    *arg0 = &data_021927d4;
    return arg0;
}
