#include "m2c.h"

M2C_UNK func_020c8b34(s32);                         /* extern */
M2C_UNK func_0214efb4(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_0211fea0;

s32 func_0212162c(s32 arg0) {
    func_0214efb4(arg0 + 4, 0xA, 0x20, &func_0211fea0);
    func_020c8b34(arg0);
    return arg0;
}
