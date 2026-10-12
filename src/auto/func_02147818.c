#include "m2c.h"

M2C_UNK func_02142d1c();                            /* extern */
M2C_UNK func_02142e28(M2C_UNK, M2C_UNK *);          /* extern */
extern s32 data_022c9764;
extern M2C_UNK func_02147844;

void func_02147818(void) {
    func_02142d1c();
    func_02142e28(0xE, &func_02147844);
    data_022c9764 = 0;
}
