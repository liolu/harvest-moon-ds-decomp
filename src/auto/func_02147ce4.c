#include "m2c.h"

M2C_UNK func_0213fa68();                            /* extern */
M2C_UNK func_02141138(s32);                         /* extern */

void func_02147ce4(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_0213fa68(arg0);
    }
    func_02141138(M2C_FIELD(arg1, s32 *, 4));
}
