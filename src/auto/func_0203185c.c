#include "m2c.h"

M2C_UNK func_02001500(s32);                         /* extern */
M2C_UNK func_02017814(s32);                         /* extern */
M2C_UNK func_0214ef04(s32, M2C_UNK, M2C_UNK, M2C_UNK (*)(s32), M2C_UNK *); /* extern */
extern M2C_UNK func_02004534;

s32 func_0203185c(s32 arg0) {
    func_02017814(arg0 + 8);
    func_02017814(arg0 + 0x38);
    func_0214ef04(arg0 + 0x68, 3, 0x30, func_02017814, &func_02004534);
    func_02001500(arg0 + 0xF8);
    return arg0;
}
