#include "m2c.h"

M2C_UNK func_020c8b40(s32);                         /* extern */
M2C_UNK func_0212b500();                            /* extern */

s32 *func_0212a8e0(s32 *arg0) {
    func_0212b500();
    func_020c8b40(*arg0);
    return arg0;
}
