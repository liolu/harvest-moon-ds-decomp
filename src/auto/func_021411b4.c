#include "m2c.h"

M2C_UNK func_02142d1c();                            /* extern */
M2C_UNK func_02142e28(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_02142e74(M2C_UNK, M2C_UNK);                /* extern */
extern u16 data_022c7120;
extern M2C_UNK func_02141208;

void func_021411b4(void) {
    if (data_022c7120 != 0) {
        return;
    }
    data_022c7120 = 1;
    func_02142d1c();
    do {

    } while (func_02142e74(0xC, 1) == 0);
    func_02142e28(0xC, &func_02141208);
}
