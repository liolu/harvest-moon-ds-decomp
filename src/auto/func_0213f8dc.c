#include "m2c.h"

M2C_UNK WaitByLoop();                        /* extern */
s32 func_0213f9bc(); /* extern */

void func_0213f8dc(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (func_0213f9bc() <= 0) {
        return;
    }
    do {
        WaitByLoop(0x400);
    } while (func_0213f9bc(arg0, arg1, arg2, arg3) > 0);
}
