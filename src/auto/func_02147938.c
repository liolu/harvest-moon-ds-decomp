#include "m2c.h"

M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */
s32 func_02142e98(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

void func_02147938(M2C_UNK arg0, M2C_UNK arg1) {
    if (func_02142e98(0xE, arg0, 0) == 0) {
        return;
    }
    do {
        WaitByLoop(arg1);
    } while (func_02142e98(0xE, arg0, 0) != 0);
}
