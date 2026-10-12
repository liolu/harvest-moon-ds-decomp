#include "m2c.h"

M2C_UNK func_020052d0(s32);                         /* extern */
M2C_UNK func_020052d4(s32);                         /* extern */
M2C_UNK func_020257dc(s32);                         /* extern */

s32 func_0202aa7c(s32 arg0) {
    func_020052d0(arg0 + 0x2BC0);
    func_020052d4(arg0 + 0x2BB4);
    func_020052d0(arg0 + 0x25B0);
    func_020052d4(arg0 + 0x25A4);
    func_020257dc(arg0);
    return arg0;
}
