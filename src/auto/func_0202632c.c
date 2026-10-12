#include "m2c.h"

M2C_UNK func_020052d0(s32);                         /* extern */
M2C_UNK func_020052d4(s32);                         /* extern */
M2C_UNK func_020257dc(s32);                         /* extern */
M2C_UNK func_0214efb4(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_02017a34;

s32 func_0202632c(s32 arg0) {
    func_020052d0(arg0 + 0x5938);
    func_020052d4(arg0 + 0x592C);
    func_0214efb4(arg0 + 0x2638, 0x15, 0x1C, &func_02017a34);
    func_020257dc(arg0);
    return arg0;
}
