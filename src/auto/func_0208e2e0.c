#include "m2c.h"

M2C_UNK func_02003eb4(s32);                         /* extern */
M2C_UNK func_0209481c(s32);                         /* extern */

s32 func_0208e2e0(s32 arg0) {
    func_0209481c(arg0 + 0xC);
    func_02003eb4(arg0);
    return arg0;
}
