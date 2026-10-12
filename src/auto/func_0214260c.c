#include "m2c.h"

M2C_UNK func_02141188(M2C_UNK);                     /* extern */
s32 func_021426e4();                                /* extern */
M2C_UNK func_02142e28(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_02142e74(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK func_021425e8;

void func_0214260c(void) {
    func_02142e28(7, &func_021425e8);
    if (func_021426e4() == 0) {
        return;
    }
    if (func_02142e74(7, 1) != 0) {
        return;
    }
    do {
        func_02141188(0x64);
    } while (func_02142e74(7, 1) == 0);
}
