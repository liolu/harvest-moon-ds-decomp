#include "m2c.h"

M2C_UNK func_020052d4(s32);                         /* extern */
M2C_UNK func_02008aec(s32);                         /* extern */

s32 func_0200c834(s32 arg0) {
    func_02008aec(arg0 + 0xC);
    func_020052d4(arg0);
    return arg0;
}
