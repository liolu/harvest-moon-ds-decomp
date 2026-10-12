/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02141e78(s32, s32);                    /* extern */
M2C_UNK func_02142cac(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_02142ce0(M2C_UNK, M2C_UNK);                /* extern */

void func_0213ae88(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (arg0 == func_02142ce0(arg2, arg3)) {
        func_02142cac(arg2, arg3, 0);
    }
    func_02141e78(arg0, arg0 + arg1);
}
