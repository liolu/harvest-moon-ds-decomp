#include "m2c.h"

extern M2C_UNK data_022c5944;

void func_02139814(s32 arg0, s32 arg1) {
    *((M2C_UNK *)((s8 *)&data_022c5944 + (arg0 * 0x24))) = arg1;
}
