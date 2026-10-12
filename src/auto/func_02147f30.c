#include "m2c.h"

M2C_UNK func_02142d1c();                            /* extern */
M2C_UNK func_02142e28(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_02142e74(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02147988();                            /* extern */
M2C_UNK func_02147fb4();                            /* extern */
extern M2C_UNK data_022c9780;
extern M2C_UNK func_02148168;
extern M2C_UNK func_02148194;

void func_02147f30(void) {
    if (M2C_FIELD(&data_022c9780, s32 *, 4) != 0) {
        return;
    }
    M2C_FIELD(&data_022c9780, s32 *, 4) = 1;
    func_02147988();
    func_02142d1c();
    do {

    } while (func_02142e74(0xD, 1) == 0);
    func_02142e28(0xD, &func_02148168);
    func_02147fb4();
    func_02142e28(0xD, NULL);
    func_02142e28(0xD, &func_02148194);
    M2C_FIELD(&data_022c9780, s32 *, 0) = 0;
}
