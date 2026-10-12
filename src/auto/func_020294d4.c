#include "m2c.h"

M2C_UNK func_020173ac();                            /* extern */
M2C_UNK func_0202cb5c(s32, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK func_0213ed1c;
extern M2C_UNK func_0213ed7c;

void func_020294d4(s32 arg0) {
    func_020173ac();
    func_0202cb5c(arg0 + 0x23C8, &func_0213ed1c, 0);
    func_0202cb5c(arg0 + 0x33D8, &func_0213ed7c, 0);
}
