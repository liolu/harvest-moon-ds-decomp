#include "m2c.h"

s32 func_020c4d58();                                /* extern */
M2C_UNK func_020c4d94(s32);                         /* extern */

void func_020c4d78(s32 arg0) {
    func_020c4d94(arg0 + func_020c4d58());
    func_020c4d58();
}
