#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_022c5940;

void func_0213982c(s32 arg0, s32 arg1) {
    *((M2C_UNK *)((s8 *)&data_022c5940 + (arg0 * 0x24))) = (s32) (u16) arg1;
}
