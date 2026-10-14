#include "m2c.h"

M2C_UNK func_02142d1c();                            /* extern */
M2C_UNK func_02142e28(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_02142e74(M2C_UNK, M2C_UNK);                /* extern */
extern u16 data_022c8db0;
extern M2C_UNK data_022c8db4;
extern M2C_UNK func_02144c34;

void func_02144eb4(void) {
    if (data_022c8db0 != 0) {
        return;
    }
    data_022c8db0 = 1;
    func_02142d1c();
    M2C_FIELD(&data_022c8db4, s16 *, 0xC)  = 0;
    M2C_FIELD(&data_022c8db4, s32 *, 0)    = 0;
    M2C_FIELD(&data_022c8db4, s32 *, 0x10) = 0;
    M2C_FIELD(&data_022c8db4, s16 *, 0x32) = 0;
    M2C_FIELD(&data_022c8db4, s16 *, 0x30) = 0;
    M2C_FIELD(&data_022c8db4, s16 *, 0x36) = 0;
    M2C_FIELD(&data_022c8db4, s16 *, 0x34) = 0;
    do {

    } while (func_02142e74(6, 1) == 0);
    func_02142e28(6, &func_02144c34);
}
