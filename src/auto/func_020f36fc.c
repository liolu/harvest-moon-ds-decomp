#include "m2c.h"
#include "engine.h"

M2C_UNK func_020f3630(M2C_UNK);

void func_020f36fc(s32 arg0, s32 arg1) {
    if (M2C_FIELD(arg0, u8 *, 0xA) == 0) {
        *(s16 *) func_020f3630(arg0) = (s16) (arg1 >> 8);
    }
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
}
