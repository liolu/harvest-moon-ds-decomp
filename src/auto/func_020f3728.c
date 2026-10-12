#include "m2c.h"
#include "engine.h"

M2C_UNK func_020f3630(M2C_UNK);

void func_020f3728(s32 arg0, s32 arg1) {
    if (M2C_FIELD(arg0, u8 *, 0xA) == 0) {
        M2C_FIELD((void *) func_020f3630(arg0), s16 *, 2) = (s16) (arg1 >> 8);
    }
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
}
