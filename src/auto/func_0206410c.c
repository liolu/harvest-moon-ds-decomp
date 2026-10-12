#include "m2c.h"

M2C_UNK func_02017814(s32);                         /* extern */
M2C_UNK func_02024720(s32);                         /* extern */
M2C_UNK func_0214ef04(s32, M2C_UNK, M2C_UNK, M2C_UNK (*)(s32), M2C_UNK *); /* extern */
extern M2C_UNK func_02004534;
extern M2C_UNK func_0200453c;

s32 func_0206410c(s32 arg0) {
    func_0214ef04(arg0, 2, 0xC, func_02024720, &func_0200453c);
    func_0214ef04(arg0 + 0x18, 2, 0x30, func_02017814, &func_02004534);
    func_02024720(arg0 + 0x78);
    func_02017814(arg0 + 0x84);
    func_02024720(arg0 + 0xB4);
    func_02017814(arg0 + 0xC0);
    func_02024720(arg0 + 0xF0);
    func_02017814(arg0 + 0xFC);
    func_02024720(arg0 + 0x12C);
    func_02017814(arg0 + 0x138);
    return arg0;
}
