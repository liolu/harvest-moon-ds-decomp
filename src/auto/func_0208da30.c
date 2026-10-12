#include "m2c.h"

M2C_UNK func_02003eb4(s32);                         /* extern */
M2C_UNK func_02090cc0(s32);                         /* extern */
M2C_UNK func_020c8b34(s32);                         /* extern */

s32 func_0208da30(s32 arg0) {
    func_02090cc0(arg0 + 0xC);
    func_02003eb4(arg0);
    func_020c8b34(arg0);
    return arg0;
}
