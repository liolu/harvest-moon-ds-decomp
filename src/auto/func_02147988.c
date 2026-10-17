#include "m2c.h"

M2C_UNK CpuSet(s32 *, M2C_UNK *, s32);              /* extern */
s16 func_0213fb34();                                /* extern */
extern M2C_UNK data_022c976c;

void func_02147988(void) {
    s32 sp0;

    sp0 = 0;
    CpuSet(&sp0, &data_022c976c, 0x05000001);
    M2C_FIELD(&data_022c976c, s16 *, 2) = func_0213fb34();
}
