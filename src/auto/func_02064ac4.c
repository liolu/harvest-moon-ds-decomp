#include "m2c.h"

M2C_UNK func_02017814(s32);                         /* extern */
M2C_UNK func_02024720(s32);                         /* extern */
M2C_UNK func_0214ef04(s32, M2C_UNK, M2C_UNK, M2C_UNK (*)(s32), M2C_UNK *); /* extern */
extern M2C_UNK func_02004534;
extern M2C_UNK func_0200453c;

s32 func_02064ac4(s32 arg0) {
    func_0214ef04(arg0, 5, 0xC, func_02024720, &func_0200453c);
    func_0214ef04(arg0 + 0x3C, 5, 0x30, func_02017814, &func_02004534);
    func_02024720(arg0 + 0x12C);
    func_02017814(arg0 + 0x138);
    func_02024720(arg0 + 0x168);
    func_02017814(arg0 + 0x174);
    return arg0;
}
