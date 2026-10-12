#include "m2c.h"

M2C_UNK func_020052d0(s32);                         /* extern */
M2C_UNK func_020052d4(s32);                         /* extern */
M2C_UNK func_0200d128(s32);                         /* extern */

s32 func_02016b54(s32 arg0) {
    func_020052d0(arg0 + 0x1F0C);
    func_020052d4(arg0 + 0x1F00);
    func_0200d128(arg0);
    return arg0;
}
