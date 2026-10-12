#include "m2c.h"

M2C_UNK func_02003eb4(s32);                         /* extern */
M2C_UNK func_0208ee14(s32);                         /* extern */

s32 func_0208d1ac(s32 arg0) {
    func_0208ee14(arg0 + 0xC);
    func_02003eb4(arg0);
    return arg0;
}
