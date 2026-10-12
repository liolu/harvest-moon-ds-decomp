/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02141868(s32);                         /* extern */

s32 func_0213bb2c(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_02141868(M2C_FIELD(arg0, s32 *, 0xA0) + arg3);
    return arg2;
}
