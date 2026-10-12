#include "m2c.h"

s32 func_020c5794(s32);                             /* extern */
M2C_UNK func_020c57c4(s32);                         /* extern */

void func_0211f678(s32 arg0) {
    if (func_020c5794(arg0 + 0x689) != 0) {
        return;
    }
    func_020c57c4(arg0 + 0x654);
}
